
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct int3403_priv* devdata; } ;
struct int3403_priv {TYPE_1__* adev; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct thermal_cooling_device *VAR_1,
     unsigned long *VAR_2)
{
 struct int3403_priv *VAR_3 = VAR_1->devdata;
 unsigned long long VAR_4;
 acpi_status VAR_5;

 VAR_5 = FUNC_1(VAR_3->adev->handle, "PPPC", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_5)) {
  *VAR_2 = VAR_4;
  return 0;
 } else
  return -VAR_0;
}
