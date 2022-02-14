
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kbd_state {int timeout_value_ac; int timeout_unit_ac; int timeout_value; int timeout_unit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;




 int FUNC_0 (struct kbd_state*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct kbd_state VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 u8 VAR_9;

 VAR_7 = FUNC_0(&VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_1 && FUNC_1() > 0) {
  VAR_6 = VAR_5.timeout_value_ac;
  VAR_9 = VAR_5.timeout_unit_ac;
 } else {
  VAR_6 = VAR_5.timeout_value;
  VAR_9 = VAR_5.timeout_unit;
 }

 VAR_8 = FUNC_2(VAR_4, "%d", VAR_6);

 switch (VAR_9) {
 case 128:
  return VAR_8 + FUNC_2(VAR_4+VAR_8, "s\n");
 case 129:
  return VAR_8 + FUNC_2(VAR_4+VAR_8, "m\n");
 case 130:
  return VAR_8 + FUNC_2(VAR_4+VAR_8, "h\n");
 case 131:
  return VAR_8 + FUNC_2(VAR_4+VAR_8, "d\n");
 default:
  return -VAR_0;
 }

 return VAR_8;
}
