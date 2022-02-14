
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct axienet_local {int options; size_t tx_bd_num; size_t rx_bd_num; size_t rx_bd_p; size_t tx_bd_p; scalar_t__ eth_irq; scalar_t__ rx_bd_ci; scalar_t__ tx_bd_tail; scalar_t__ tx_bd_ci; struct axidma_bd* rx_bd_v; struct axidma_bd* tx_bd_v; TYPE_1__* mii_bus; struct net_device* ndev; } ;
struct axidma_bd {int cntrl; scalar_t__ app4; scalar_t__ app3; scalar_t__ app2; scalar_t__ app1; scalar_t__ app0; scalar_t__ status; int * skb; scalar_t__ phys; } ;
struct TYPE_3__ {int mdio_lock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct axienet_local*) ;
 size_t FUNC_1 (struct axienet_local*,int ) ;
 int FUNC_2 (struct axienet_local*,int ,size_t) ;
 size_t FUNC_3 (struct axienet_local*,int ) ;
 int FUNC_4 (struct axienet_local*,int ,size_t) ;
 int FUNC_5 (struct axienet_local*) ;
 int FUNC_6 (struct axienet_local*) ;
 int FUNC_7 (struct net_device*,int *) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,scalar_t__,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(unsigned long VAR_28)
{
 u32 VAR_29;
 u32 VAR_30, VAR_31;
 struct axienet_local *VAR_32 = (struct axienet_local *) VAR_28;
 struct net_device *VAR_33 = VAR_32->ndev;
 struct axidma_bd *VAR_34;

 FUNC_9(VAR_33, VAR_32->options &
      ~(VAR_9 | VAR_8));






 FUNC_12(&VAR_32->mii_bus->mdio_lock);
 FUNC_5(VAR_32);
 FUNC_0(VAR_32);
 FUNC_6(VAR_32);
 FUNC_13(&VAR_32->mii_bus->mdio_lock);

 for (VAR_31 = 0; VAR_31 < VAR_32->tx_bd_num; VAR_31++) {
  VAR_34 = &VAR_32->tx_bd_v[VAR_31];
  if (VAR_34->phys)
   FUNC_11(VAR_33->dev.parent, VAR_34->phys,
      (VAR_34->cntrl &
       VAR_12),
      VAR_0);
  if (VAR_34->skb)
   FUNC_10(VAR_34->skb);
  VAR_34->phys = 0;
  VAR_34->cntrl = 0;
  VAR_34->status = 0;
  VAR_34->app0 = 0;
  VAR_34->app1 = 0;
  VAR_34->app2 = 0;
  VAR_34->app3 = 0;
  VAR_34->app4 = 0;
  VAR_34->skb = ((void*)0);
 }

 for (VAR_31 = 0; VAR_31 < VAR_32->rx_bd_num; VAR_31++) {
  VAR_34 = &VAR_32->rx_bd_v[VAR_31];
  VAR_34->status = 0;
  VAR_34->app0 = 0;
  VAR_34->app1 = 0;
  VAR_34->app2 = 0;
  VAR_34->app3 = 0;
  VAR_34->app4 = 0;
 }

 VAR_32->tx_bd_ci = 0;
 VAR_32->tx_bd_tail = 0;
 VAR_32->rx_bd_ci = 0;


 VAR_30 = FUNC_1(VAR_32, VAR_24);

 VAR_30 = ((VAR_30 & ~VAR_13) |
       (VAR_18 << VAR_14));

 VAR_30 = ((VAR_30 & ~VAR_16) |
       (VAR_19 << VAR_17));

 VAR_30 |= VAR_22;

 FUNC_2(VAR_32, VAR_24, VAR_30);


 VAR_30 = FUNC_1(VAR_32, VAR_27);

 VAR_30 = (((VAR_30 & ~VAR_13)) |
       (VAR_20 << VAR_14));

 VAR_30 = (((VAR_30 & ~VAR_16)) |
       (VAR_21 << VAR_17));

 VAR_30 |= VAR_22;

 FUNC_2(VAR_32, VAR_27, VAR_30);




 FUNC_2(VAR_32, VAR_23, VAR_32->rx_bd_p);
 VAR_30 = FUNC_1(VAR_32, VAR_24);
 FUNC_2(VAR_32, VAR_24,
     VAR_30 | VAR_15);
 FUNC_2(VAR_32, VAR_25, VAR_32->rx_bd_p +
     (sizeof(*VAR_32->rx_bd_v) * (VAR_32->rx_bd_num - 1)));





 FUNC_2(VAR_32, VAR_26, VAR_32->tx_bd_p);
 VAR_30 = FUNC_1(VAR_32, VAR_27);
 FUNC_2(VAR_32, VAR_27,
     VAR_30 | VAR_15);

 VAR_29 = FUNC_3(VAR_32, VAR_10);
 VAR_29 &= ~VAR_11;
 FUNC_4(VAR_32, VAR_10, VAR_29);

 VAR_29 = FUNC_3(VAR_32, VAR_6);
 if (VAR_29 & VAR_5)
  FUNC_4(VAR_32, VAR_7, VAR_5);
 FUNC_4(VAR_32, VAR_3, VAR_32->eth_irq > 0 ?
      VAR_4 : 0);
 FUNC_4(VAR_32, VAR_2, VAR_1);




 FUNC_9(VAR_33, VAR_32->options &
      ~(VAR_9 | VAR_8));
 FUNC_7(VAR_33, ((void*)0));
 FUNC_8(VAR_33);
 FUNC_9(VAR_33, VAR_32->options);
}
