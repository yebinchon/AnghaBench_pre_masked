
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*,char const*) ;
 int FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_2, const char *VAR_3)
{
 if (FUNC_1(VAR_2, VAR_3) < 0)
  FUNC_0(VAR_1, VAR_0, ("dev_alloc_name, fail!\n"));

 FUNC_2(VAR_2);
 return 0;
}
