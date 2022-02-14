
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 size_t FUNC_1 (struct i2400m*,unsigned int) ;
 struct i2400m* FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*,unsigned int*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static
ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 struct i2400m *VAR_6 = FUNC_2(FUNC_4(VAR_1));
 unsigned VAR_7;

 VAR_5 = -VAR_0;
 if (FUNC_3(VAR_3, "%u\n", &VAR_7) != 1)
  goto error_no_unsigned;
 if (VAR_7 != 0 && (VAR_7 < 100 || VAR_7 > 300000 || VAR_7 % 100 != 0)) {
  FUNC_0(VAR_1, "idle_timeout: %u: invalid msecs specification; "
   "valid values are 0, 100-300000 in 100 increments\n",
   VAR_7);
  goto error_bad_value;
 }
 VAR_5 = FUNC_1(VAR_6, VAR_7);
 if (VAR_5 >= 0)
  VAR_5 = VAR_4;
error_no_unsigned:
error_bad_value:
 return VAR_5;
}
