
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct led_classdev {int dummy; } ;
struct gb_channel {int color; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct gb_channel*,int ) ;
 struct gb_channel* FUNC_3 (struct led_classdev*) ;
 int FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (struct led_classdev*) ;
 scalar_t__ FUNC_6 (struct led_classdev*) ;
 int FUNC_7 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_1(VAR_1);
 struct gb_channel *VAR_6 = FUNC_3(VAR_5);
 u32 VAR_7;
 int VAR_8;

 FUNC_5(VAR_5);
 if (FUNC_6(VAR_5)) {
  VAR_8 = -VAR_0;
  goto unlock;
 }
 VAR_8 = FUNC_4(VAR_3, 0, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_1, "could not parse color value %d\n", VAR_8);
  goto unlock;
 }

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto unlock;

 VAR_6->color = VAR_7;
 VAR_8 = VAR_4;
unlock:
 FUNC_7(VAR_5);
 return VAR_8;
}
