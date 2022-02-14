
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cosa_data {int rxsize; int nchannels; int lock; int dma; int * bouncebuf; int * rxbuf; TYPE_1__* rxchan; int num; TYPE_1__* chan; int name; int rxtx; } ;
struct TYPE_3__ {int num; int * (* setup_rx ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (struct cosa_data*) ;
 int FUNC_5 (struct cosa_data*) ;
 int FUNC_6 (struct cosa_data*,int ) ;
 int FUNC_7 (struct cosa_data*,int) ;
 int FUNC_8 (struct cosa_data*,int ) ;
 int FUNC_9 (struct cosa_data*,int) ;
 int FUNC_10 (struct cosa_data*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct cosa_data*) ;
 int FUNC_14 (char*,int ,...) ;
 int FUNC_15 (char*,int ,int) ;
 int FUNC_16 (struct cosa_data*) ;
 int FUNC_17 (unsigned long) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 int * FUNC_24 (TYPE_1__*,int) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static inline void FUNC_27(struct cosa_data *VAR_7, int VAR_8)
{
 unsigned long VAR_9;




 FUNC_22(&VAR_7->lock, VAR_9);
 FUNC_18(VAR_3, &VAR_7->rxtx);

 if (FUNC_13(VAR_7)) {
  if (!FUNC_25(VAR_2, &VAR_7->rxtx)) {
   FUNC_18(VAR_2, &VAR_7->rxtx);
   FUNC_16(VAR_7);
   VAR_7->rxsize = FUNC_5(VAR_7) <<8;



   FUNC_23(&VAR_7->lock, VAR_9);
   return;
  } else {
   FUNC_1(VAR_2, &VAR_7->rxtx);
   VAR_7->rxsize |= FUNC_5(VAR_7) & 0xff;







  }
 } else {
  VAR_7->rxsize = FUNC_4(VAR_7);







 }
 if (((VAR_7->rxsize & 0xe000) >> 13) >= VAR_7->nchannels) {
  FUNC_15("%s: rx for unknown channel (0x%04x)\n",
   VAR_7->name, VAR_7->rxsize);
  FUNC_23(&VAR_7->lock, VAR_9);
  goto reject;
 }
 VAR_7->rxchan = VAR_7->chan + ((VAR_7->rxsize & 0xe000) >> 13);
 VAR_7->rxsize &= 0x1fff;
 FUNC_23(&VAR_7->lock, VAR_9);

 VAR_7->rxbuf = ((void*)0);
 if (VAR_7->rxchan->setup_rx)
  VAR_7->rxbuf = VAR_7->rxchan->setup_rx(VAR_7->rxchan, VAR_7->rxsize);

 if (!VAR_7->rxbuf) {
reject:
  FUNC_14("cosa%d: rejecting packet on channel %d\n",
   VAR_7->num, VAR_7->rxchan->num);
  VAR_7->rxbuf = VAR_7->bouncebuf;
 }


 VAR_9 = FUNC_0();
 FUNC_11(VAR_7->dma);
 FUNC_2(VAR_7->dma);
 FUNC_21(VAR_7->dma, VAR_0);
 if (FUNC_3(VAR_7->rxchan, VAR_7->rxbuf, VAR_7->rxsize & 0x1fff)) {
  FUNC_19(VAR_7->dma, FUNC_26(VAR_7->rxbuf));
 } else {
  FUNC_19(VAR_7->dma, FUNC_26(VAR_7->bouncebuf));
 }
 FUNC_20(VAR_7->dma, (VAR_7->rxsize&0x1fff));
 FUNC_12(VAR_7->dma);
 FUNC_17(VAR_9);
 FUNC_22(&VAR_7->lock, VAR_9);
 FUNC_7(VAR_7, VAR_4|VAR_6);
 if (!FUNC_13(VAR_7) && (VAR_8 & VAR_5))
  FUNC_6(VAR_7, VAR_1);





 FUNC_23(&VAR_7->lock, VAR_9);
}
