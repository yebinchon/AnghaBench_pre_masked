
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct TYPE_5__ {scalar_t__ Reserved; int SequenceNumber; } ;
struct TYPE_6__ {char* SecuritySignature; TYPE_2__ Sequence; } ;
struct smb_hdr {scalar_t__ Command; TYPE_3__ Signature; } ;
struct smb_com_lock_req {int LockType; } ;
struct TCP_Server_Info {int srv_mutex; int session_estab; } ;
typedef int __u32 ;
struct TYPE_4__ {scalar_t__ iov_base; int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct smb_rqst*,struct TCP_Server_Info*,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct smb_rqst *VAR_6,
     struct TCP_Server_Info *VAR_7,
     __u32 VAR_8)
{
 unsigned int VAR_9;
 char VAR_10[8];
 char VAR_11[20];
 struct smb_hdr *VAR_12 = (struct smb_hdr *)VAR_6->rq_iov[0].iov_base;

 if (VAR_6->rq_iov[0].iov_len != 4 ||
     VAR_6->rq_iov[0].iov_base + 4 != VAR_6->rq_iov[1].iov_base)
  return -VAR_2;

 if (VAR_12 == ((void*)0) || VAR_7 == ((void*)0))
  return -VAR_1;

 if (!VAR_7->session_estab)
  return 0;

 if (VAR_12->Command == VAR_5) {
  struct smb_com_lock_req *VAR_13 =
   (struct smb_com_lock_req *)VAR_12;
  if (VAR_13->LockType & VAR_4)
   return 0;
 }





 if (FUNC_3(VAR_12->Signature.SecuritySignature, "BSRSPYL ", 8) == 0)
  FUNC_1(VAR_3, "dummy signature received for smb command 0x%x\n",
    VAR_12->Command);



 FUNC_4(VAR_10, VAR_12->Signature.SecuritySignature, 8);

 VAR_12->Signature.Sequence.SequenceNumber =
     FUNC_2(VAR_8);
 VAR_12->Signature.Sequence.Reserved = 0;

 FUNC_5(&VAR_7->srv_mutex);
 VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_11);
 FUNC_6(&VAR_7->srv_mutex);

 if (VAR_9)
  return VAR_9;




 if (FUNC_3(VAR_10, VAR_11, 8))
  return -VAR_0;
 else
  return 0;

}
