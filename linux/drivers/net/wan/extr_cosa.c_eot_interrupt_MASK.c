
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cosa_data {int txchan; int rxsize; int* rxbuf; int* bouncebuf; int lock; scalar_t__ rxtx; int num; int rxbitmap; TYPE_1__* rxchan; int txbitmap; int txsize; struct channel_data* chan; int dma; } ;
struct channel_data {int num; scalar_t__ (* tx_done ) (struct channel_data*,int ) ;} ;
struct TYPE_3__ {int num; scalar_t__ (* rx_done ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ,int ,int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct cosa_data*) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (struct channel_data*,int ) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (int ,scalar_t__*) ;

__attribute__((used)) static inline void FUNC_16(struct cosa_data *VAR_2, int VAR_3)
{
 unsigned long VAR_4, VAR_5;
 FUNC_11(&VAR_2->lock, VAR_4);
 VAR_5 = FUNC_0();
 FUNC_4(VAR_2->dma);
 FUNC_2(VAR_2->dma);
 FUNC_10(VAR_5);
 if (FUNC_15(VAR_1, &VAR_2->rxtx)) {
  struct channel_data *VAR_6 = VAR_2->chan+VAR_2->txchan;
  if (VAR_6->tx_done)
   if (VAR_6->tx_done(VAR_6, VAR_2->txsize))
    FUNC_1(VAR_6->num, &VAR_2->txbitmap);
 } else if (FUNC_15(VAR_0, &VAR_2->rxtx)) {
  if (VAR_2->rxbuf == VAR_2->bouncebuf)
   goto out;
  if (!FUNC_3(VAR_2->rxchan, VAR_2->rxbuf, VAR_2->rxsize))
   FUNC_5(VAR_2->rxbuf, VAR_2->bouncebuf, VAR_2->rxsize);
  if (VAR_2->rxchan->rx_done)
   if (VAR_2->rxchan->rx_done(VAR_2->rxchan))
    FUNC_1(VAR_2->rxchan->num, &VAR_2->rxbitmap);
 } else {
  FUNC_8("cosa%d: unexpected EOT interrupt\n", VAR_2->num);
 }






out:
 VAR_2->rxtx = 0;
 FUNC_9(VAR_2);
 FUNC_12(&VAR_2->lock, VAR_4);
}
