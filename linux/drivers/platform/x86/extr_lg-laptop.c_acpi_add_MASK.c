
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct acpi_device {int dummy; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_7__ {TYPE_4__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,int *) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int *) ;
 int VAR_9 ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct acpi_device *VAR_10)
{
 int VAR_11;

 if (VAR_7)
  return 0;

 VAR_11 = FUNC_5(&VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_7 = FUNC_3(VAR_3,
          VAR_2,
          ((void*)0), 0);
 if (FUNC_0(VAR_7)) {
  VAR_11 = FUNC_1(VAR_7);
  VAR_7 = ((void*)0);
  FUNC_7("unable to register platform device\n");
  goto out_platform_registered;
 }

 VAR_11 = FUNC_8(&VAR_7->dev.kobj, &VAR_4);
 if (VAR_11)
  goto out_platform_device;

 if (!FUNC_2(&VAR_7->dev, &VAR_6))
  VAR_5 |= VAR_0;

 if (!FUNC_2(&VAR_7->dev, &VAR_9))
  VAR_5 |= VAR_1;

 FUNC_9();

 return 0;

out_platform_device:
 FUNC_4(VAR_7);
out_platform_registered:
 FUNC_6(&VAR_8);
 return VAR_11;
}
