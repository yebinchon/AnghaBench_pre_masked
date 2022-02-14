
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int kobj; int groups; int release; int class; } ;
struct nvme_subsystem {int instance; int ctrls; TYPE_1__ dev; int entry; int ns_ida; int subnqn; int iopolicy; void* awupf; int cmic; void* vendor_id; int firmware_rev; int model; int serial; int nsheads; int ref; int lock; } ;
struct nvme_id_ctrl {int awupf; int cmic; int vid; int fr; int mn; int sn; } ;
struct nvme_ctrl {int instance; int subsys_entry; struct nvme_subsystem* subsys; TYPE_5__* device; } ;
struct TYPE_8__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct nvme_subsystem* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct nvme_subsystem* FUNC_9 (int,int ) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct nvme_subsystem*,struct nvme_ctrl*,struct nvme_id_ctrl*) ;
 int FUNC_17 (struct nvme_subsystem*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (struct nvme_subsystem*,struct nvme_ctrl*,struct nvme_id_ctrl*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_21(struct nvme_ctrl *VAR_9, struct nvme_id_ctrl *VAR_10)
{
 struct nvme_subsystem *VAR_11, *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_9(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->instance = -1;
 FUNC_13(&VAR_11->lock);
 FUNC_8(&VAR_11->ref);
 FUNC_0(&VAR_11->ctrls);
 FUNC_0(&VAR_11->nsheads);
 FUNC_16(VAR_11, VAR_9, VAR_10);
 FUNC_12(VAR_11->serial, VAR_10->sn, sizeof(VAR_11->serial));
 FUNC_12(VAR_11->model, VAR_10->mn, sizeof(VAR_11->model));
 FUNC_12(VAR_11->firmware_rev, VAR_10->fr, sizeof(VAR_11->firmware_rev));
 VAR_11->vendor_id = FUNC_10(VAR_10->vid);
 VAR_11->cmic = VAR_10->cmic;
 VAR_11->awupf = FUNC_10(VAR_10->awupf);




 VAR_11->dev.class = VAR_6;
 VAR_11->dev.release = VAR_4;
 VAR_11->dev.groups = VAR_5;
 FUNC_4(&VAR_11->dev, "nvme-subsys%d", VAR_9->instance);
 FUNC_6(&VAR_11->dev);

 FUNC_14(&VAR_8);
 VAR_12 = FUNC_1(VAR_11->subnqn);
 if (VAR_12) {
  FUNC_19(&VAR_11->dev);
  VAR_11 = VAR_12;

  if (!FUNC_18(VAR_11, VAR_9, VAR_10)) {
   VAR_13 = -VAR_0;
   goto out_put_subsystem;
  }
 } else {
  VAR_13 = FUNC_5(&VAR_11->dev);
  if (VAR_13) {
   FUNC_2(VAR_9->device,
    "failed to register subsystem device.\n");
   FUNC_19(&VAR_11->dev);
   goto out_unlock;
  }
  FUNC_7(&VAR_11->ns_ida);
  FUNC_11(&VAR_11->entry, &VAR_7);
 }

 VAR_13 = FUNC_20(&VAR_11->dev.kobj, &VAR_9->device->kobj,
    FUNC_3(VAR_9->device));
 if (VAR_13) {
  FUNC_2(VAR_9->device,
   "failed to create sysfs link from subsystem.\n");
  goto out_put_subsystem;
 }

 if (!VAR_12)
  VAR_11->instance = VAR_9->instance;
 VAR_9->subsys = VAR_11;
 FUNC_11(&VAR_9->subsys_entry, &VAR_11->ctrls);
 FUNC_15(&VAR_8);
 return 0;

out_put_subsystem:
 FUNC_17(VAR_11);
out_unlock:
 FUNC_15(&VAR_8);
 return VAR_13;
}
