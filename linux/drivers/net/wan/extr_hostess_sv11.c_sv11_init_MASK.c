
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctrlio; int dataio; int txdma; int rxdma; struct net_device* netdevice; struct z8530_dev* dev; struct z8530_dev* private; int * irqs; } ;
struct z8530_dev {int active; int irq; scalar_t__ type; TYPE_1__ chanA; TYPE_1__ chanB; } ;
struct net_device {int base_addr; int irq; int * netdev_ops; } ;
struct TYPE_4__ {int xmit; int attach; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct net_device* FUNC_0 (struct z8530_dev*) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,struct z8530_dev*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct z8530_dev*) ;
 struct z8530_dev* FUNC_8 (int,int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int FUNC_13 (int,int) ;
 scalar_t__ FUNC_14 (int,char*) ;
 scalar_t__ FUNC_15 (int,int ,int ,char*,struct z8530_dev*) ;
 int FUNC_16 (int,int,char*) ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_18 (struct z8530_dev*,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_19 (struct z8530_dev*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static struct z8530_dev *FUNC_20(int VAR_11, int VAR_12)
{
 struct z8530_dev *VAR_13;
 struct net_device *VAR_14;




 if (!FUNC_16(VAR_11, 8, "Comtrol SV11")) {
  FUNC_11("I/O 0x%X already in use\n", VAR_11);
  return ((void*)0);
 }

 VAR_13 = FUNC_8(sizeof(struct z8530_dev), VAR_0);
 if (!VAR_13)
  goto err_kzalloc;





 VAR_13->active = 0;

 VAR_13->chanA.ctrlio = VAR_11 + 1;
 VAR_13->chanA.dataio = VAR_11 + 3;
 VAR_13->chanB.ctrlio = -1;
 VAR_13->chanB.dataio = -1;
 VAR_13->chanA.irqs = &VAR_10;
 VAR_13->chanB.irqs = &VAR_10;

 FUNC_9(0, VAR_11 + 4);




 if (FUNC_15(VAR_12, VAR_9, 0,
   "Hostess SV11", VAR_13) < 0) {
  FUNC_11("IRQ %d already in use\n", VAR_12);
  goto err_irq;
 }

 VAR_13->irq = VAR_12;
 VAR_13->chanA.private = VAR_13;
 VAR_13->chanA.dev = VAR_13;
 VAR_13->chanB.dev = VAR_13;

 if (VAR_2) {




  VAR_13->chanA.txdma = 3;
  VAR_13->chanA.rxdma = 1;
  FUNC_9(0x03 | 0x08, VAR_11 + 4);
  if (FUNC_14(VAR_13->chanA.txdma, "Hostess SV/11 (TX)"))
   goto err_txdma;

  if (VAR_2 == 1)
   if (FUNC_14(VAR_13->chanA.rxdma, "Hostess SV/11 (RX)"))
    goto err_rxdma;
 }



 FUNC_2(VAR_12);





 if (FUNC_19(VAR_13)) {
  FUNC_10("Z8530 series device not found\n");
  FUNC_3(VAR_12);
  goto free_dma;
 }
 FUNC_17(&VAR_13->chanB, VAR_6);
 if (VAR_13->type == VAR_1)
  FUNC_17(&VAR_13->chanA, VAR_7);
 else
  FUNC_17(&VAR_13->chanA, VAR_8);

 FUNC_3(VAR_12);





 VAR_13->chanA.netdevice = VAR_14 = FUNC_0(VAR_13);
 if (!VAR_14)
  goto free_dma;

 FUNC_1(VAR_14)->attach = VAR_3;
 FUNC_1(VAR_14)->xmit = VAR_5;
 VAR_14->netdev_ops = &VAR_4;
 VAR_14->base_addr = VAR_11;
 VAR_14->irq = VAR_12;

 if (FUNC_12(VAR_14)) {
  FUNC_10("unable to register HDLC device\n");
  FUNC_6(VAR_14);
  goto free_dma;
 }

 FUNC_18(VAR_13, "I/O", VAR_11);
 VAR_13->active = 1;
 return VAR_13;

free_dma:
 if (VAR_2 == 1)
  FUNC_4(VAR_13->chanA.rxdma);
err_rxdma:
 if (VAR_2)
  FUNC_4(VAR_13->chanA.txdma);
err_txdma:
 FUNC_5(VAR_12, VAR_13);
err_irq:
 FUNC_7(VAR_13);
err_kzalloc:
 FUNC_13(VAR_11, 8);
 return ((void*)0);
}
