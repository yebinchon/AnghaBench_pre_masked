
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*,char const*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,char const*) ;

int FUNC_3(struct net_device *VAR_0, const char *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1) < 0) {
  FUNC_2("dev_alloc_name, fail for %s\n", VAR_1);
  return 1;
 }
 FUNC_1(VAR_0);


 return 0;
}
