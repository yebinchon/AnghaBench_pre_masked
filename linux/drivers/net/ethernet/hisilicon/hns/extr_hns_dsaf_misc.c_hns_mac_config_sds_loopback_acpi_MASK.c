
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; union acpi_object* elements; } ;
struct TYPE_4__ {int value; void* type; } ;
union acpi_object {TYPE_2__ package; int type; TYPE_1__ integer; } ;
struct hns_mac_cb {int mac_id; TYPE_3__* dsaf_dev; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union acpi_object* FUNC_2 (int ,int *,int ,int ,union acpi_object*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct hns_mac_cb *VAR_5, bool VAR_6)
{
 union acpi_object *VAR_7;
 union acpi_object VAR_8[3], VAR_9;

 VAR_8[0].integer.type = VAR_0;
 VAR_8[0].integer.value = VAR_5->mac_id;
 VAR_8[1].integer.type = VAR_0;
 VAR_8[1].integer.value = !!VAR_6;

 VAR_9 = VAR_1;
 VAR_9 = 2;
 VAR_9 = VAR_8;

 VAR_7 = FUNC_2(FUNC_1(VAR_5->dsaf_dev->dev),
    &VAR_4, 0,
    VAR_3, &VAR_9);
 if (!VAR_7) {
  FUNC_3(VAR_5->dsaf_dev->dev, "set port%d serdes lp fail!",
    VAR_5->mac_id);

  return -VAR_2;
 }

 FUNC_0(VAR_7);

 return 0;
}
