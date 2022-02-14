
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct arcnet_local {scalar_t__ backplane; } ;
typedef int ssize_t ;


 struct arcnet_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,char*,char*) ;
 struct net_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_0);
 struct arcnet_local *VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_2, "%s\n", VAR_4->backplane ? "true" : "false");
}
