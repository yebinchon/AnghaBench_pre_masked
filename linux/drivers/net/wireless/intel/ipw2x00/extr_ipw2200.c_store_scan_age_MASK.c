
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct ipw_priv {TYPE_1__* ieee; struct net_device* net_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef unsigned long ssize_t ;
typedef int buffer ;
struct TYPE_2__ {unsigned long scan_age; } ;


 int FUNC_0 (char*,...) ;
 struct ipw_priv* FUNC_1 (struct device*) ;
 unsigned long FUNC_2 (char*,char**,int) ;
 int FUNC_3 (char*,char const*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct ipw_priv *VAR_4 = FUNC_1(VAR_0);
 struct net_device *VAR_5 = VAR_4->net_dev;
 char VAR_6[] = "00000000";
 unsigned long VAR_7 =
     (sizeof(VAR_6) - 1) > VAR_3 ? VAR_3 : sizeof(VAR_6) - 1;
 unsigned long VAR_8;
 char *VAR_9 = VAR_6;

 FUNC_0("enter\n");

 FUNC_3(VAR_6, VAR_2, VAR_7);
 VAR_6[VAR_7] = 0;

 if (VAR_9[1] == 'x' || VAR_9[1] == 'X' || VAR_9[0] == 'x' || VAR_9[0] == 'X') {
  VAR_9++;
  if (VAR_9[0] == 'x' || VAR_9[0] == 'X')
   VAR_9++;
  VAR_8 = FUNC_2(VAR_9, &VAR_9, 16);
 } else
  VAR_8 = FUNC_2(VAR_9, &VAR_9, 10);
 if (VAR_9 == VAR_6) {
  FUNC_0("%s: user supplied invalid value.\n", VAR_5->name);
 } else {
  VAR_4->ieee->scan_age = VAR_8;
  FUNC_0("set scan_age = %u\n", VAR_4->ieee->scan_age);
 }

 FUNC_0("exit\n");
 return VAR_7;
}
