
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct adapter {struct net_device** port; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;

void FUNC_8(struct adapter *VAR_0, int VAR_1, int VAR_2)
{
 struct net_device *VAR_3 = VAR_0->port[VAR_1];


 if (FUNC_7(VAR_3) && VAR_2 != FUNC_5(VAR_3)) {
  if (VAR_2)
   FUNC_6(VAR_3);
  else {






   FUNC_4(VAR_3);
  }

  FUNC_3(VAR_3);
 }
}
