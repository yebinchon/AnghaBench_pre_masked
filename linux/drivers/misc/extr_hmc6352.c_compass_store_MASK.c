
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct i2c_client*,char const) ;
 int VAR_1 ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (char const*) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2, const char *VAR_3, size_t VAR_4,
   const char *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_6(VAR_2);
 int VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_2(VAR_3, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;
 if (VAR_8 >= FUNC_5(VAR_5))
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_8, FUNC_5(VAR_5));
 FUNC_3(&VAR_1);
 VAR_7 = FUNC_1(VAR_6, VAR_5[VAR_8]);
 FUNC_4(&VAR_1);
 if (VAR_7 < 0)
  return VAR_7;
 return VAR_4;
}
