
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_req {int dummy; } ;
struct nvmet_fc_tgtport {int dummy; } ;
struct nvmet_fc_fcp_iod {struct nvmet_fc_tgtport* tgtport; } ;


 int FUNC_0 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*,int ) ;
 struct nvmet_fc_fcp_iod* FUNC_1 (struct nvmet_req*) ;

__attribute__((used)) static void
FUNC_2(struct nvmet_req *VAR_0)
{
 struct nvmet_fc_fcp_iod *VAR_1 = FUNC_1(VAR_0);
 struct nvmet_fc_tgtport *VAR_2 = VAR_1->tgtport;

 FUNC_0(VAR_2, VAR_1, 0);
}
