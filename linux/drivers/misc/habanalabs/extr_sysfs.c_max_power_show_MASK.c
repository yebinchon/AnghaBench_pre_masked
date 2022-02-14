
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct hl_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct hl_device*) ;
 long FUNC_2 (struct hl_device*) ;
 int FUNC_3 (char*,char*,long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct hl_device *VAR_4 = FUNC_0(VAR_1);
 long VAR_5;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_4);

 return FUNC_3(VAR_3, "%lu\n", VAR_5);
}
