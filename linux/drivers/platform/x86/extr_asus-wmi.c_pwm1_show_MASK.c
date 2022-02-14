
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_wmi {scalar_t__ agfn_pwm; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct asus_wmi*,int ,int*) ;
 struct asus_wmi* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct asus_wmi *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 int VAR_6;


 if (VAR_4->agfn_pwm >= 0)
  return FUNC_3(VAR_3, "%d\n", VAR_4->agfn_pwm);





 VAR_5 = FUNC_0(VAR_4, VAR_0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 &= 0xFF;

 if (VAR_6 == 1)
  VAR_6 = 85;
 else if (VAR_6 == 2)
  VAR_6 = 170;
 else if (VAR_6 == 3)
  VAR_6 = 255;
 else if (VAR_6) {
  FUNC_2("Unknown fan speed %#x\n", VAR_6);
  VAR_6 = -1;
 }

 return FUNC_3(VAR_3, "%d\n", VAR_6);
}
