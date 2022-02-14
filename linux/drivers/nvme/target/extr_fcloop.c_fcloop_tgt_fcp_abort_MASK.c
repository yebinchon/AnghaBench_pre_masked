
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_target_port {int dummy; } ;
struct nvmefc_tgt_fcp_req {int dummy; } ;
struct fcloop_fcpreq {int aborted; int status; int reqlock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct fcloop_fcpreq* FUNC_2 (struct nvmefc_tgt_fcp_req*) ;

__attribute__((used)) static void
FUNC_3(struct nvmet_fc_target_port *VAR_1,
   struct nvmefc_tgt_fcp_req *VAR_2)
{
 struct fcloop_fcpreq *VAR_3 = FUNC_2(VAR_2);






 FUNC_0(&VAR_3->reqlock);
 VAR_3->aborted = 1;
 FUNC_1(&VAR_3->reqlock);

 VAR_3->status = VAR_0;






}
