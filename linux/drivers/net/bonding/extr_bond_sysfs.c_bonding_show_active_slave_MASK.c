
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bonding {int dummy; } ;
typedef int ssize_t ;


 struct net_device* FUNC_0 (struct bonding*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,char*) ;
 struct bonding* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct bonding *VAR_3 = FUNC_4(VAR_0);
 struct net_device *VAR_4;
 int VAR_5 = 0;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  VAR_5 = FUNC_3(VAR_2, "%s\n", VAR_4->name);
 FUNC_2();

 return VAR_5;
}
