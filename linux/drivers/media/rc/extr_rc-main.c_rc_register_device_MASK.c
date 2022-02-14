
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int kobj; int ** groups; } ;
struct rc_dev {int minor; scalar_t__ driver_type; int registered; scalar_t__ allowed_protocols; char* driver_name; int rc_map; TYPE_1__ dev; scalar_t__ device_name; int ** sysfs_groups; scalar_t__ s_wakeup_filter; scalar_t__ s_filter; int change_protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_1__*,char*,int,char*) ;
 int FUNC_1 (TYPE_1__*,char*,char*,char*) ;
 int FUNC_2 (TYPE_1__*,struct rc_dev*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct rc_dev*) ;
 int FUNC_10 (struct rc_dev*) ;
 int FUNC_11 (struct rc_dev*) ;
 int FUNC_12 (struct rc_dev*) ;
 int FUNC_13 (struct rc_dev*) ;
 int FUNC_14 (char const*) ;
 char* FUNC_15 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (struct rc_dev*) ;
 int VAR_11 ;
 int FUNC_17 (struct rc_dev*) ;
 int FUNC_18 (struct rc_dev*) ;

int FUNC_19(struct rc_dev *VAR_12)
{
 const char *VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;

 if (!VAR_12)
  return -VAR_0;

 VAR_15 = FUNC_6(&VAR_11, 0, VAR_2, VAR_1);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_12->minor = VAR_15;
 FUNC_3(&VAR_12->dev, "rc%u", VAR_12->minor);
 FUNC_2(&VAR_12->dev, VAR_12);

 VAR_12->dev.groups = VAR_12->sysfs_groups;
 if (VAR_12->driver_type == VAR_5 && !VAR_12->change_protocol)
  VAR_12->sysfs_groups[VAR_14++] = &VAR_8;
 else if (VAR_12->driver_type != VAR_4)
  VAR_12->sysfs_groups[VAR_14++] = &VAR_9;
 if (VAR_12->s_filter)
  VAR_12->sysfs_groups[VAR_14++] = &VAR_7;
 if (VAR_12->s_wakeup_filter)
  VAR_12->sysfs_groups[VAR_14++] = &VAR_10;
 VAR_12->sysfs_groups[VAR_14++] = ((void*)0);

 if (VAR_12->driver_type == VAR_3) {
  VAR_16 = FUNC_12(VAR_12);
  if (VAR_16 < 0)
   goto out_minor;
 }

 if (VAR_12->driver_type != VAR_4) {
  VAR_16 = FUNC_17(VAR_12);
  if (VAR_16)
   goto out_raw;
 }

 VAR_16 = FUNC_4(&VAR_12->dev);
 if (VAR_16)
  goto out_rx_free;

 VAR_13 = FUNC_15(&VAR_12->dev.kobj, VAR_1);
 FUNC_1(&VAR_12->dev, "%s as %s\n",
   VAR_12->device_name ?: "Unspecified device", VAR_13 ?: "N/A");
 FUNC_14(VAR_13);

 VAR_12->registered = 1;

 if (VAR_12->driver_type != VAR_4) {
  VAR_16 = FUNC_18(VAR_12);
  if (VAR_16)
   goto out_dev;
 }


 if (VAR_12->allowed_protocols != VAR_6) {
  VAR_16 = FUNC_9(VAR_12);
  if (VAR_16 < 0)
   goto out_rx;
 }

 if (VAR_12->driver_type == VAR_3) {
  VAR_16 = FUNC_13(VAR_12);
  if (VAR_16 < 0)
   goto out_lirc;
 }

 FUNC_0(&VAR_12->dev, "Registered rc%u (driver: %s)\n", VAR_12->minor,
  VAR_12->driver_name ? VAR_12->driver_name : "unknown");

 return 0;

out_lirc:
 if (VAR_12->allowed_protocols != VAR_6)
  FUNC_10(VAR_12);
out_rx:
 FUNC_16(VAR_12);
out_dev:
 FUNC_5(&VAR_12->dev);
out_rx_free:
 FUNC_8(&VAR_12->rc_map);
out_raw:
 FUNC_11(VAR_12);
out_minor:
 FUNC_7(&VAR_11, VAR_15);
 return VAR_16;
}
