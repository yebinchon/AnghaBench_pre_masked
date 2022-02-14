
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_state {int mode_bit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct kbd_state*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct kbd_state VAR_3;
 bool VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_3);
 if (VAR_5)
  return VAR_5;
 VAR_4 = FUNC_1(VAR_3.mode_bit);

 return FUNC_2(VAR_2, "%d\n", VAR_4 ? 1 : 0);
}
