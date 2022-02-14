
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int napi; } ;
struct TYPE_6__ {int mask; } ;
struct emac_adapter {TYPE_5__ rx_q; TYPE_2__* phydev; scalar_t__ base; TYPE_1__ irq; struct net_device* netdev; } ;
struct TYPE_7__ {int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct emac_adapter*) ;
 int FUNC_1 (struct emac_adapter*,TYPE_5__*) ;
 int FUNC_2 (struct emac_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (struct net_device*,TYPE_2__*,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,scalar_t__) ;

int FUNC_10(struct emac_adapter *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->netdev;
 int VAR_8;

 FUNC_2(VAR_6);
 FUNC_0(VAR_6);
 FUNC_1(VAR_6, &VAR_6->rx_q);

 VAR_6->phydev->irq = VAR_4;
 VAR_8 = FUNC_7(VAR_7, VAR_6->phydev, VAR_5,
     VAR_3);
 if (VAR_8) {
  FUNC_4(VAR_6->netdev, "could not connect phy\n");
  return VAR_8;
 }

 FUNC_6(VAR_6->phydev, ((void*)0));


 FUNC_9((u32)~VAR_0, VAR_6->base + VAR_2);
 FUNC_9(VAR_6->irq.mask, VAR_6->base + VAR_1);

 FUNC_8(VAR_6->phydev);

 FUNC_3(&VAR_6->rx_q.napi);
 FUNC_5(VAR_7);

 return 0;
}
