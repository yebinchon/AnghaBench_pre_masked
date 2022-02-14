
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,scalar_t__,unsigned int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct i2c_client *VAR_1, u8 VAR_2, u8 VAR_3[],
        unsigned VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2 > VAR_0);
 FUNC_0(VAR_2 + VAR_4 > VAR_0 + 1);

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3);
 return (VAR_5 < 0) ? VAR_5 : 0;
}
