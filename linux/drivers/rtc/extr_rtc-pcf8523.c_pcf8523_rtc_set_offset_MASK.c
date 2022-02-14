
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (long,int) ;
 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_1 (long) ;
 long FUNC_2 (int ,long,long) ;
 int FUNC_3 (struct i2c_client*,int ,long) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, long VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_4(VAR_2);
 long VAR_5, VAR_6;
 u8 VAR_7;

 VAR_5 = FUNC_2(FUNC_0(VAR_3, 4340), -64L, 63L);
 VAR_6 = FUNC_2(FUNC_0(VAR_3, 4069), -64L, 63L);

 if (FUNC_1(VAR_5 * 4340 - VAR_3) < FUNC_1(VAR_6 * 4069 - VAR_3))
  VAR_7 = VAR_5 & 0x7f;
 else
  VAR_7 = (VAR_6 & 0x7f) | VAR_1;

 return FUNC_3(VAR_4, VAR_0, VAR_7);
}
