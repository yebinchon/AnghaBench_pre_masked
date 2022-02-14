
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thermal_cooling_device {int dummy; } ;
struct device_node {int dummy; } ;
struct devfreq_cooling_power {int dummy; } ;
struct devfreq_cooling_device {int id; struct devfreq_cooling_device* freq_table; struct devfreq_cooling_device* power_table; struct thermal_cooling_device* cdev; struct devfreq_cooling_power* power_ops; struct devfreq* devfreq; } ;
struct TYPE_4__ {int parent; } ;
struct devfreq {TYPE_1__ dev; } ;
typedef int dev_name ;
struct TYPE_5__ {int power2state; int state2power; int get_requested_power; } ;


 int VAR_0 ;
 struct thermal_cooling_device* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct thermal_cooling_device*) ;
 int FUNC_2 (struct thermal_cooling_device*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct devfreq_cooling_device*) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct devfreq_cooling_device*) ;
 struct devfreq_cooling_device* FUNC_8 (int,int ) ;
 int FUNC_9 (char*,int,char*,int) ;
 struct thermal_cooling_device* FUNC_10 (struct device_node*,char*,struct devfreq_cooling_device*,TYPE_2__*) ;

struct thermal_cooling_device *
FUNC_11(struct device_node *VAR_8, struct devfreq *VAR_9,
      struct devfreq_cooling_power *VAR_10)
{
 struct thermal_cooling_device *VAR_11;
 struct devfreq_cooling_device *VAR_12;
 char VAR_13[VAR_2];
 int VAR_14;

 VAR_12 = FUNC_8(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 VAR_12->devfreq = VAR_9;

 if (VAR_10) {
  VAR_12->power_ops = VAR_10;

  VAR_4.get_requested_power =
   VAR_3;
  VAR_4.state2power = VAR_6;
  VAR_4.power2state = VAR_5;
 }

 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14)
  goto free_dfc;

 VAR_14 = FUNC_5(&VAR_7, 0, 0, VAR_1);
 if (VAR_14 < 0)
  goto free_tables;
 VAR_12->id = VAR_14;

 FUNC_9(VAR_13, sizeof(VAR_13), "thermal-devfreq-%d", VAR_12->id);

 VAR_11 = FUNC_10(VAR_8, VAR_13, VAR_12,
        &VAR_4);
 if (FUNC_1(VAR_11)) {
  VAR_14 = FUNC_2(VAR_11);
  FUNC_3(VAR_9->dev.parent,
   "Failed to register devfreq cooling device (%d)\n",
   VAR_14);
  goto release_ida;
 }

 VAR_12->cdev = VAR_11;

 return VAR_11;

release_ida:
 FUNC_6(&VAR_7, VAR_12->id);
free_tables:
 FUNC_7(VAR_12->power_table);
 FUNC_7(VAR_12->freq_table);
free_dfc:
 FUNC_7(VAR_12);

 return FUNC_0(VAR_14);
}
