
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pasemi_mac {scalar_t__ type; TYPE_5__* tx; int napi; TYPE_5__* rx; TYPE_1__* pdev; int rx_irq_name; int tx_irq_name; int dma_if; int num_cs; } ;
struct net_device {int mtu; char* name; scalar_t__ phydev; } ;
struct TYPE_14__ {int chno; } ;
struct TYPE_10__ {int irq; int chno; } ;
struct TYPE_13__ {TYPE_2__ chan; int clean_timer; } ;
struct TYPE_12__ {TYPE_7__ chan; } ;
struct TYPE_11__ {TYPE_7__ chan; } ;
struct TYPE_9__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 unsigned int FUNC_7 (int) ;
 unsigned int VAR_25 ;
 unsigned int FUNC_8 (int) ;
 unsigned int FUNC_9 (int) ;
 unsigned int FUNC_10 (int) ;
 unsigned int FUNC_11 (int) ;
 int VAR_26 ;
 unsigned int FUNC_12 (int ) ;
 unsigned int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int VAR_27 ;
 int FUNC_15 (int *,char*,int ,int) ;
 int FUNC_16 (int *,char*,...) ;
 int FUNC_17 (int ,TYPE_5__*) ;
 scalar_t__ VAR_28 ;
 int FUNC_18 (int *,scalar_t__) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 struct pasemi_mac* FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (TYPE_7__*,int) ;
 int FUNC_25 (struct pasemi_mac*) ;
 int FUNC_26 (struct pasemi_mac*) ;
 int FUNC_27 (struct pasemi_mac*) ;
 int FUNC_28 (struct net_device*) ;
 int FUNC_29 (struct net_device*,int) ;
 int FUNC_30 (struct pasemi_mac*) ;
 int FUNC_31 (struct pasemi_mac*) ;
 int VAR_29 ;
 int FUNC_32 (struct pasemi_mac*) ;
 int FUNC_33 (struct net_device*) ;
 TYPE_5__* FUNC_34 (struct net_device*) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_35 (scalar_t__) ;
 int FUNC_36 (int ,int ,int ,int ,TYPE_5__*) ;
 TYPE_4__* FUNC_37 (struct pasemi_mac*) ;
 int FUNC_38 (int ,int,char*,char*) ;
 int FUNC_39 (int *,int ,int ) ;
 TYPE_3__* FUNC_40 (struct pasemi_mac*) ;
 int FUNC_41 (int ,int) ;
 int FUNC_42 (int ,int ) ;
 int FUNC_43 (struct pasemi_mac*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_44(struct net_device *VAR_32)
{
 struct pasemi_mac *VAR_33 = FUNC_21(VAR_32);
 unsigned int VAR_34;
 int VAR_35, VAR_36;

 VAR_34 = VAR_25 | FUNC_8(3) |
  FUNC_9(3) | FUNC_7(0xf) |
  FUNC_11(8) | FUNC_10(12);

 FUNC_43(VAR_33, VAR_24, VAR_34);

 VAR_36 = FUNC_33(VAR_32);
 if (VAR_36)
  goto out_rx_resources;

 VAR_33->tx = FUNC_34(VAR_32);

 if (!VAR_33->tx)
  goto out_tx_ring;




 if (VAR_32->mtu > 1500 && !VAR_33->num_cs) {
  FUNC_32(VAR_33);
  if (!VAR_33->num_cs)
   goto out_tx_ring;
 }


 for (VAR_35 = 0; VAR_35 < 32; VAR_35++)
  FUNC_43(VAR_33, FUNC_14(VAR_35), 0);


 FUNC_42(VAR_15,
        FUNC_2(0x3ff));

 FUNC_42(FUNC_3(VAR_33->rx->chan.chno),
        FUNC_4(256));

 FUNC_42(FUNC_5(VAR_33->tx->chan.chno),
        FUNC_6(32));

 FUNC_43(VAR_33, VAR_26,
        FUNC_13(VAR_33->rx->chan.chno) |
        FUNC_12(VAR_33->rx->chan.chno));


 FUNC_41(FUNC_1(VAR_33->dma_if),
        VAR_9 |
        VAR_8 |
        VAR_6 |
        VAR_10 |
        VAR_7);


 FUNC_24(&FUNC_37(VAR_33)->chan, VAR_3 |
         VAR_5 |
         VAR_4 |
         VAR_2);


 FUNC_24(&FUNC_40(VAR_33)->chan, VAR_14 |
         VAR_12 |
         VAR_13 |
         VAR_11);

 FUNC_29(VAR_32, VAR_27);

 FUNC_41(FUNC_0(FUNC_37(VAR_33)->chan.chno),
        VAR_27>>1);


 FUNC_30(VAR_33);
 FUNC_31(VAR_33);

 VAR_34 = VAR_19 | VAR_18 | VAR_17;

 if (VAR_33->type == VAR_1)
  VAR_34 |= VAR_23 | VAR_21;
 else
  VAR_34 |= VAR_22 | VAR_20;


 FUNC_43(VAR_33, VAR_16, VAR_34);

 VAR_36 = FUNC_28(VAR_32);
 if (VAR_36) {

  FUNC_27(VAR_33);
  if (VAR_33->type == VAR_1) {

   FUNC_16(&VAR_33->pdev->dev,
     "PHY init failed: %d.\n", VAR_36);
   FUNC_16(&VAR_33->pdev->dev,
     "Defaulting to 1Gbit full duplex\n");
  }
 }

 FUNC_22(VAR_32);
 FUNC_20(&VAR_33->napi);

 FUNC_38(VAR_33->tx_irq_name, sizeof(VAR_33->tx_irq_name), "%s tx",
   VAR_32->name);

 VAR_36 = FUNC_36(VAR_33->tx->chan.irq, VAR_30, 0,
     VAR_33->tx_irq_name, VAR_33->tx);
 if (VAR_36) {
  FUNC_15(&VAR_33->pdev->dev, "request_irq of irq %d failed: %d\n",
   VAR_33->tx->chan.irq, VAR_36);
  goto out_tx_int;
 }

 FUNC_38(VAR_33->rx_irq_name, sizeof(VAR_33->rx_irq_name), "%s rx",
   VAR_32->name);

 VAR_36 = FUNC_36(VAR_33->rx->chan.irq, VAR_29, 0,
     VAR_33->rx_irq_name, VAR_33->rx);
 if (VAR_36) {
  FUNC_15(&VAR_33->pdev->dev, "request_irq of irq %d failed: %d\n",
   VAR_33->rx->chan.irq, VAR_36);
  goto out_rx_int;
 }

 if (VAR_32->phydev)
  FUNC_35(VAR_32->phydev);

 FUNC_39(&VAR_33->tx->clean_timer, VAR_31, 0);
 FUNC_18(&VAR_33->tx->clean_timer, VAR_28 + VAR_0);

 return 0;

out_rx_int:
 FUNC_17(VAR_33->tx->chan.irq, VAR_33->tx);
out_tx_int:
 FUNC_19(&VAR_33->napi);
 FUNC_23(VAR_32);
out_tx_ring:
 if (VAR_33->tx)
  FUNC_26(VAR_33);
 FUNC_25(VAR_33);
out_rx_resources:

 return VAR_36;
}
