
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_wmi {int fan_pwm_mode; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct asus_wmi*,int,int*) ;
 int FUNC_1 (int,int ,int) ;
 struct asus_wmi* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,int*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4) {
 struct asus_wmi *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 10, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_1(VAR_6, 0, 255);

 VAR_7 = FUNC_0(VAR_5, 1, &VAR_6);
 if (VAR_7)
  FUNC_4("Setting fan speed failed: %d\n", VAR_7);
 else
  VAR_5->fan_pwm_mode = VAR_0;

 return VAR_4;
}
