
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mpc8xxx_spi {int flags; TYPE_1__* pram; void* dma_dummy_tx; TYPE_1__* rx_bd; TYPE_1__* tx_bd; void* dma_dummy_rx; int subblock; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {int txtmp; int tbc; int tbptr; int tdp; int tstate; int rxtmp; int rbc; int rbptr; int rdp; int rstate; int mrblr; int rfcr; int tfcr; int rbase; int tbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int,int) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*) ;
 void* FUNC_8 (int ,int) ;
 void* FUNC_9 (struct device*,int ,unsigned long,int ) ;
 scalar_t__ FUNC_10 (struct device*,void*) ;
 int FUNC_11 (struct device*,void*,unsigned long,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 () ;
 unsigned long FUNC_13 (struct mpc8xxx_spi*) ;
 int FUNC_14 () ;
 int * FUNC_15 (struct device_node*,char*,int*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (struct device*) ;

int FUNC_20(struct mpc8xxx_spi *VAR_14)
{
 struct device *VAR_15 = VAR_14->dev;
 struct device_node *VAR_16 = VAR_15->of_node;
 const u32 *VAR_17;
 int VAR_18;
 unsigned long VAR_19;

 if (!(VAR_14->flags & VAR_9))
  return 0;

 if (!FUNC_12())
  return -VAR_4;

 if (VAR_14->flags & VAR_11) {
  VAR_17 = FUNC_15(VAR_16, "cell-index", &VAR_18);
  if (VAR_17 && VAR_18 == sizeof(*VAR_17))
   VAR_14->subblock = *VAR_17;

  switch (VAR_14->subblock) {
  default:
   FUNC_7(VAR_15, "cell-index unspecified, assuming SPI1\n");

  case 0:
   VAR_14->subblock = VAR_6;
   break;
  case 1:
   VAR_14->subblock = VAR_7;
   break;
  }
 }

 if (VAR_14->flags & VAR_8) {
  void *VAR_20;

  VAR_20 = FUNC_8(FUNC_19(VAR_15),
            1);
  if (FUNC_0(VAR_20))
   VAR_14->pram = ((void*)0);
  else
   VAR_14->pram = VAR_20;
 } else {
  unsigned long VAR_21 = FUNC_13(VAR_14);

  if (FUNC_1(VAR_21))
   VAR_14->pram = ((void*)0);
  else
   VAR_14->pram = FUNC_2(VAR_21);
 }
 if (VAR_14->pram == ((void*)0)) {
  FUNC_6(VAR_15, "can't allocate spi parameter ram\n");
  goto err_pram;
 }

 VAR_19 = FUNC_3(sizeof(*VAR_14->tx_bd) +
      sizeof(*VAR_14->rx_bd), 8);
 if (FUNC_1(VAR_19)) {
  FUNC_6(VAR_15, "can't allocate bds\n");
  goto err_bds;
 }

 VAR_14->dma_dummy_tx = FUNC_9(VAR_15, VAR_12, VAR_5,
         VAR_3);
 if (FUNC_10(VAR_15, VAR_14->dma_dummy_tx)) {
  FUNC_6(VAR_15, "unable to map dummy tx buffer\n");
  goto err_dummy_tx;
 }

 VAR_14->dma_dummy_rx = FUNC_9(VAR_15, VAR_13, VAR_10,
         VAR_2);
 if (FUNC_10(VAR_15, VAR_14->dma_dummy_rx)) {
  FUNC_6(VAR_15, "unable to map dummy rx buffer\n");
  goto err_dummy_rx;
 }

 VAR_14->tx_bd = FUNC_2(VAR_19);
 VAR_14->rx_bd = FUNC_2(VAR_19 + sizeof(*VAR_14->tx_bd));


 FUNC_17(&VAR_14->pram->tbase, FUNC_5(VAR_14->tx_bd));
 FUNC_17(&VAR_14->pram->rbase, FUNC_5(VAR_14->rx_bd));
 FUNC_16(&VAR_14->pram->tfcr, VAR_0 | VAR_1);
 FUNC_16(&VAR_14->pram->rfcr, VAR_0 | VAR_1);
 FUNC_17(&VAR_14->pram->mrblr, VAR_10);
 FUNC_18(&VAR_14->pram->rstate, 0);
 FUNC_18(&VAR_14->pram->rdp, 0);
 FUNC_17(&VAR_14->pram->rbptr, 0);
 FUNC_17(&VAR_14->pram->rbc, 0);
 FUNC_18(&VAR_14->pram->rxtmp, 0);
 FUNC_18(&VAR_14->pram->tstate, 0);
 FUNC_18(&VAR_14->pram->tdp, 0);
 FUNC_17(&VAR_14->pram->tbptr, 0);
 FUNC_17(&VAR_14->pram->tbc, 0);
 FUNC_18(&VAR_14->pram->txtmp, 0);

 return 0;

err_dummy_rx:
 FUNC_11(VAR_15, VAR_14->dma_dummy_tx, VAR_5, VAR_3);
err_dummy_tx:
 FUNC_4(VAR_19);
err_bds:
 if (!(VAR_14->flags & VAR_8))
  FUNC_4(FUNC_5(VAR_14->pram));
err_pram:
 FUNC_14();
 return -VAR_4;
}
