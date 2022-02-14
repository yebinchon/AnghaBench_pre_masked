
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_1,
      int *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  *VAR_2 = (VAR_0 - *VAR_2) * 1000;

 return VAR_3;
}
