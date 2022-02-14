
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct thermal_cooling_device {TYPE_1__ device; } ;
struct device {TYPE_1__ device; } ;
struct TYPE_9__ {TYPE_3__* ops; int svc_map; } ;
struct TYPE_7__ {int quiet_period; struct thermal_cooling_device* cdev; } ;
struct ath10k {TYPE_5__* dev; TYPE_4__ wmi; TYPE_2__ thermal; } ;
struct TYPE_10__ {int kobj; } ;
struct TYPE_8__ {int gen_pdev_get_temperature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct thermal_cooling_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct thermal_cooling_device*) ;
 int VAR_3 ;
 int FUNC_3 (struct ath10k*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 struct thermal_cooling_device* FUNC_4 (TYPE_5__*,char*,struct ath10k*,int ) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int ) ;
 struct thermal_cooling_device* FUNC_8 (char*,struct ath10k*,int *) ;
 int FUNC_9 (struct thermal_cooling_device*) ;

int FUNC_10(struct ath10k *VAR_6)
{
 struct thermal_cooling_device *VAR_7;
 struct device *VAR_8;
 int VAR_9;

 if (!FUNC_7(VAR_3, VAR_6->wmi.svc_map))
  return 0;

 VAR_7 = FUNC_8("ath10k_thermal", VAR_6,
            &VAR_5);

 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_6, "failed to setup thermal device result: %ld\n",
      FUNC_2(VAR_7));
  return -VAR_2;
 }

 VAR_9 = FUNC_5(&VAR_6->dev->kobj, &VAR_7->device.kobj,
    "cooling_device");
 if (VAR_9) {
  FUNC_3(VAR_6, "failed to create cooling device symlink\n");
  goto err_cooling_destroy;
 }

 VAR_6->thermal.cdev = VAR_7;
 VAR_6->thermal.quiet_period = VAR_0;




 if (!(VAR_6->wmi.ops->gen_pdev_get_temperature))
  return 0;




 if (!FUNC_1(VAR_1))
  return 0;

 VAR_8 = FUNC_4(VAR_6->dev,
          "ath10k_hwmon", VAR_6,
          VAR_4);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_6, "failed to register hwmon device: %ld\n",
      FUNC_2(VAR_8));
  VAR_9 = -VAR_2;
  goto err_remove_link;
 }
 return 0;

err_remove_link:
 FUNC_6(&VAR_6->dev->kobj, "cooling_device");
err_cooling_destroy:
 FUNC_9(VAR_7);
 return VAR_9;
}
