
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct int3403_priv {unsigned long long type; TYPE_1__* adev; struct platform_device* pdev; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 struct int3403_priv* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct int3403_priv*) ;
 int FUNC_5 (struct int3403_priv*) ;
 int FUNC_6 (struct platform_device*,struct int3403_priv*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct int3403_priv *VAR_4;
 int VAR_5 = 0;
 unsigned long long VAR_6;
 acpi_status VAR_7;

 VAR_4 = FUNC_3(&VAR_3->dev, sizeof(struct int3403_priv),
       VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->pdev = VAR_3;
 VAR_4->adev = FUNC_0(&(VAR_3->dev));
 if (!VAR_4->adev) {
  VAR_5 = -VAR_0;
  goto err;
 }


 VAR_7 = FUNC_2(VAR_4->adev->handle, "_TMP",
           ((void*)0), &VAR_6);
 if (FUNC_1(VAR_7)) {
  VAR_7 = FUNC_2(VAR_4->adev->handle, "PTYP",
           ((void*)0), &VAR_4->type);
  if (FUNC_1(VAR_7)) {
   VAR_5 = -VAR_0;
   goto err;
  }
 } else {
  VAR_4->type = 128;
 }

 FUNC_6(VAR_3, VAR_4);
 switch (VAR_4->type) {
 case 128:
  VAR_5 = FUNC_5(VAR_4);
  break;
 case 129:
 case 130:
  VAR_5 = FUNC_4(VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
 }

 if (VAR_5)
  goto err;
 return VAR_5;

err:
 return VAR_5;
}
