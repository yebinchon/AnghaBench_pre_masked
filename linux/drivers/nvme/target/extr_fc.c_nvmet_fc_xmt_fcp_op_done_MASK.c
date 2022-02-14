
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_fcp_iod {int dummy; } ;
struct nvmefc_tgt_fcp_req {struct nvmet_fc_fcp_iod* nvmet_fc_private; } ;


 int FUNC_0 (struct nvmet_fc_fcp_iod*) ;

__attribute__((used)) static void
FUNC_1(struct nvmefc_tgt_fcp_req *VAR_0)
{
 struct nvmet_fc_fcp_iod *VAR_1 = VAR_0->nvmet_fc_private;

 FUNC_0(VAR_1);
}
