
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int capabilities; int flags; } ;
struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct netxen_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct net_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct net_device *VAR_5 = FUNC_2(VAR_2);
 struct netxen_adapter *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_5);

 if (VAR_6->capabilities & VAR_1)
  VAR_7 = !!(VAR_6->flags & VAR_0);

 return FUNC_1(VAR_4, "%d\n", VAR_7);
}
