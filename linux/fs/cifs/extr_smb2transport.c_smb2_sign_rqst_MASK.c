
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_rqst {TYPE_2__* rq_iov; } ;
struct smb2_sync_hdr {int Flags; int Signature; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; TYPE_1__* ops; int session_estab; } ;
struct TYPE_4__ {scalar_t__ iov_base; } ;
struct TYPE_3__ {int (* calc_signature ) (struct smb_rqst*,struct TCP_Server_Info*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct smb_rqst*,struct TCP_Server_Info*) ;

__attribute__((used)) static int
FUNC_2(struct smb_rqst *VAR_2, struct TCP_Server_Info *VAR_3)
{
 int VAR_4 = 0;
 struct smb2_sync_hdr *VAR_5 =
   (struct smb2_sync_hdr *)VAR_2->rq_iov[0].iov_base;

 if (!(VAR_5->Flags & VAR_1) ||
     VAR_3->tcpStatus == VAR_0)
  return VAR_4;

 if (!VAR_3->session_estab) {
  FUNC_0(VAR_5->Signature, "BSRSPYL", 8);
  return VAR_4;
 }

 VAR_4 = VAR_3->ops->calc_signature(VAR_2, VAR_3);

 return VAR_4;
}
