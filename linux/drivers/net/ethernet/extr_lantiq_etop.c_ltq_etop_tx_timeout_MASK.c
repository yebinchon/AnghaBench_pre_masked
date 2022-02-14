
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto err_hw;
 FUNC_3(VAR_0);
 FUNC_4(VAR_0);
 return;

err_hw:
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, "failed to restart etop after TX timeout\n");
}
