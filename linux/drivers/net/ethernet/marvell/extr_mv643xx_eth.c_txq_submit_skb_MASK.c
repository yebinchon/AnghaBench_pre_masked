
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct tx_queue {scalar_t__ tx_ring_size; scalar_t__ tx_desc_count; scalar_t__ tx_curr_desc; int index; int tx_skb; int * tx_desc_mapping; struct tx_desc* tx_desc_area; } ;
struct tx_desc {int byte_cnt; int cmd_sts; int buf_ptr; scalar_t__ l4i_chk; } ;
struct sk_buff {int len; int data; } ;
struct net_device {int dummy; } ;
struct mv643xx_eth_private {int work_tx_end; TYPE_2__* dev; } ;
struct TYPE_6__ {int nr_frags; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_3__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct mv643xx_eth_private*,struct sk_buff*,scalar_t__*,int*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct tx_queue*) ;
 int FUNC_9 (struct tx_queue*,struct sk_buff*) ;
 struct mv643xx_eth_private* FUNC_10 (struct tx_queue*) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct tx_queue *VAR_10, struct sk_buff *VAR_11,
     struct net_device *VAR_12)
{
 struct mv643xx_eth_private *VAR_13 = FUNC_10(VAR_10);
 int VAR_14 = FUNC_5(VAR_11)->nr_frags;
 int VAR_15;
 struct tx_desc *VAR_16;
 u32 VAR_17;
 u16 VAR_18;
 int VAR_19, VAR_20;

 VAR_17 = 0;
 VAR_18 = 0;

 if (VAR_10->tx_ring_size - VAR_10->tx_desc_count < VAR_5 + 1) {
  if (FUNC_2())
   FUNC_3(VAR_12, "tx queue full?!\n");
  return -VAR_3;
 }

 VAR_20 = FUNC_6(VAR_13, VAR_11, &VAR_18, &VAR_17, VAR_11->len);
 if (VAR_20)
  return VAR_20;
 VAR_17 |= VAR_7 | VAR_4 | VAR_0;

 VAR_15 = VAR_10->tx_curr_desc++;
 if (VAR_10->tx_curr_desc == VAR_10->tx_ring_size)
  VAR_10->tx_curr_desc = 0;
 VAR_16 = &VAR_10->tx_desc_area[VAR_15];
 VAR_10->tx_desc_mapping[VAR_15] = VAR_1;

 if (VAR_14) {
  FUNC_9(VAR_10, VAR_11);
  VAR_19 = FUNC_4(VAR_11);
 } else {
  VAR_17 |= VAR_9 | VAR_8 | VAR_6;
  VAR_19 = VAR_11->len;
 }

 VAR_16->l4i_chk = VAR_18;
 VAR_16->byte_cnt = VAR_19;
 VAR_16->buf_ptr = FUNC_1(VAR_13->dev->dev.parent, VAR_11->data,
           VAR_19, VAR_2);

 FUNC_0(&VAR_10->tx_skb, VAR_11);

 FUNC_7(VAR_11);


 FUNC_11();
 VAR_16->cmd_sts = VAR_17;


 VAR_13->work_tx_end &= ~(1 << VAR_10->index);


 FUNC_11();
 FUNC_8(VAR_10);

 VAR_10->tx_desc_count += VAR_14 + 1;

 return 0;
}
