
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8755_chip {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct lp8755_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct lp8755_chip*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1)
{
 int VAR_2;
 struct lp8755_chip *VAR_3 = FUNC_0(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_3, VAR_2, 0x00);

 return 0;
}
