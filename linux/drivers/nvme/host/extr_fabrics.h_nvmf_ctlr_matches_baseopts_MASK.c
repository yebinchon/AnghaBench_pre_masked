
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid_t ;
struct nvmf_ctrl_options {TYPE_1__* host; int subsysnqn; } ;
struct nvme_ctrl {scalar_t__ state; TYPE_3__* opts; } ;
struct TYPE_6__ {TYPE_2__* host; int subsysnqn; } ;
struct TYPE_5__ {int id; int nqn; } ;
struct TYPE_4__ {int id; int nqn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_2(struct nvme_ctrl *VAR_2,
   struct nvmf_ctrl_options *VAR_3)
{
 if (VAR_2->state == VAR_1 ||
     VAR_2->state == VAR_0 ||
     FUNC_1(VAR_3->subsysnqn, VAR_2->opts->subsysnqn) ||
     FUNC_1(VAR_3->host->nqn, VAR_2->opts->host->nqn) ||
     FUNC_0(&VAR_3->host->id, &VAR_2->opts->host->id, sizeof(uuid_t)))
  return 0;

 return 1;
}
