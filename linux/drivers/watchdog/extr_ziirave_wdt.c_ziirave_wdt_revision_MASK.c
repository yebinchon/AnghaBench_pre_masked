
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ziirave_wdt_rev {int major; int minor; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0,
    struct ziirave_wdt_rev *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->major = VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2 + 1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->minor = VAR_3;

 return 0;
}
