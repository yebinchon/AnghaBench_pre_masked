
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;


 int FUNC_0 (struct thermal_zone_device*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_0(VAR_1);

 VAR_4 = FUNC_1(&VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_0)
  FUNC_2("temp %d\n", VAR_3);

 *VAR_2 = VAR_3;
 return 0;
}
