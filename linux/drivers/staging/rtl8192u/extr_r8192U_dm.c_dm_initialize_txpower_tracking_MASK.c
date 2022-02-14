
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {scalar_t__ bDcut; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->bDcut)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}
