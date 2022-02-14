
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gbe_slave {int port_num; int * phy; } ;
struct gbe_priv {int ale; } ;
struct gbe_intf {TYPE_1__* ndev; struct gbe_slave* slave; struct gbe_priv* gbe_dev; } ;
struct TYPE_2__ {int broadcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gbe_priv*) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,int,int ,int ) ;
 int FUNC_3 (struct gbe_slave*) ;
 int FUNC_4 (struct gbe_priv*,struct gbe_slave*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct gbe_intf *VAR_2)
{
 struct gbe_priv *VAR_3 = VAR_2->gbe_dev;
 struct gbe_slave *VAR_4 = VAR_2->slave;

 if (!FUNC_0(VAR_3))
  FUNC_4(VAR_3, VAR_4, 1);
 FUNC_3(VAR_4);

 FUNC_1(VAR_3->ale, VAR_4->port_num,
        VAR_0, VAR_1);
 FUNC_2(VAR_3->ale, VAR_2->ndev->broadcast,
      1 << VAR_4->port_num, 0, 0);

 if (!VAR_4->phy)
  return;

 FUNC_6(VAR_4->phy);
 FUNC_5(VAR_4->phy);
 VAR_4->phy = ((void*)0);
}
