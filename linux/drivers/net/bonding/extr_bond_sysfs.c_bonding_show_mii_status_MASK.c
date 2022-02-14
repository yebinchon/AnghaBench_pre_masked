
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bonding {int dev; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*) ;
 struct bonding* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 struct bonding *VAR_3 = FUNC_2(VAR_0);
 bool VAR_4 = FUNC_0(VAR_3->dev);

 return FUNC_1(VAR_2, "%s\n", VAR_4 ? "up" : "down");
}
