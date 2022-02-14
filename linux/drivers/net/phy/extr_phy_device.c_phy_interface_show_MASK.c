
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int interface; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct phy_device*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char const*) ;
 struct phy_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct phy_device *VAR_3 = FUNC_3(VAR_0);
 const char *VAR_4 = ((void*)0);

 if (FUNC_0(VAR_3))
  VAR_4 = "internal";
 else
  VAR_4 = FUNC_1(VAR_3->interface);

 return FUNC_2(VAR_2, "%s\n", VAR_4);
}
