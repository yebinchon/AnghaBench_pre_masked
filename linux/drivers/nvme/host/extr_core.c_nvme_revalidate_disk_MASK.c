
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ns_ids {int dummy; } ;
struct nvme_ns {TYPE_1__* head; int flags; struct nvme_ctrl* ctrl; } ;
struct nvme_id_ns {scalar_t__ ncap; } ;
struct nvme_ctrl {int device; } ;
struct gendisk {struct nvme_ns* private_data; } ;
struct TYPE_2__ {int ns_id; int ids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gendisk*,struct nvme_id_ns*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct nvme_id_ns*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nvme_ctrl*,int ,struct nvme_id_ns**) ;
 int FUNC_6 (int *,struct nvme_ns_ids*) ;
 int FUNC_7 (struct nvme_ctrl*,int ,struct nvme_id_ns*,struct nvme_ns_ids*) ;
 int FUNC_8 (struct gendisk*,int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct gendisk *VAR_4)
{
 struct nvme_ns *VAR_5 = VAR_4->private_data;
 struct nvme_ctrl *VAR_6 = VAR_5->ctrl;
 struct nvme_id_ns *VAR_7;
 struct nvme_ns_ids VAR_8;
 int VAR_9 = 0;

 if (FUNC_9(VAR_2, &VAR_5->flags)) {
  FUNC_8(VAR_4, 0);
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_6, VAR_5->head->ns_id, &VAR_7);
 if (VAR_9)
  goto out;

 if (VAR_7->ncap == 0) {
  VAR_9 = -VAR_0;
  goto free_id;
 }

 FUNC_0(VAR_4, VAR_7);
 VAR_9 = FUNC_7(VAR_6, VAR_5->head->ns_id, VAR_7, &VAR_8);
 if (VAR_9)
  goto free_id;

 if (!FUNC_6(&VAR_5->head->ids, &VAR_8)) {
  FUNC_2(VAR_6->device,
   "identifiers changed for nsid %d\n", VAR_5->head->ns_id);
  VAR_9 = -VAR_0;
 }

free_id:
 FUNC_3(VAR_7);
out:




 if (VAR_9 == -VAR_1 || (VAR_9 > 0 && !(VAR_9 & VAR_3)))
  VAR_9 = 0;
 else if (VAR_9 > 0)
  VAR_9 = FUNC_1(FUNC_4(VAR_9));
 return VAR_9;
}
