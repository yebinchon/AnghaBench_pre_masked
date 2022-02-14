
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kvec {char* iov_base; int iov_len; } ;
struct iscsi_text {int cmdsn; int dlength; } ;
struct iscsi_conn {TYPE_3__* sess; int conn_rx_hash; TYPE_1__* conn_ops; } ;
struct iscsi_cmd {char* text_in_ptr; } ;
typedef int iov ;
struct TYPE_6__ {TYPE_2__* sess_ops; } ;
struct TYPE_5__ {int ErrorRecoveryLevel; } ;
struct TYPE_4__ {scalar_t__ DataDigest; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct kvec*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int ,int *,int*) ;
 int FUNC_4 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_text*) ;
 int FUNC_5 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_6 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_text*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int,int ) ;
 int FUNC_9 (struct kvec*,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,...) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct iscsi_conn*,struct kvec*,int,int) ;

__attribute__((used)) static int
FUNC_14(struct iscsi_conn *VAR_3, struct iscsi_cmd *VAR_4,
         unsigned char *VAR_5)
{
 struct iscsi_text *VAR_6 = (struct iscsi_text *)VAR_5;
 char *VAR_7 = ((void*)0);
 u32 VAR_8 = FUNC_10(VAR_6->dlength);
 int VAR_9, VAR_10;

 VAR_10 = FUNC_6(VAR_3, VAR_4, VAR_6);
 if (VAR_10 < 0)
  return 0;

 VAR_9 = VAR_8;
 if (VAR_8) {
  u32 VAR_11 = 0, VAR_12 = 0;
  u32 VAR_13 = 0;
  int VAR_14 = 0, VAR_15;
  struct kvec VAR_16[2];

  VAR_9 = FUNC_0(VAR_8, 4);
  VAR_7 = FUNC_8(VAR_9, VAR_0);
  if (!VAR_7)
   goto reject;

  VAR_4->text_in_ptr = VAR_7;

  FUNC_9(VAR_16, 0, sizeof(VAR_16));
  VAR_16[VAR_14].iov_base = VAR_7;
  VAR_16[VAR_14++].iov_len = VAR_9;

  VAR_13 = VAR_9 - VAR_8;
  if (VAR_13)
   FUNC_11("Receiving %u additional bytes"
     " for padding.\n", VAR_13);
  if (VAR_3->conn_ops->DataDigest) {
   VAR_16[VAR_14].iov_base = &VAR_11;
   VAR_16[VAR_14++].iov_len = VAR_1;
   VAR_9 += VAR_1;
  }

  FUNC_2(VAR_14 > FUNC_1(VAR_16));
  VAR_15 = FUNC_13(VAR_3, &VAR_16[0], VAR_14, VAR_9);
  if (VAR_15 != VAR_9)
   goto reject;

  if (VAR_3->conn_ops->DataDigest) {
   FUNC_3(VAR_3->conn_rx_hash,
        VAR_7, VAR_9, 0, ((void*)0),
        &VAR_12);

   if (VAR_11 != VAR_12) {
    FUNC_12("Text data CRC32C DataDigest"
     " 0x%08x does not match computed"
     " 0x%08x\n", VAR_11, VAR_12);
    if (!VAR_3->sess->sess_ops->ErrorRecoveryLevel) {
     FUNC_12("Unable to recover from"
     " Text Data digest failure while in"
      " ERL=0.\n");
     goto reject;
    } else {




     FUNC_11("Dropping Text"
     " Command CmdSN: 0x%08x due to"
     " DataCRC error.\n", VAR_6->cmdsn);
     FUNC_7(VAR_7);
     return 0;
    }
   } else {
    FUNC_11("Got CRC32C DataDigest"
     " 0x%08x for %u bytes of text data.\n",
      VAR_11, VAR_8);
   }
  }
  VAR_7[VAR_8 - 1] = '\0';
  FUNC_11("Successfully read %d bytes of text"
    " data.\n", VAR_8);
 }

 return FUNC_4(VAR_3, VAR_4, VAR_6);

reject:
 FUNC_7(VAR_4->text_in_ptr);
 VAR_4->text_in_ptr = ((void*)0);
 return FUNC_5(VAR_4, VAR_2, VAR_5);
}
