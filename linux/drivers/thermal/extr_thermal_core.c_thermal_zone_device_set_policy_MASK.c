
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int lock; } ;
struct thermal_governor {int dummy; } ;


 int VAR_0 ;
 struct thermal_governor* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (struct thermal_zone_device*,struct thermal_governor*) ;

int FUNC_5(struct thermal_zone_device *VAR_2,
       char *VAR_3)
{
 struct thermal_governor *VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_1(&VAR_1);
 FUNC_1(&VAR_2->lock);

 VAR_4 = FUNC_0(FUNC_3(VAR_3));
 if (!VAR_4)
  goto exit;

 VAR_5 = FUNC_4(VAR_2, VAR_4);

exit:
 FUNC_2(&VAR_2->lock);
 FUNC_2(&VAR_1);

 return VAR_5;
}
