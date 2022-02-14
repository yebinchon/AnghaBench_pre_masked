
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; scalar_t__ type; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
struct hns_mac_cb {int mac_id; int dev; } ;


 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 union acpi_object* FUNC_2 (int ,int *,int ,int ,union acpi_object*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct hns_mac_cb *VAR_5, int *VAR_6)
{
 union acpi_object *VAR_7;
 union acpi_object VAR_8, VAR_9;

 VAR_8.integer.type = VAR_0;
 VAR_8.integer.value = VAR_5->mac_id;

 VAR_9 = VAR_1,
 VAR_9 = 1,
 VAR_9 = &VAR_8,

 VAR_7 = FUNC_2(FUNC_1(VAR_5->dev),
    &VAR_4, 0,
    VAR_3, &VAR_9);

 if (!VAR_7 || VAR_7->type != VAR_0)
  return -VAR_2;

 *VAR_6 = VAR_7->integer.value;

 FUNC_0(VAR_7);

 return 0;
}
