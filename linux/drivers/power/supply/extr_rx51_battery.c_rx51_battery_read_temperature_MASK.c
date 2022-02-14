
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx51_device_info {int dev; int channel_temp; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct rx51_device_info *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = FUNC_0(VAR_3) - 1;
 int VAR_8 = FUNC_2(VAR_5->channel_temp);

 if (VAR_8 < 0)
  FUNC_1(VAR_5->dev, "Could not read ADC: %d\n", VAR_8);


 if (VAR_8 <= 0)
  return VAR_0;


 if (VAR_8 >= (1 << 10))
  return VAR_1;


 if (VAR_8 < FUNC_0(VAR_2))
  return VAR_2[VAR_8] * 10;


 while (VAR_7 - VAR_6 > 1) {
  int VAR_9 = (VAR_7 + VAR_6) / 2;
  if (VAR_3[VAR_9] <= VAR_8)
   VAR_6 = VAR_9;
  else if (VAR_3[VAR_9] > VAR_8)
   VAR_7 = VAR_9;
  if (VAR_3[VAR_9] == VAR_8)
   break;
 }

 return (VAR_4 - VAR_6) * 10;
}
