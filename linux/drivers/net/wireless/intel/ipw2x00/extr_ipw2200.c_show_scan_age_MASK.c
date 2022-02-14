
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_priv {TYPE_1__* ieee; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int scan_age; } ;


 struct ipw_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct ipw_priv *VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, "%d\n", VAR_3->ieee->scan_age);
}
