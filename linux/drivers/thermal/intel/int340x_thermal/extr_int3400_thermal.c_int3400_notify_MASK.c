
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct int3400_thermal_priv {TYPE_2__* thermal; } ;
typedef int acpi_handle ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ device; int temperature; int type; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,int ,char**) ;

__attribute__((used)) static void FUNC_2(acpi_handle VAR_3,
   u32 VAR_4,
   void *VAR_5)
{
 struct int3400_thermal_priv *VAR_6 = VAR_5;
 char *VAR_7[5];

 if (!VAR_6)
  return;

 switch (VAR_4) {
 case 128:
  VAR_7[0] = FUNC_0(VAR_0, "NAME=%s",
    VAR_6->thermal->type);
  VAR_7[1] = FUNC_0(VAR_0, "TEMP=%d",
    VAR_6->thermal->temperature);
  VAR_7[2] = FUNC_0(VAR_0, "TRIP=");
  VAR_7[3] = FUNC_0(VAR_0, "EVENT=%d",
    VAR_2);
  VAR_7[4] = ((void*)0);
  FUNC_1(&VAR_6->thermal->device.kobj, VAR_1,
    VAR_7);
  break;
 default:

  break;
 }
}
