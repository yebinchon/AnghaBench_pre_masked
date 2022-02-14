
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,unsigned char*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct pm860x_battery_info *VAR_2, int VAR_3,
       int *VAR_4)
{
 unsigned char VAR_5[2];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2->i2c, VAR_0, 7, VAR_3 & 7);
 if (VAR_6 < 0)
  goto out;
 VAR_6 = FUNC_0(VAR_2->i2c, VAR_1, 2, VAR_5);
 if (VAR_6 < 0)
  goto out;
 *VAR_4 = ((VAR_5[0] & 0xff) << 8) | (VAR_5[1] & 0xff);
 return 0;
out:
 return VAR_6;
}
