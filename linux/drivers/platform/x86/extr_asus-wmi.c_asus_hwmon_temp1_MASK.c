
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_wmi {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct asus_wmi*,int ,int*) ;
 struct asus_wmi* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct asus_wmi *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_0, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_0((VAR_5 & 0xFFFF)) * 1000;

 return FUNC_3(VAR_3, "%d\n", VAR_5);
}
