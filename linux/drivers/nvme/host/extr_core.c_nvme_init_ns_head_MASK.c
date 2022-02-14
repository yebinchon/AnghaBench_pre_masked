
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns_ids {int dummy; } ;
struct nvme_ns_head {int list; int ids; } ;
struct nvme_ns {struct nvme_ns_head* head; int siblings; struct nvme_ctrl* ctrl; } ;
struct nvme_id_ns {int nmic; } ;
struct nvme_ctrl {TYPE_1__* subsys; int device; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvme_ns_head*) ;
 int FUNC_1 (struct nvme_ns_head*) ;
 struct nvme_ns_head* FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct nvme_ns_head* FUNC_8 (struct nvme_ctrl*,unsigned int,struct nvme_id_ns*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,struct nvme_ns_ids*) ;
 int FUNC_11 (struct nvme_ctrl*,unsigned int,struct nvme_id_ns*,struct nvme_ns_ids*) ;

__attribute__((used)) static int FUNC_12(struct nvme_ns *VAR_1, unsigned VAR_2,
  struct nvme_id_ns *VAR_3)
{
 struct nvme_ctrl *VAR_4 = VAR_1->ctrl;
 bool VAR_5 = VAR_3->nmic & (1 << 0);
 struct nvme_ns_head *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 FUNC_6(&VAR_4->subsys->lock);
 if (VAR_5)
  VAR_6 = FUNC_2(VAR_4->subsys, VAR_2);
 if (!VAR_6) {
  VAR_6 = FUNC_8(VAR_4, VAR_2, VAR_3);
  if (FUNC_0(VAR_6)) {
   VAR_7 = FUNC_1(VAR_6);
   goto out_unlock;
  }
 } else {
  struct nvme_ns_ids VAR_8;

  VAR_7 = FUNC_11(VAR_4, VAR_2, VAR_3, &VAR_8);
  if (VAR_7)
   goto out_unlock;

  if (!FUNC_10(&VAR_6->ids, &VAR_8)) {
   FUNC_4(VAR_4->device,
    "IDs don't match for shared namespace %d\n",
     VAR_2);
   VAR_7 = -VAR_0;
   goto out_unlock;
  }
 }

 FUNC_5(&VAR_1->siblings, &VAR_6->list);
 VAR_1->head = VAR_6;

out_unlock:
 FUNC_7(&VAR_4->subsys->lock);
 if (VAR_7 > 0)
  VAR_7 = FUNC_3(FUNC_9(VAR_7));
 return VAR_7;
}
