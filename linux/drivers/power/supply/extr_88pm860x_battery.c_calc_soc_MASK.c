
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int dummy; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;


 int** VAR_1 ;
 int FUNC_1 (struct pm860x_battery_info*,int*) ;
 int FUNC_2 (struct pm860x_battery_info*,int const,int*) ;

__attribute__((used)) static int FUNC_3(struct pm860x_battery_info *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8 = -VAR_0;

 if (!VAR_4)
  return -VAR_0;

 switch (VAR_3) {
 case 129:
  VAR_8 = FUNC_1(VAR_2, &VAR_6);
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_2, 128, &VAR_6);
  break;
 }
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_0(VAR_1);
 if (VAR_6 < VAR_1[VAR_7 - 1][0]) {
  *VAR_4 = 0;
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  if (VAR_6 >= VAR_1[VAR_5][0]) {
   *VAR_4 = VAR_1[VAR_5][1];
   break;
  }
 }
 return 0;
}
