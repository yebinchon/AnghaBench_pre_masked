
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int rfkill; } ;
struct asus_laptop {TYPE_1__ gps; } ;
typedef int ssize_t ;


 int FUNC_0 (struct asus_laptop*,int) ;
 struct asus_laptop* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct asus_laptop *VAR_4 = FUNC_1(VAR_0);
 int VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_2, 0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_7 = FUNC_0(VAR_4, !!VAR_6);
 if (VAR_7)
  return VAR_7;
 FUNC_3(VAR_4->gps.rfkill, !VAR_6);
 return VAR_3;
}
