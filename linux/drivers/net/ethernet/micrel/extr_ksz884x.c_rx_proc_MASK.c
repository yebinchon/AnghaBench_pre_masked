
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame_len; } ;
union desc_stat {TYPE_1__ rx; } ;
struct sk_buff {int protocol; } ;
struct TYPE_6__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_3__ stats; } ;
struct ksz_hw {int rx_cfg; } ;
struct ksz_dma_buf {TYPE_2__* skb; int dma; } ;
struct ksz_desc {int dummy; } ;
struct dev_priv {struct dev_info* adapter; } ;
struct dev_info {int pdev; } ;
struct TYPE_5__ {int data; } ;


 struct ksz_dma_buf* FUNC_0 (struct ksz_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_3 (struct net_device*,int) ;
 struct dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (struct sk_buff*,int ,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static inline int FUNC_9(struct net_device *VAR_4, struct ksz_hw* VAR_5,
 struct ksz_desc *VAR_6, union desc_stat VAR_7)
{
 int VAR_8;
 struct dev_priv *VAR_9 = FUNC_4(VAR_4);
 struct dev_info *VAR_10 = VAR_9->adapter;
 struct ksz_dma_buf *VAR_11;
 struct sk_buff *VAR_12;
 int VAR_13;


 VAR_8 = VAR_7.rx.frame_len - 4;

 VAR_11 = FUNC_0(VAR_6);
 FUNC_6(
  VAR_10->pdev, VAR_11->dma, VAR_8 + 4,
  VAR_3);

 do {

  VAR_12 = FUNC_3(VAR_4, VAR_8 + 2);
  if (!VAR_12) {
   VAR_4->stats.rx_dropped++;
   return -VAR_2;
  }





  FUNC_8(VAR_12, 2);

  FUNC_7(VAR_12, VAR_11->skb->data, VAR_8);
 } while (0);

 VAR_12->protocol = FUNC_2(VAR_12, VAR_4);

 if (VAR_5->rx_cfg & (VAR_1 | VAR_0))
  FUNC_1(VAR_12);


 VAR_4->stats.rx_packets++;
 VAR_4->stats.rx_bytes += VAR_8;


 VAR_13 = FUNC_5(VAR_12);

 return 0;
}
