
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct smb2_sync_hdr {scalar_t__ Command; char* Signature; } ;
struct TCP_Server_Info {int srv_mutex; TYPE_2__* ops; int session_estab; scalar_t__ ignore_signature; } ;
struct TYPE_4__ {unsigned int (* calc_signature ) (struct smb_rqst*,struct TCP_Server_Info*) ;} ;
struct TYPE_3__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (struct smb_rqst*,struct TCP_Server_Info*) ;

int
FUNC_7(struct smb_rqst *VAR_6, struct TCP_Server_Info *VAR_7)
{
 unsigned int VAR_8;
 char VAR_9[16];
 struct smb2_sync_hdr *VAR_10 =
   (struct smb2_sync_hdr *)VAR_6->rq_iov[0].iov_base;

 if ((VAR_10->Command == VAR_2) ||
     (VAR_10->Command == VAR_4) ||
     (VAR_10->Command == VAR_3) ||
     VAR_7->ignore_signature ||
     (!VAR_7->session_estab))
  return 0;







 if (FUNC_1(VAR_10->Signature, "BSRSPYL ", 8) == 0)
  FUNC_0(VAR_1, "dummy signature received for smb command 0x%x\n",
    VAR_10->Command);





 FUNC_2(VAR_9, VAR_10->Signature, VAR_5);

 FUNC_3(VAR_10->Signature, 0, VAR_5);

 FUNC_4(&VAR_7->srv_mutex);
 VAR_8 = VAR_7->ops->calc_signature(VAR_6, VAR_7);
 FUNC_5(&VAR_7->srv_mutex);

 if (VAR_8)
  return VAR_8;

 if (FUNC_1(VAR_9, VAR_10->Signature, VAR_5))
  return -VAR_0;
 else
  return 0;
}
