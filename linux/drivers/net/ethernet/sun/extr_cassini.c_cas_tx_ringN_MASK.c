
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct cas_tx_desc {int control; int buffer; } ;
struct cas {int* tx_old; int * tx_lock; int * stat_lock; TYPE_2__* net_stats; TYPE_1__** tx_tiny_use; int pdev; struct net_device* dev; struct sk_buff*** tx_skbs; struct cas_tx_desc** init_txds; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int nr_frags; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; } ;
struct TYPE_4__ {int nbufs; scalar_t__ used; } ;


 int FUNC_0 (struct cas*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cas*,int) ;
 int FUNC_3 (int,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct cas*,int ,int ,struct net_device*,char*,int,int) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 TYPE_3__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_14(struct cas *VAR_5, int VAR_6, int VAR_7)
{
 struct cas_tx_desc *VAR_8;
 struct sk_buff **VAR_9;
 struct net_device *VAR_10 = VAR_5->dev;
 int VAR_11, VAR_12;

 FUNC_12(&VAR_5->tx_lock[VAR_6]);
 VAR_8 = VAR_5->init_txds[VAR_6];
 VAR_9 = VAR_5->tx_skbs[VAR_6];
 VAR_11 = VAR_5->tx_old[VAR_6];

 VAR_12 = FUNC_3(VAR_6, VAR_11, VAR_7);
 while (VAR_11 != VAR_7) {
  struct sk_buff *VAR_13 = VAR_9[VAR_11];
  dma_addr_t VAR_14;
  u32 VAR_15;
  int VAR_16;

  if (!VAR_13) {

   VAR_11 = FUNC_4(VAR_6, VAR_11);
   continue;
  }


  VAR_12 -= FUNC_11(VAR_13)->nr_frags +
   + VAR_5->tx_tiny_use[VAR_6][VAR_11].nbufs + 1;
  if (VAR_12 < 0)
   break;

  FUNC_7(VAR_5, VAR_4, VAR_0, VAR_5->dev,
        "tx[%d] done, slot %d\n", VAR_6, VAR_11);

  VAR_9[VAR_11] = ((void*)0);
  VAR_5->tx_tiny_use[VAR_6][VAR_11].nbufs = 0;

  for (VAR_16 = 0; VAR_16 <= FUNC_11(VAR_13)->nr_frags; VAR_16++) {
   struct cas_tx_desc *VAR_17 = VAR_8 + VAR_11;

   VAR_14 = FUNC_6(VAR_17->buffer);
   VAR_15 = FUNC_1(VAR_3,
           FUNC_6(VAR_17->control));
   FUNC_10(VAR_5->pdev, VAR_14, VAR_15,
           VAR_2);
   VAR_11 = FUNC_4(VAR_6, VAR_11);


   if (VAR_5->tx_tiny_use[VAR_6][VAR_11].used) {
    VAR_5->tx_tiny_use[VAR_6][VAR_11].used = 0;
    VAR_11 = FUNC_4(VAR_6, VAR_11);
   }
  }

  FUNC_12(&VAR_5->stat_lock[VAR_6]);
  VAR_5->net_stats[VAR_6].tx_packets++;
  VAR_5->net_stats[VAR_6].tx_bytes += VAR_13->len;
  FUNC_13(&VAR_5->stat_lock[VAR_6]);
  FUNC_5(VAR_13);
 }
 VAR_5->tx_old[VAR_6] = VAR_11;





 if (FUNC_8(VAR_10) &&
     (FUNC_2(VAR_5, VAR_6) > FUNC_0(VAR_5)*(VAR_1 + 1)))
  FUNC_9(VAR_10);
 FUNC_13(&VAR_5->tx_lock[VAR_6]);
}
