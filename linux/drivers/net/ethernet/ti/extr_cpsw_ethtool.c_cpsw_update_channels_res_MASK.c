
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {scalar_t__ tx_maxrate; } ;
struct cpsw_vector {int ch; } ;
struct cpsw_priv {int ndev; struct cpsw_common* cpsw; } ;
struct cpsw_common {int rx_ch_num; int tx_ch_num; int dma; struct cpsw_vector* txv; struct cpsw_vector* rxv; } ;
typedef void (* cpdma_handler_fn ) (void*,int,int) ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,void (*) (void*,int,int),int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cpsw_priv*,int ,char*,int,char*) ;
 void FUNC_5 (void*,int,int) ;
 int VAR_1 ;
 struct netdev_queue* FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct cpsw_priv *VAR_2, int VAR_3, int VAR_4,
        cpdma_handler_fn VAR_5)
{
 struct cpsw_common *VAR_6 = VAR_2->cpsw;
 void (*VAR_7)(void *, int, int);
 struct netdev_queue *VAR_8;
 struct cpsw_vector *VAR_9;
 int VAR_10, *VAR_11, VAR_12;

 if (VAR_4) {
  VAR_11 = &VAR_6->rx_ch_num;
  VAR_9 = VAR_6->rxv;
  VAR_7 = VAR_5;
 } else {
  VAR_11 = &VAR_6->tx_ch_num;
  VAR_9 = VAR_6->txv;
  VAR_7 = FUNC_5;
 }

 while (*VAR_11 < VAR_3) {
  VAR_12 = VAR_4 ? *VAR_11 : 7 - *VAR_11;
  VAR_9[*VAR_11].ch = FUNC_2(VAR_6->dma, VAR_12, VAR_7, VAR_4);
  VAR_8 = FUNC_6(VAR_2->ndev, *VAR_11);
  VAR_8->tx_maxrate = 0;

  if (FUNC_0(VAR_9[*VAR_11].ch))
   return FUNC_1(VAR_9[*VAR_11].ch);

  if (!VAR_9[*VAR_11].ch)
   return -VAR_0;

  FUNC_4(VAR_2, VAR_1, "created new %d %s channel\n", *VAR_11,
     (VAR_4 ? "rx" : "tx"));
  (*VAR_11)++;
 }

 while (*VAR_11 > VAR_3) {
  (*VAR_11)--;

  VAR_10 = FUNC_3(VAR_9[*VAR_11].ch);
  if (VAR_10)
   return VAR_10;

  FUNC_4(VAR_2, VAR_1, "destroyed %d %s channel\n", *VAR_11,
     (VAR_4 ? "rx" : "tx"));
 }

 return 0;
}
