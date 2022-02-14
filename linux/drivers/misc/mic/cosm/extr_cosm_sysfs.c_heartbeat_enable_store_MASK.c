
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cosm_device {int sysfs_heartbeat_enable; scalar_t__ state; int heartbeat_watchdog_enable; int cosm_mutex; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cosm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct cosm_device *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;
 int VAR_8;

 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_6->cosm_mutex);
 VAR_8 = FUNC_1(VAR_4, 10, &VAR_7);
 if (VAR_8)
  goto unlock;

 VAR_6->sysfs_heartbeat_enable = VAR_7;

 if (VAR_6->state == VAR_1)
  VAR_6->heartbeat_watchdog_enable = VAR_7;
 VAR_8 = VAR_5;
unlock:
 FUNC_3(&VAR_6->cosm_mutex);
 return VAR_8;
}
