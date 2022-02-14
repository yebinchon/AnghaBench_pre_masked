
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int parent; } ;
struct cosm_device {int sysfs_heartbeat_enable; int index; TYPE_3__ dev; int state_sysfs; TYPE_2__* sdev; int attr_group; int scif_work; int reset_trigger_work; int cosm_mutex; } ;
struct TYPE_6__ {int sd; } ;
struct TYPE_7__ {TYPE_1__ kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct cosm_device*) ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_2 ;
 int FUNC_9 (struct cosm_device*) ;
 int FUNC_10 (TYPE_3__*,char*,int) ;
 TYPE_2__* FUNC_11 (int ,int ,int ,struct cosm_device*,int ,char*,int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*) ;

__attribute__((used)) static int FUNC_15(struct cosm_device *VAR_5)
{
 int VAR_6;


 if (FUNC_4(1, &VAR_4) == 1) {
  VAR_6 = FUNC_8();
  if (VAR_6)
   goto scif_exit;
 }
 FUNC_13(&VAR_5->cosm_mutex);
 FUNC_0(&VAR_5->reset_trigger_work, VAR_1);
 FUNC_0(&VAR_5->scif_work, VAR_2);
 VAR_5->sysfs_heartbeat_enable = 1;
 FUNC_9(VAR_5);
 VAR_5->sdev = FUNC_11(VAR_3, VAR_5->dev.parent,
          FUNC_2(0, VAR_5->index), VAR_5, VAR_5->attr_group,
          "mic%d", VAR_5->index);
 if (FUNC_1(VAR_5->sdev)) {
  VAR_6 = FUNC_3(VAR_5->sdev);
  FUNC_10(&VAR_5->dev, "device_create_with_groups failed rc %d\n",
   VAR_6);
  goto scif_exit;
 }

 VAR_5->state_sysfs = FUNC_14(VAR_5->sdev->kobj.sd,
  "state");
 if (!VAR_5->state_sysfs) {
  VAR_6 = -VAR_0;
  FUNC_10(&VAR_5->dev, "sysfs_get_dirent failed rc %d\n", VAR_6);
  goto destroy_device;
 }
 FUNC_6(VAR_5);
 return 0;
destroy_device:
 FUNC_12(VAR_3, FUNC_2(0, VAR_5->index));
scif_exit:
 if (FUNC_5(&VAR_4))
  FUNC_7();
 return VAR_6;
}
