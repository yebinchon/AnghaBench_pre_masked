
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_zone_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_7,
    int *VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 FUNC_1(&VAR_6);
 VAR_10 = FUNC_0(VAR_5, VAR_0,
       VAR_3, &VAR_9);
 FUNC_2(&VAR_6);

 if (VAR_10)
  return VAR_10;






 VAR_9 = (VAR_9 >> VAR_2) & VAR_1;
 *VAR_8 = VAR_9 - VAR_4;

 return 0;
}
