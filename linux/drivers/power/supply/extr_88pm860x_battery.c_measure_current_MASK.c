
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int i2c; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct pm860x_battery_info *VAR_1, int *VAR_2)
{
 unsigned char VAR_3[2];
 short VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->i2c, VAR_0, 2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = ((VAR_3[0] & 0xff) << 8) | (VAR_3[1] & 0xff);

 *VAR_2 = VAR_4 >> 3;
 return 0;
}
