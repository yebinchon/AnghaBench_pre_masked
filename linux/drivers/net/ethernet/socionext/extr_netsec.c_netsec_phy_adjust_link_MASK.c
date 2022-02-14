
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netsec_priv {int dummy; } ;
struct net_device {TYPE_1__* phydev; } ;
struct TYPE_2__ {scalar_t__ link; } ;


 struct netsec_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct netsec_priv*) ;
 int FUNC_2 (struct netsec_priv*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct netsec_priv *VAR_1 = FUNC_0(VAR_0);

 if (VAR_0->phydev->link)
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1);

 FUNC_3(VAR_0->phydev);
}
