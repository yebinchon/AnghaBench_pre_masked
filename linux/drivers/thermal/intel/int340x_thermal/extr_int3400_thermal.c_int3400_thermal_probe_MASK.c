
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct platform_device {TYPE_3__ dev; } ;
struct int3400_thermal_priv {struct int3400_thermal_priv* arts; struct int3400_thermal_priv* trts; int thermal; struct acpi_device* adev; int rel_misc_dev_res; int trt_count; int art_count; } ;
struct acpi_device {int handle; } ;
struct TYPE_5__ {int set_mode; int get_mode; } ;


 struct acpi_device* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,void*) ;
 int FUNC_4 (int ,int *,struct int3400_thermal_priv**,int) ;
 int FUNC_5 (int ,int *,struct int3400_thermal_priv**,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct int3400_thermal_priv*) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct int3400_thermal_priv*) ;
 struct int3400_thermal_priv* FUNC_11 (int,int ) ;
 int FUNC_12 (struct platform_device*,struct int3400_thermal_priv*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (char*,int ,int ,struct int3400_thermal_priv*,TYPE_1__*,int *,int ,int ) ;
 int FUNC_16 (int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_10)
{
 struct acpi_device *VAR_11 = FUNC_0(&VAR_10->dev);
 struct int3400_thermal_priv *VAR_12;
 int VAR_13;

 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_11(sizeof(struct int3400_thermal_priv), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->adev = VAR_11;

 VAR_13 = FUNC_9(VAR_12);
 if (VAR_13)
  goto free_priv;

 VAR_13 = FUNC_4(VAR_12->adev->handle, &VAR_12->art_count,
    &VAR_12->arts, 1);
 if (VAR_13)
  FUNC_8(&VAR_10->dev, "_ART table parsing error\n");

 VAR_13 = FUNC_5(VAR_12->adev->handle, &VAR_12->trt_count,
    &VAR_12->trts, 1);
 if (VAR_13)
  FUNC_8(&VAR_10->dev, "_TRT table parsing error\n");

 FUNC_12(VAR_10, VAR_12);

 VAR_6.get_mode = VAR_5;
 VAR_6.set_mode = VAR_8;

 VAR_12->thermal = FUNC_15("INT3400 Thermal", 0, 0,
      VAR_12, &VAR_6,
      &VAR_7, 0, 0);
 if (FUNC_1(VAR_12->thermal)) {
  VAR_13 = FUNC_2(VAR_12->thermal);
  goto free_art_trt;
 }

 VAR_12->rel_misc_dev_res = FUNC_6(
       VAR_12->adev->handle);

 VAR_13 = FUNC_13(&VAR_10->dev.kobj, &VAR_9);
 if (VAR_13)
  goto free_rel_misc;

 VAR_13 = FUNC_3(
   VAR_12->adev->handle, VAR_0, VAR_4,
   (void *)VAR_12);
 if (VAR_13)
  goto free_sysfs;

 return 0;

free_sysfs:
 FUNC_14(&VAR_10->dev.kobj, &VAR_9);
free_rel_misc:
 if (!VAR_12->rel_misc_dev_res)
  FUNC_7(VAR_12->adev->handle);
 FUNC_16(VAR_12->thermal);
free_art_trt:
 FUNC_10(VAR_12->trts);
 FUNC_10(VAR_12->arts);
free_priv:
 FUNC_10(VAR_12);
 return VAR_13;
}
