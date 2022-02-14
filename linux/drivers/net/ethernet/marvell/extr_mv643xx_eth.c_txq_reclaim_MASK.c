
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tx_queue {int index; scalar_t__ tx_desc_count; int tx_used_desc; char* tx_desc_mapping; int tx_ring_size; int tx_skb; struct tx_desc* tx_desc_area; } ;
struct tx_desc {int cmd_sts; int byte_cnt; int buf_ptr; } ;
struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct mv643xx_eth_private {int work_tx; TYPE_3__* dev; } ;
struct TYPE_6__ {int tx_errors; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_7__ {TYPE_2__ stats; TYPE_1__ dev; } ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tx_queue*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (struct netdev_queue*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 struct netdev_queue* FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 struct mv643xx_eth_private* FUNC_10 (struct tx_queue*) ;

__attribute__((used)) static int FUNC_11(struct tx_queue *VAR_5, int VAR_6, int VAR_7)
{
 struct mv643xx_eth_private *VAR_8 = FUNC_10(VAR_5);
 struct netdev_queue *VAR_9 = FUNC_8(VAR_8->dev, VAR_5->index);
 int VAR_10;

 FUNC_2(VAR_9);

 VAR_10 = 0;
 while (VAR_10 < VAR_6 && VAR_5->tx_desc_count > 0) {
  int VAR_11;
  struct tx_desc *VAR_12;
  u32 VAR_13;
  char VAR_14;

  VAR_11 = VAR_5->tx_used_desc;
  VAR_12 = &VAR_5->tx_desc_area[VAR_11];
  VAR_14 = VAR_5->tx_desc_mapping[VAR_11];

  VAR_13 = VAR_12->cmd_sts;

  if (VAR_13 & VAR_0) {
   if (!VAR_7)
    break;
   VAR_12->cmd_sts = VAR_13 & ~VAR_0;
  }

  VAR_5->tx_used_desc = VAR_11 + 1;
  if (VAR_5->tx_used_desc == VAR_5->tx_ring_size)
   VAR_5->tx_used_desc = 0;

  VAR_10++;
  VAR_5->tx_desc_count--;

  if (!FUNC_0(VAR_5, VAR_12->buf_ptr)) {

   if (VAR_14 == VAR_1)
    FUNC_6(VAR_8->dev->dev.parent,
            VAR_12->buf_ptr,
            VAR_12->byte_cnt,
            VAR_2);
   else
    FUNC_7(VAR_8->dev->dev.parent,
       VAR_12->buf_ptr,
       VAR_12->byte_cnt,
       VAR_2);
  }

  if (VAR_13 & VAR_4) {
   struct sk_buff *VAR_15 = FUNC_4(&VAR_5->tx_skb);

   if (!FUNC_1(!VAR_15))
    FUNC_5(VAR_15);
  }

  if (VAR_13 & VAR_3) {
   FUNC_9(VAR_8->dev, "tx error\n");
   VAR_8->dev->stats.tx_errors++;
  }

 }

 FUNC_3(VAR_9);

 if (VAR_10 < VAR_6)
  VAR_8->work_tx &= ~(1 << VAR_5->index);

 return VAR_10;
}
