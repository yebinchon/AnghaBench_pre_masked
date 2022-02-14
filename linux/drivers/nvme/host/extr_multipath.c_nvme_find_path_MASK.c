
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns_head {TYPE_1__* subsys; int srcu; int * current_path; } ;
struct nvme_ns {int dummy; } ;
struct TYPE_2__ {int iopolicy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct nvme_ns* FUNC_1 (struct nvme_ns_head*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct nvme_ns*) ;
 struct nvme_ns* FUNC_4 (struct nvme_ns_head*,int,struct nvme_ns*) ;
 struct nvme_ns* FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

inline struct nvme_ns *FUNC_7(struct nvme_ns_head *VAR_1)
{
 int VAR_2 = FUNC_2();
 struct nvme_ns *VAR_3;

 VAR_3 = FUNC_5(VAR_1->current_path[VAR_2], &VAR_1->srcu);
 if (FUNC_0(VAR_1->subsys->iopolicy) == VAR_0 && VAR_3)
  VAR_3 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (FUNC_6(!VAR_3 || !FUNC_3(VAR_3)))
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 return VAR_3;
}
