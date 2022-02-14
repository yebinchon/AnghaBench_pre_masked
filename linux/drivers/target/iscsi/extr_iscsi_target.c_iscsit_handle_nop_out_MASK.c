
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kvec {unsigned char* iov_base; int iov_len; } ;
struct iscsi_nopout {scalar_t__ ttt; unsigned char* cmdsn; int dlength; } ;
struct iscsi_conn {TYPE_3__* sess; int conn_rx_hash; TYPE_1__* conn_ops; } ;
struct iscsi_cmd {unsigned char pad_bytes; unsigned char* buf_ptr; int buf_ptr_size; struct kvec* iov_misc; } ;
struct TYPE_6__ {TYPE_2__* sess_ops; } ;
struct TYPE_5__ {int ErrorRecoveryLevel; } ;
struct TYPE_4__ {scalar_t__ DataDigest; } ;


 int FUNC_0 (struct kvec*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned char*,int,int,unsigned char,int*) ;
 int FUNC_4 (struct iscsi_cmd*,int) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_nopout*) ;
 int FUNC_6 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_nopout*) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct iscsi_conn*,struct kvec*,int,int) ;

__attribute__((used)) static int FUNC_13(struct iscsi_conn *VAR_2, struct iscsi_cmd *VAR_3,
     unsigned char *VAR_4)
{
 unsigned char *VAR_5 = ((void*)0);
 struct iscsi_nopout *VAR_6 = (struct iscsi_nopout *)VAR_4;
 struct kvec *VAR_7 = ((void*)0);
 u32 VAR_8 = FUNC_9(VAR_6->dlength);
 int VAR_9;

 VAR_9 = FUNC_6(VAR_2, VAR_3, VAR_6);
 if (VAR_9 < 0)
  return 0;



 if (VAR_8 && VAR_6->ttt == FUNC_2(0xFFFFFFFF)) {
  u32 VAR_10, VAR_11, VAR_12 = 0;
  int VAR_13 = 0, VAR_14, VAR_15 = VAR_8;

  VAR_5 = FUNC_8(VAR_8 + 1, VAR_0);
  if (!VAR_5) {
   VAR_9 = -1;
   goto out;
  }

  VAR_7 = &VAR_3->iov_misc[0];
  VAR_7[VAR_13].iov_base = VAR_5;
  VAR_7[VAR_13++].iov_len = VAR_8;

  VAR_12 = ((-VAR_8) & 3);
  if (VAR_12 != 0) {
   FUNC_10("Receiving %u additional bytes"
    " for padding.\n", VAR_12);
   VAR_7[VAR_13].iov_base = &VAR_3->pad_bytes;
   VAR_7[VAR_13++].iov_len = VAR_12;
   VAR_15 += VAR_12;
  }
  if (VAR_2->conn_ops->DataDigest) {
   VAR_7[VAR_13].iov_base = &VAR_10;
   VAR_7[VAR_13++].iov_len = VAR_1;
   VAR_15 += VAR_1;
  }

  FUNC_1(VAR_13 > FUNC_0(VAR_3->iov_misc));
  VAR_14 = FUNC_12(VAR_2, &VAR_3->iov_misc[0], VAR_13, VAR_15);
  if (VAR_14 != VAR_15) {
   VAR_9 = -1;
   goto out;
  }

  if (VAR_2->conn_ops->DataDigest) {
   FUNC_3(VAR_2->conn_rx_hash, VAR_5,
        VAR_8, VAR_12,
        VAR_3->pad_bytes, &VAR_11);

   if (VAR_10 != VAR_11) {
    FUNC_11("Ping data CRC32C DataDigest"
    " 0x%08x does not match computed 0x%08x\n",
     VAR_10, VAR_11);
    if (!VAR_2->sess->sess_ops->ErrorRecoveryLevel) {
     FUNC_11("Unable to recover from"
     " NOPOUT Ping DataCRC failure while in"
      " ERL=0.\n");
     VAR_9 = -1;
     goto out;
    } else {




     FUNC_10("Dropping NOPOUT"
     " Command CmdSN: 0x%08x due to"
     " DataCRC error.\n", VAR_6->cmdsn);
     VAR_9 = 0;
     goto out;
    }
   } else {
    FUNC_10("Got CRC32C DataDigest"
    " 0x%08x for %u bytes of ping data.\n",
     VAR_10, VAR_8);
   }
  }

  VAR_5[VAR_8] = '\0';



  VAR_3->buf_ptr = VAR_5;
  VAR_3->buf_ptr_size = VAR_8;

  FUNC_10("Got %u bytes of NOPOUT ping"
   " data.\n", VAR_8);
  FUNC_10("Ping Data: \"%s\"\n", VAR_5);
 }

 return FUNC_5(VAR_2, VAR_3, VAR_6);
out:
 if (VAR_3)
  FUNC_4(VAR_3, 0);

 FUNC_7(VAR_5);
 return VAR_9;
}
