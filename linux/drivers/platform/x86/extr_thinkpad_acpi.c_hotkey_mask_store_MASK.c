
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 if (FUNC_4(VAR_5, 0xffffffffUL, &VAR_7))
  return -VAR_0;

 if (FUNC_2(&VAR_2))
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_7);





 FUNC_3(&VAR_2);

 FUNC_5("hotkey_mask", "set to 0x%08lx\n", VAR_7);

 return (VAR_8) ? VAR_8 : VAR_6;
}
