
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct pm860x_battery_info *VAR_2, int VAR_3,
          int *VAR_4)
{
 int VAR_5;

 if (VAR_3 < 50 || VAR_3 > 1600 || !VAR_4)
  return -VAR_0;

 VAR_3 = ((VAR_3 - 50) / 50) & 0x1f;
 *VAR_4 = FUNC_0(VAR_2->i2c, VAR_1);
 *VAR_4 = (*VAR_4 & 0x1f) * 50 + 50;
 VAR_5 = FUNC_1(VAR_2->i2c, VAR_1, 0x1f, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
