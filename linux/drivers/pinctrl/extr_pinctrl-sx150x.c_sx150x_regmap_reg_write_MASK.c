
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct sx150x_pinctrl {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,unsigned int,unsigned int const) ;
 unsigned int FUNC_1 (struct sx150x_pinctrl*,unsigned int,unsigned int) ;
 int FUNC_2 (struct sx150x_pinctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2)
{
 int VAR_3, VAR_4;
 struct sx150x_pinctrl *VAR_5 = VAR_0;
 struct i2c_client *VAR_6 = VAR_5->client;
 const int VAR_7 = FUNC_2(VAR_5, VAR_1);

 VAR_2 = FUNC_1(VAR_5, VAR_1, VAR_2);

 VAR_4 = (VAR_7 - 1) & ~7;
 do {
  const u8 VAR_8 = (VAR_2 >> VAR_4) & 0xff;

  VAR_3 = FUNC_0(VAR_6, VAR_1, VAR_8);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_1++;
  VAR_4 -= 8;
 } while (VAR_4 >= 0);

 return 0;
}
