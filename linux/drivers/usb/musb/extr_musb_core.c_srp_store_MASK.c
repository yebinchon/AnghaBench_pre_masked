
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct musb* FUNC_1 (struct device*) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (char const*,char*,unsigned short*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct musb *VAR_5 = FUNC_1(VAR_1);
 unsigned short VAR_6;

 if (FUNC_3(VAR_3, "%hu", &VAR_6) != 1
   || (VAR_6 != 1)) {
  FUNC_0(VAR_1, "SRP: Value must be 1\n");
  return -VAR_0;
 }

 if (VAR_6 == 1)
  FUNC_2(VAR_5);

 return VAR_4;
}
