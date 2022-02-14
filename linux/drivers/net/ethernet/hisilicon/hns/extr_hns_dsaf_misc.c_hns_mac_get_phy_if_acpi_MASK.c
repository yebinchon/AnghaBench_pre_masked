
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; scalar_t__ type; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
struct hns_mac_cb {scalar_t__ mac_id; int dev; } ;
typedef int phy_interface_t ;


 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union acpi_object* FUNC_2 (int ,int *,int ,int ,union acpi_object*) ;
 int FUNC_3 (int ,char*,scalar_t__,int ) ;
 int VAR_6 ;

__attribute__((used)) static phy_interface_t FUNC_4(struct hns_mac_cb *VAR_7)
{
 phy_interface_t VAR_8 = VAR_3;
 union acpi_object *VAR_9;
 union acpi_object VAR_10, VAR_11;

 VAR_10.integer.type = VAR_0;
 VAR_10.integer.value = VAR_7->mac_id;

 VAR_11 = VAR_1,
 VAR_11 = 1,
 VAR_11 = &VAR_10,

 VAR_9 = FUNC_2(FUNC_1(VAR_7->dev),
    &VAR_6, 0,
    VAR_2, &VAR_11);

 if (!VAR_9 || VAR_9->type != VAR_0)
  return VAR_8;

 VAR_8 = VAR_9->integer.value ?
  VAR_5 : VAR_4;

 FUNC_3(VAR_7->dev, "mac_id=%d, phy_if=%d\n", VAR_7->mac_id, VAR_8);

 FUNC_0(VAR_9);

 return VAR_8;
}
