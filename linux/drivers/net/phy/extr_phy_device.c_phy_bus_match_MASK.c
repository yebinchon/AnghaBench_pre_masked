
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct phy_driver {int (* match_phy_device ) (struct phy_device*) ;int phy_id; int phy_id_mask; TYPE_1__ mdiodrv; } ;
struct TYPE_4__ {int* device_ids; int devices_in_package; } ;
struct phy_device {int phy_id; TYPE_2__ c45_ids; scalar_t__ is_c45; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct phy_device*) ;
 struct phy_device* FUNC_2 (struct device*) ;
 struct phy_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct phy_device *VAR_3 = FUNC_2(VAR_1);
 struct phy_driver *VAR_4 = FUNC_3(VAR_2);
 const int VAR_5 = FUNC_0(VAR_3->c45_ids.device_ids);
 int VAR_6;

 if (!(VAR_4->mdiodrv.flags & VAR_0))
  return 0;

 if (VAR_4->match_phy_device)
  return VAR_4->match_phy_device(VAR_3);

 if (VAR_3->is_c45) {
  for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++) {
   if (!(VAR_3->c45_ids.devices_in_package & (1 << VAR_6)))
    continue;

   if ((VAR_4->phy_id & VAR_4->phy_id_mask) ==
       (VAR_3->c45_ids.device_ids[VAR_6] &
        VAR_4->phy_id_mask))
    return 1;
  }
  return 0;
 } else {
  return (VAR_4->phy_id & VAR_4->phy_id_mask) ==
   (VAR_3->phy_id & VAR_4->phy_id_mask);
 }
}
