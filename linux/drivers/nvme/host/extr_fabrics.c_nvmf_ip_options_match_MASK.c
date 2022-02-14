
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmf_ctrl_options {int mask; int host_traddr; int trsvcid; int traddr; } ;
struct nvme_ctrl {TYPE_1__* opts; } ;
struct TYPE_2__ {int mask; int host_traddr; int trsvcid; int traddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_ctrl*,struct nvmf_ctrl_options*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

bool FUNC_2(struct nvme_ctrl *VAR_1,
  struct nvmf_ctrl_options *VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_2) ||
     FUNC_1(VAR_2->traddr, VAR_1->opts->traddr) ||
     FUNC_1(VAR_2->trsvcid, VAR_1->opts->trsvcid))
  return 0;
 if ((VAR_2->mask & VAR_0) &&
     (VAR_1->opts->mask & VAR_0)) {
  if (FUNC_1(VAR_2->host_traddr, VAR_1->opts->host_traddr))
   return 0;
 } else if ((VAR_2->mask & VAR_0) ||
     (VAR_1->opts->mask & VAR_0)) {
  return 0;
 }

 return 1;
}
