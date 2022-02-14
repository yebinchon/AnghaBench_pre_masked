
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; union acpi_object* elements; } ;
struct TYPE_3__ {void* value; void* type; } ;
union acpi_object {TYPE_2__ package; int type; TYPE_1__ integer; } ;
typedef int u8 ;
typedef void* u32 ;
struct hns_mac_cb {int dev; } ;


 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 union acpi_object* FUNC_2 (int ,int *,int ,int ,union acpi_object*) ;
 int FUNC_3 (int ,char*,void*,void*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct hns_mac_cb *VAR_3,
       u8 VAR_4, u32 VAR_5,
       u32 VAR_6)
{
 union acpi_object VAR_7[2], VAR_8;
 union acpi_object *VAR_9;

 VAR_7[0].integer.type = VAR_0;
 VAR_7[0].integer.value = VAR_5;
 VAR_7[1].integer.type = VAR_0;
 VAR_7[1].integer.value = VAR_6;

 VAR_8 = VAR_1;
 VAR_8 = 2;
 VAR_8 = VAR_7;

 VAR_9 = FUNC_2(FUNC_1(VAR_3->dev),
    &VAR_2, 0, VAR_4, &VAR_8);
 if (!VAR_9) {
  FUNC_3(VAR_3->dev, "ledctrl fail, locate:%d port:%d!\n",
   VAR_5, VAR_6);
  return;
 }

 FUNC_0(VAR_9);
}
