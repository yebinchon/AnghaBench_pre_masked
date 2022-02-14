
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devices_in_package; int* device_ids; } ;
struct phy_device {TYPE_1__ c45_ids; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct phy_device *VAR_4)
{
 if (!(VAR_4->c45_ids.devices_in_package & VAR_0))
  return 0;


 return (VAR_4->c45_ids.device_ids[VAR_1] &
  VAR_2) == VAR_3;
}
