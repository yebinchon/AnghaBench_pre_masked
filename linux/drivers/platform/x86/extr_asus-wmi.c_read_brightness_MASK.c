
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct backlight_device {int dummy; } ;
struct asus_wmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asus_wmi*,int ,int*) ;
 struct asus_wmi* FUNC_1 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_2)
{
 struct asus_wmi *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4 & VAR_1;
}
