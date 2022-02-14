
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int) ;
 int FUNC_2 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_3, "%x %x\n", &VAR_5, &VAR_6) != 2)
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_1(VAR_1, "redirect: %02x, %02x\n", VAR_5, VAR_6);
 return VAR_4;
}
