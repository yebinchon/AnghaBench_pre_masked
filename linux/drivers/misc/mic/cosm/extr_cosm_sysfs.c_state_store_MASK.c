
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cosm_device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct cosm_device*) ;
 int FUNC_1 (struct cosm_device*) ;
 int FUNC_2 (struct cosm_device*) ;
 struct cosm_device* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct cosm_device *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 if (FUNC_4(VAR_3, "boot")) {
  VAR_6 = FUNC_2(VAR_5);
  goto done;
 }
 if (FUNC_4(VAR_3, "reset")) {
  VAR_6 = FUNC_0(VAR_5);
  goto done;
 }

 if (FUNC_4(VAR_3, "shutdown")) {
  VAR_6 = FUNC_1(VAR_5);
  goto done;
 }
 VAR_6 = -VAR_0;
done:
 if (VAR_6)
  VAR_4 = VAR_6;
 return VAR_4;
}
