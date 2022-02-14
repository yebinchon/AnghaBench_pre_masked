
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int high_pll; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct hl_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct hl_device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct hl_device *VAR_4 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_4))
  return -VAR_0;

 return FUNC_2(VAR_3, "%u\n", VAR_4->high_pll);
}
