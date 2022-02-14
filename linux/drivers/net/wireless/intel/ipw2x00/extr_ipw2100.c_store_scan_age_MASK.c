
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct ipw2100_priv {TYPE_1__* ieee; struct net_device* net_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {unsigned long scan_age; } ;


 int FUNC_0 (char*,...) ;
 struct ipw2100_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct ipw2100_priv *VAR_4 = FUNC_1(VAR_0);
 struct net_device *VAR_5 = VAR_4->net_dev;
 unsigned long VAR_6;
 int VAR_7;

 (void)VAR_5;

 FUNC_0("enter\n");

 VAR_7 = FUNC_2(VAR_2, 0, &VAR_6);
 if (VAR_7) {
  FUNC_0("%s: user supplied invalid value.\n", VAR_5->name);
 } else {
  VAR_4->ieee->scan_age = VAR_6;
  FUNC_0("set scan_age = %u\n", VAR_4->ieee->scan_age);
 }

 FUNC_0("exit\n");
 return FUNC_3(VAR_2, VAR_3);
}
