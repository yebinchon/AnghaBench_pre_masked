
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc_thermal_device {int dummy; } ;
struct TYPE_5__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_6__ {int attr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct platform_device*,struct proc_thermal_device*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,struct proc_thermal_device**) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct proc_thermal_device *VAR_7;
 int VAR_8;

 if (VAR_5 == VAR_1) {
  FUNC_0(&VAR_6->dev, "error: enumerated as PCI dev\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_3(&VAR_6->dev, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_6, VAR_7);
 VAR_5 = VAR_2;

 FUNC_1(&VAR_6->dev, "Creating sysfs group for PROC_THERMAL_PLATFORM_DEV\n");

 VAR_8 = FUNC_4(&VAR_6->dev.kobj, &VAR_3.attr);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(&VAR_6->dev.kobj, &VAR_4);
 if (VAR_8)
  FUNC_6(&VAR_6->dev.kobj, &VAR_3.attr);

 return VAR_8;
}
