
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_state {int als_setting; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct kbd_state*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct kbd_state VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2, "%d\n", VAR_3.als_setting);
}
