
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ ip_summed; int data; } ;
struct TYPE_11__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_5__ stats; } ;
struct ksz_desc_info {struct ksz_desc* cur; } ;
struct ksz_hw {int dev_count; int dst_ports; int tx_int_cnt; struct ksz_desc_info tx_desc_info; } ;
struct ksz_dma_buf {int len; struct sk_buff* skb; void* dma; } ;
struct TYPE_8__ {int csum_gen_tcp; int csum_gen_udp; } ;
struct TYPE_9__ {TYPE_2__ tx; } ;
struct TYPE_10__ {TYPE_3__ buf; } ;
struct ksz_desc {TYPE_4__ sw; } ;
struct TYPE_7__ {int first_port; } ;
struct dev_priv {TYPE_1__ port; struct dev_info* adapter; } ;
struct dev_info {int pdev; struct ksz_hw hw; } ;
typedef int skb_frag_t ;
struct TYPE_12__ {int nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 struct ksz_dma_buf* FUNC_0 (struct ksz_desc*) ;
 int VAR_1 ;
 int FUNC_1 (struct ksz_desc_info*,struct ksz_desc**) ;
 int FUNC_2 (struct ksz_hw*) ;
 struct dev_priv* FUNC_3 (struct net_device*) ;
 void* FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (struct ksz_desc*) ;
 int FUNC_6 (struct ksz_desc*,void*) ;
 int FUNC_7 (struct ksz_desc*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_6__* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_12(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct ksz_desc *VAR_4;
 struct ksz_desc *VAR_5;
 struct dev_priv *VAR_6 = FUNC_3(VAR_3);
 struct dev_info *VAR_7 = VAR_6->adapter;
 struct ksz_hw *VAR_8 = &VAR_7->hw;
 struct ksz_desc_info *VAR_9 = &VAR_8->tx_desc_info;
 struct ksz_dma_buf *VAR_10;
 int VAR_11;
 int VAR_12 = FUNC_11(VAR_2)->nr_frags;





 if (VAR_8->dev_count > 1)
  VAR_8->dst_ports = 1 << VAR_6->port.first_port;


 VAR_11 = VAR_2->len;


 VAR_5 = VAR_9->cur;
 VAR_4 = VAR_5;

 VAR_10 = FUNC_0(VAR_4);
 if (VAR_12) {
  int VAR_13;
  skb_frag_t *VAR_14;

  VAR_10->len = FUNC_10(VAR_2);

  VAR_10->dma = FUNC_4(
   VAR_7->pdev, VAR_2->data, VAR_10->len,
   VAR_1);
  FUNC_6(VAR_4, VAR_10->dma);
  FUNC_7(VAR_4, VAR_10->len);

  VAR_13 = 0;
  do {
   VAR_14 = &FUNC_11(VAR_2)->frags[VAR_13];


   FUNC_1(VAR_9, &VAR_4);


   ++VAR_8->tx_int_cnt;

   VAR_10 = FUNC_0(VAR_4);
   VAR_10->len = FUNC_9(VAR_14);

   VAR_10->dma = FUNC_4(
    VAR_7->pdev,
    FUNC_8(VAR_14),
    VAR_10->len,
    VAR_1);
   FUNC_6(VAR_4, VAR_10->dma);
   FUNC_7(VAR_4, VAR_10->len);

   VAR_13++;
   if (VAR_13 == VAR_12)
    break;


   FUNC_5(VAR_4);
  } while (1);


  VAR_9->cur = VAR_4;


  FUNC_5(VAR_5);
 } else {
  VAR_10->len = VAR_11;

  VAR_10->dma = FUNC_4(
   VAR_7->pdev, VAR_2->data, VAR_10->len,
   VAR_1);
  FUNC_6(VAR_4, VAR_10->dma);
  FUNC_7(VAR_4, VAR_10->len);
 }

 if (VAR_2->ip_summed == VAR_0) {
  (VAR_4)->sw.buf.tx.csum_gen_tcp = 1;
  (VAR_4)->sw.buf.tx.csum_gen_udp = 1;
 }





 VAR_10->skb = VAR_2;

 FUNC_2(VAR_8);


 VAR_3->stats.tx_packets++;
 VAR_3->stats.tx_bytes += VAR_11;
}
