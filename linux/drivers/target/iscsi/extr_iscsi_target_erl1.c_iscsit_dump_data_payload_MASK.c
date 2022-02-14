
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvec {char* iov_base; scalar_t__ iov_len; } ;
struct iscsi_conn {TYPE_3__* conn_ops; TYPE_2__* sess; } ;
struct TYPE_6__ {scalar_t__ DataDigest; } ;
struct TYPE_5__ {TYPE_1__* sess_ops; } ;
struct TYPE_4__ {scalar_t__ RDMAExtensions; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct kvec*,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (struct iscsi_conn*,struct kvec*,int,scalar_t__) ;

int FUNC_7(
 struct iscsi_conn *VAR_5,
 u32 VAR_6,
 int VAR_7)
{
 char *VAR_8;
 int VAR_9 = VAR_1, VAR_10;
 u32 VAR_11, VAR_12 = 0, VAR_13;
 struct kvec VAR_14;

 if (VAR_5->sess->sess_ops->RDMAExtensions)
  return 0;

 if (VAR_7) {
  VAR_6 = FUNC_0(VAR_6, 4);
  if (VAR_5->conn_ops->DataDigest)
   VAR_6 += VAR_3;
 }

 VAR_11 = FUNC_4(VAR_6, VAR_4);

 VAR_8 = FUNC_2(VAR_11, VAR_2);
 if (!VAR_8) {
  FUNC_5("Unable to allocate %u bytes for offload"
    " buffer.\n", VAR_11);
  return -1;
 }
 FUNC_3(&VAR_14, 0, sizeof(struct kvec));

 while (VAR_12 < VAR_6) {
  VAR_13 = FUNC_4(VAR_6 - VAR_12, VAR_11);

  VAR_14.iov_len = VAR_13;
  VAR_14.iov_base = VAR_8;

  VAR_10 = FUNC_6(VAR_5, &VAR_14, 1, VAR_13);
  if (VAR_10 != VAR_13) {
   VAR_9 = VAR_0;
   break;
  }

  VAR_12 += VAR_13;
 }

 FUNC_1(VAR_8);
 return VAR_9;
}
