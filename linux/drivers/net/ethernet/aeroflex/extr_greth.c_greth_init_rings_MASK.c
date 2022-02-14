
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int * data; } ;
struct greth_private {int tx_free; int rx_bd_base_phys; TYPE_1__* regs; int tx_bd_base_phys; scalar_t__ tx_last; scalar_t__ tx_next; scalar_t__ rx_cur; int dev; int ** tx_bufs; int ** rx_bufs; struct sk_buff** rx_skbuff; int netdev; scalar_t__ gbit_mac; struct greth_bd* tx_bd_base; struct greth_bd* rx_bd_base; } ;
struct greth_bd {int stat; int addr; } ;
struct TYPE_2__ {int rx_desc_p; int tx_desc_p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct greth_private*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 void* FUNC_7 (scalar_t__,int ) ;
 struct sk_buff* FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct greth_private*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct greth_private *VAR_11)
{
 struct sk_buff *VAR_12;
 struct greth_bd *VAR_13, *VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_13 = VAR_11->rx_bd_base;
 VAR_14 = VAR_11->tx_bd_base;


 if (VAR_11->gbit_mac) {

  for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
   VAR_12 = FUNC_8(VAR_11->netdev, VAR_9+VAR_10);
   if (VAR_12 == ((void*)0)) {
    if (FUNC_9(VAR_11))
     FUNC_1(VAR_11->dev, "Error allocating DMA ring.\n");
    goto cleanup;
   }
   FUNC_10(VAR_12, VAR_10);
   VAR_15 = FUNC_2(VAR_11->dev,
        VAR_12->data,
        VAR_9+VAR_10,
        VAR_0);

   if (FUNC_3(VAR_11->dev, VAR_15)) {
    if (FUNC_9(VAR_11))
     FUNC_1(VAR_11->dev, "Could not create initial DMA mapping\n");
    goto cleanup;
   }
   VAR_11->rx_skbuff[VAR_16] = VAR_12;
   FUNC_6(&VAR_13[VAR_16].addr, VAR_15);
   FUNC_6(&VAR_13[VAR_16].stat, VAR_4 | VAR_5);
  }

 } else {


  for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {

   VAR_11->rx_bufs[VAR_16] = FUNC_7(VAR_9, VAR_3);

   if (VAR_11->rx_bufs[VAR_16] == ((void*)0)) {
    if (FUNC_9(VAR_11))
     FUNC_1(VAR_11->dev, "Error allocating DMA ring.\n");
    goto cleanup;
   }

   VAR_15 = FUNC_2(VAR_11->dev,
        VAR_11->rx_bufs[VAR_16],
        VAR_9,
        VAR_0);

   if (FUNC_3(VAR_11->dev, VAR_15)) {
    if (FUNC_9(VAR_11))
     FUNC_1(VAR_11->dev, "Could not create initial DMA mapping\n");
    goto cleanup;
   }
   FUNC_6(&VAR_13[VAR_16].addr, VAR_15);
   FUNC_6(&VAR_13[VAR_16].stat, VAR_4 | VAR_5);
  }
  for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {

   VAR_11->tx_bufs[VAR_16] = FUNC_7(VAR_9, VAR_3);

   if (VAR_11->tx_bufs[VAR_16] == ((void*)0)) {
    if (FUNC_9(VAR_11))
     FUNC_1(VAR_11->dev, "Error allocating DMA ring.\n");
    goto cleanup;
   }

   VAR_15 = FUNC_2(VAR_11->dev,
        VAR_11->tx_bufs[VAR_16],
        VAR_9,
        VAR_1);

   if (FUNC_3(VAR_11->dev, VAR_15)) {
    if (FUNC_9(VAR_11))
     FUNC_1(VAR_11->dev, "Could not create initial DMA mapping\n");
    goto cleanup;
   }
   FUNC_6(&VAR_14[VAR_16].addr, VAR_15);
   FUNC_6(&VAR_14[VAR_16].stat, 0);
  }
 }
 FUNC_6(&VAR_13[VAR_7 - 1].stat,
         FUNC_5(&VAR_13[VAR_7 - 1].stat) | VAR_6);


 VAR_11->rx_cur = 0;
 VAR_11->tx_next = 0;
 VAR_11->tx_last = 0;
 VAR_11->tx_free = VAR_8;


 FUNC_0(VAR_11->regs->tx_desc_p, VAR_11->tx_bd_base_phys);
 FUNC_0(VAR_11->regs->rx_desc_p, VAR_11->rx_bd_base_phys);

 return 0;

cleanup:
 FUNC_4(VAR_11);
 return -VAR_2;
}
