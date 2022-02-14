
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int i2c; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pm860x_battery_info*,int ,int*) ;
 int FUNC_1 (int ,int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct pm860x_battery_info *VAR_3, int VAR_4,
    int *VAR_5)
{
 unsigned char VAR_6[5];
 int VAR_7;

 switch (VAR_4) {
 case 129:
  VAR_7 = FUNC_0(VAR_3, VAR_2, VAR_5);
  if (VAR_7)
   return VAR_7;

  *VAR_5 *= 3;
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_3->i2c, VAR_1, 5, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = ((VAR_6[4] >> 6) << 10) | ((VAR_6[3] >> 6) << 8)
      | ((VAR_6[2] >> 6) << 6) | ((VAR_6[1] >> 6) << 4)
      | (VAR_6[0] >> 4);

  *VAR_5 = ((*VAR_5 & 0xff) * 27 * 25) >> 9;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
