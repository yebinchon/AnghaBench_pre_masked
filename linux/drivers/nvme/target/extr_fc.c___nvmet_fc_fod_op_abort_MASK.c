
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_tgtport {int dummy; } ;
struct nvmet_fc_fcp_iod {int req; struct nvmet_fc_tgtport* tgtport; struct nvmefc_tgt_fcp_req* fcpreq; } ;
struct nvmefc_tgt_fcp_req {scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline bool
FUNC_2(struct nvmet_fc_fcp_iod *VAR_2, bool VAR_3)
{
 struct nvmefc_tgt_fcp_req *VAR_4 = VAR_2->fcpreq;
 struct nvmet_fc_tgtport *VAR_5 = VAR_2->tgtport;


 if (VAR_3) {
  if (VAR_4->op == VAR_0) {
   FUNC_1(&VAR_2->req, VAR_1);
   return 1;
  }

  FUNC_0(VAR_5, VAR_2);
  return 1;
 }

 return 0;
}
