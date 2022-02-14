
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov965x {int dummy; } ;
struct i2c_rv {scalar_t__ addr; int value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ov965x*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct ov965x *VAR_1,
         const struct i2c_rv *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_4 == 0 && VAR_2[VAR_3].addr != VAR_0; VAR_3++)
  VAR_4 = FUNC_0(VAR_1, VAR_2[VAR_3].addr, VAR_2[VAR_3].value);

 return VAR_4;
}
