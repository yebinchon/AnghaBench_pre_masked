
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct nvme_dsm_range {int dummy; } ;
struct nvme_ctrl_ops {int module; } ;
struct TYPE_13__ {int owner; } ;
struct TYPE_16__ {int name; } ;
struct TYPE_15__ {int set_latency_tolerance; } ;
struct TYPE_18__ {TYPE_3__ kobj; TYPE_2__ power; int release; int groups; struct device* parent; int class; int devt; } ;
struct TYPE_14__ {int opcode; } ;
struct TYPE_17__ {TYPE_1__ common; } ;
struct nvme_ctrl {unsigned long quirks; int instance; scalar_t__ discard_page; TYPE_5__* device; int fault_inject; TYPE_10__ cdev; struct device* dev; TYPE_5__ ctrl_device; TYPE_4__ ka_cmd; int ka_work; int state_wq; int delete_work; int fw_act_work; int async_event_work; int scan_work; struct nvme_ctrl_ops const* ops; int namespaces_rwsem; int namespaces; int scan_lock; int lock; int state; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_10__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_10__*,int *) ;
 int VAR_6 ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_5__*,struct nvme_ctrl*) ;
 int FUNC_13 (TYPE_5__*,char*,int) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_4__*,int ,int) ;
 int FUNC_21 (int ,unsigned long) ;
 int FUNC_22 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_23 (int *,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_24 (int *) ;

int FUNC_25(struct nvme_ctrl *VAR_20, struct device *VAR_21,
  const struct nvme_ctrl_ops *VAR_22, unsigned long VAR_23)
{
 int VAR_24;

 VAR_20->state = VAR_2;
 FUNC_24(&VAR_20->lock);
 FUNC_22(&VAR_20->scan_lock);
 FUNC_2(&VAR_20->namespaces);
 FUNC_17(&VAR_20->namespaces_rwsem);
 VAR_20->dev = VAR_21;
 VAR_20->ops = VAR_22;
 VAR_20->quirks = VAR_23;
 FUNC_3(&VAR_20->scan_work, VAR_18);
 FUNC_3(&VAR_20->async_event_work, VAR_8);
 FUNC_3(&VAR_20->fw_act_work, VAR_15);
 FUNC_3(&VAR_20->delete_work, VAR_11);
 FUNC_18(&VAR_20->state_wq);

 FUNC_1(&VAR_20->ka_work, VAR_17);
 FUNC_20(&VAR_20->ka_cmd, 0, sizeof(VAR_20->ka_cmd));
 VAR_20->ka_cmd.common.opcode = VAR_7;

 FUNC_0(VAR_3 * sizeof(struct nvme_dsm_range) >
   VAR_4);
 VAR_20->discard_page = FUNC_7(VAR_1);
 if (!VAR_20->discard_page) {
  VAR_24 = -VAR_0;
  goto out;
 }

 VAR_24 = FUNC_15(&VAR_16, 0, 0, VAR_1);
 if (VAR_24 < 0)
  goto out;
 VAR_20->instance = VAR_24;

 FUNC_14(&VAR_20->ctrl_device);
 VAR_20->device = &VAR_20->ctrl_device;
 VAR_20->device->devt = FUNC_5(FUNC_4(VAR_9), VAR_20->instance);
 VAR_20->device->class = VAR_10;
 VAR_20->device->parent = VAR_20->dev;
 VAR_20->device->groups = VAR_12;
 VAR_20->device->release = VAR_14;
 FUNC_12(VAR_20->device, VAR_20);
 VAR_24 = FUNC_13(VAR_20->device, "nvme%d", VAR_20->instance);
 if (VAR_24)
  goto out_release_instance;

 FUNC_9(&VAR_20->cdev, &VAR_13);
 VAR_20->cdev.owner = VAR_22->module;
 VAR_24 = FUNC_8(&VAR_20->cdev, VAR_20->device);
 if (VAR_24)
  goto out_free_name;





 VAR_20->device->power.set_latency_tolerance = VAR_19;
 FUNC_11(VAR_20->device,
  FUNC_21(VAR_6, (unsigned long)VAR_5));

 FUNC_23(&VAR_20->fault_inject, FUNC_10(VAR_20->device));

 return 0;
out_free_name:
 FUNC_19(VAR_20->device->kobj.name);
out_release_instance:
 FUNC_16(&VAR_16, VAR_20->instance);
out:
 if (VAR_20->discard_page)
  FUNC_6(VAR_20->discard_page);
 return VAR_24;
}
