
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct spear_thermal_dev* devdata; } ;
struct spear_thermal_dev {int thermal_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct thermal_zone_device *VAR_1,
    int *VAR_2)
{
 struct spear_thermal_dev *VAR_3 = VAR_1->devdata;





 *VAR_2 = (FUNC_0(VAR_3->thermal_base) & 0x7F) * VAR_0;
 return 0;
}
