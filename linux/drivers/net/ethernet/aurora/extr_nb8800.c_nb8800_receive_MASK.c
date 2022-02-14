
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct page {int dummy; } ;
struct TYPE_7__ {int rx_dropped; } ;
struct net_device {int dev; TYPE_3__ stats; } ;
struct TYPE_6__ {int s_addr; } ;
struct nb8800_rx_desc {TYPE_2__ desc; } ;
struct nb8800_priv {int napi; TYPE_1__* rx_bufs; struct nb8800_rx_desc* rx_descs; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int nr_frags; } ;
struct TYPE_5__ {int offset; struct page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,unsigned int,int ) ;
 int FUNC_2 (int *,int ,unsigned int,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct net_device*,unsigned int,int) ;
 int FUNC_8 (struct net_device*,char*) ;
 struct nb8800_priv* FUNC_9 (struct net_device*) ;
 void* FUNC_10 (struct page*) ;
 int FUNC_11 (struct sk_buff*,int ,struct page*,int,unsigned int,int ) ;
 int FUNC_12 (struct sk_buff*,void*,unsigned int) ;
 TYPE_4__* FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6)
{
 struct nb8800_priv *VAR_7 = FUNC_9(VAR_4);
 struct nb8800_rx_desc *VAR_8 = &VAR_7->rx_descs[VAR_5];
 struct page *VAR_9 = VAR_7->rx_bufs[VAR_5].page;
 int VAR_10 = VAR_7->rx_bufs[VAR_5].offset;
 void *VAR_11 = FUNC_10(VAR_9) + VAR_10;
 dma_addr_t VAR_12 = VAR_8->desc.s_addr;
 struct sk_buff *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_14 = VAR_6 <= VAR_2 ? VAR_6 : VAR_3;

 VAR_13 = FUNC_5(&VAR_7->napi, VAR_14);
 if (!VAR_13) {
  FUNC_8(VAR_4, "rx skb allocation failed\n");
  VAR_4->stats.rx_dropped++;
  return;
 }

 if (VAR_6 <= VAR_2) {
  FUNC_1(&VAR_4->dev, VAR_12, VAR_6, VAR_0);
  FUNC_12(VAR_13, VAR_11, VAR_6);
  FUNC_2(&VAR_4->dev, VAR_12, VAR_6,
        VAR_0);
 } else {
  VAR_15 = FUNC_7(VAR_4, VAR_5, 1);
  if (VAR_15) {
   FUNC_8(VAR_4, "rx buffer allocation failed\n");
   VAR_4->stats.rx_dropped++;
   FUNC_0(VAR_13);
   return;
  }

  FUNC_3(&VAR_4->dev, VAR_12, VAR_1, VAR_0);
  FUNC_12(VAR_13, VAR_11, VAR_3);
  FUNC_11(VAR_13, FUNC_13(VAR_13)->nr_frags, VAR_9,
    VAR_10 + VAR_3, VAR_6 - VAR_3,
    VAR_1);
 }

 VAR_13->protocol = FUNC_4(VAR_13, VAR_4);
 FUNC_6(&VAR_7->napi, VAR_13);
}
