
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_5__ {int rx_errors; } ;
struct net_device {TYPE_3__ dev; TYPE_2__ stats; } ;
struct napi_struct {int dummy; } ;
struct mvpp2_rx_queue {int id; } ;
struct mvpp2_rx_desc {int dummy; } ;
struct mvpp2_port {int stats; struct net_device* dev; TYPE_1__* priv; } ;
struct mvpp2_pcpu_stats {int syncp; int rx_bytes; int rx_packets; } ;
struct mvpp2_bm_pool {unsigned int frag_size; int buf_size; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct mvpp2_bm_pool* bm_pools; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 struct sk_buff* FUNC_0 (void*,unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (struct mvpp2_port*,int,int ,int ) ;
 int FUNC_4 (struct mvpp2_port*,int,struct sk_buff*) ;
 int FUNC_5 (struct mvpp2_port*,struct mvpp2_rx_desc*) ;
 int FUNC_6 (struct mvpp2_port*,struct mvpp2_bm_pool*,int) ;
 int FUNC_7 (struct mvpp2_port*,struct mvpp2_rx_desc*) ;
 int FUNC_8 (struct mvpp2_port*,struct mvpp2_rx_desc*) ;
 int FUNC_9 (struct mvpp2_port*,struct mvpp2_rx_desc*) ;
 int FUNC_10 (struct mvpp2_port*,struct mvpp2_rx_desc*) ;
 struct mvpp2_rx_desc* FUNC_11 (struct mvpp2_rx_queue*) ;
 int FUNC_12 (struct mvpp2_port*,int ) ;
 int FUNC_13 (struct mvpp2_port*,int ,int,int) ;
 int FUNC_14 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_15 (struct net_device*,char*) ;
 int FUNC_16 (struct net_device*,char*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct sk_buff*,int) ;
 int FUNC_19 (struct sk_buff*,scalar_t__) ;
 struct mvpp2_pcpu_stats* FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 () ;

__attribute__((used)) static int FUNC_24(struct mvpp2_port *VAR_7, struct napi_struct *VAR_8,
      int VAR_9, struct mvpp2_rx_queue *VAR_10)
{
 struct net_device *VAR_11 = VAR_7->dev;
 int VAR_12;
 int VAR_13 = 0;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;


 VAR_12 = FUNC_12(VAR_7, VAR_10->id);
 if (VAR_9 > VAR_12)
  VAR_9 = VAR_12;

 while (VAR_13 < VAR_9) {
  struct mvpp2_rx_desc *VAR_16 = FUNC_11(VAR_10);
  struct mvpp2_bm_pool *VAR_17;
  struct sk_buff *VAR_18;
  unsigned int VAR_19;
  dma_addr_t VAR_20;
  phys_addr_t VAR_21;
  u32 VAR_22;
  int VAR_23, VAR_24, VAR_25;
  void *VAR_26;

  VAR_13++;
  VAR_22 = FUNC_10(VAR_7, VAR_16);
  VAR_24 = FUNC_9(VAR_7, VAR_16);
  VAR_24 -= VAR_1;
  VAR_20 = FUNC_8(VAR_7, VAR_16);
  VAR_21 = FUNC_7(VAR_7, VAR_16);
  VAR_26 = (void *)FUNC_17(VAR_21);

  VAR_23 = (VAR_22 & VAR_2) >>
   VAR_3;
  VAR_17 = &VAR_7->priv->bm_pools[VAR_23];






  if (VAR_22 & VAR_4) {
err_drop_frame:
   VAR_11->stats.rx_errors++;
   FUNC_5(VAR_7, VAR_16);

   FUNC_3(VAR_7, VAR_23, VAR_20, VAR_21);
   continue;
  }

  if (VAR_17->frag_size > VAR_6)
   VAR_19 = 0;
  else
   VAR_19 = VAR_17->frag_size;

  VAR_18 = FUNC_0(VAR_26, VAR_19);
  if (!VAR_18) {
   FUNC_16(VAR_7->dev, "skb build failed\n");
   goto err_drop_frame;
  }

  VAR_25 = FUNC_6(VAR_7, VAR_17, VAR_23);
  if (VAR_25) {
   FUNC_15(VAR_7->dev, "failed to refill BM pools\n");
   goto err_drop_frame;
  }

  FUNC_1(VAR_11->dev.parent, VAR_20,
     VAR_17->buf_size, VAR_0);

  VAR_14++;
  VAR_15 += VAR_24;

  FUNC_19(VAR_18, VAR_1 + VAR_5);
  FUNC_18(VAR_18, VAR_24);
  VAR_18->protocol = FUNC_2(VAR_18, VAR_11);
  FUNC_4(VAR_7, VAR_22, VAR_18);

  FUNC_14(VAR_8, VAR_18);
 }

 if (VAR_14) {
  struct mvpp2_pcpu_stats *VAR_27 = FUNC_20(VAR_7->stats);

  FUNC_21(&VAR_27->syncp);
  VAR_27->rx_packets += VAR_14;
  VAR_27->rx_bytes += VAR_15;
  FUNC_22(&VAR_27->syncp);
 }


 FUNC_23();
 FUNC_13(VAR_7, VAR_10->id, VAR_13, VAR_13);

 return VAR_9;
}
