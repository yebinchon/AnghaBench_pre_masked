
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x00);
 if (VAR_2 < 0)
  return;

 if (VAR_1)
  VAR_2 |= 0x80;
 else
  VAR_2 &= 0x7F;

 FUNC_1(VAR_0, 0x00, VAR_2);
}
