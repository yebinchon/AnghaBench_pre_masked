
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devices_in_package; } ;
struct phy_device {TYPE_1__ c45_ids; scalar_t__ is_c45; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;

int FUNC_3(struct phy_device *VAR_0)
{
 int VAR_1;

 if (VAR_0->is_c45 && !(VAR_0->c45_ids.devices_in_package & FUNC_0(0)))
  VAR_1 = FUNC_1(VAR_0);
 else
  VAR_1 = FUNC_2(VAR_0);

 return VAR_1;
}
