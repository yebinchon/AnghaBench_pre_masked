
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct net_device *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, "Setting VND TX queue state to %d\n", VAR_1);




 if (FUNC_3(VAR_1))
  FUNC_2(VAR_0);
 else
  FUNC_1(VAR_0);

 return 0;
}
