
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; } ;
struct rockchip_thermal_sensor {struct thermal_zone_device* tzd; } ;
struct TYPE_2__ {int (* set_mode ) (struct thermal_zone_device*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thermal_zone_device*,int ) ;

__attribute__((used)) static void
FUNC_1(struct rockchip_thermal_sensor *VAR_2, bool VAR_3)
{
 struct thermal_zone_device *VAR_4 = VAR_2->tzd;

 VAR_4->ops->set_mode(VAR_4,
  VAR_3 ? VAR_1 : VAR_0);
}
