
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct regval {scalar_t__ addr; int val; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i2c_client*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2,
         const struct regval *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_5 == 0 && VAR_3[VAR_4].addr != VAR_1; VAR_4++)
  VAR_5 = FUNC_0(VAR_2, VAR_3[VAR_4].addr,
           VAR_0, VAR_3[VAR_4].val);

 return VAR_5;
}
