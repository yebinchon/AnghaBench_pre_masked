
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_target_port {int dummy; } ;
struct nvmefc_tgt_fcp_req {int dummy; } ;
struct fcloop_fcpreq {int tio_done_work; } ;


 int FUNC_0 (int *) ;
 struct fcloop_fcpreq* FUNC_1 (struct nvmefc_tgt_fcp_req*) ;

__attribute__((used)) static void
FUNC_2(struct nvmet_fc_target_port *VAR_0,
   struct nvmefc_tgt_fcp_req *VAR_1)
{
 struct fcloop_fcpreq *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->tio_done_work);
}
