
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {void* protocol; } ;
struct TYPE_5__ {int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct napi_struct {int dummy; } ;
struct mvneta_rx_queue {int refill_err; } ;
struct mvneta_rx_desc {scalar_t__ status; int data_size; int buf_phys_addr; scalar_t__ buf_cookie; } ;
struct mvneta_port {int stats; TYPE_3__* bm_priv; struct net_device* dev; } ;
struct mvneta_pcpu_stats {int syncp; int rx_bytes; int rx_packets; } ;
struct TYPE_8__ {scalar_t__ frag_size; } ;
struct mvneta_bm_pool {int buf_size; TYPE_4__ hwbm_pool; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {TYPE_2__* pdev; struct mvneta_bm_pool* bm_pools; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_0 (struct mvneta_rx_desc*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_1 (unsigned char*,scalar_t__) ;
 int FUNC_2 (int *,int ,int,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 void* FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_3__*,struct mvneta_bm_pool*,int ) ;
 int FUNC_7 (struct mvneta_port*,scalar_t__,struct sk_buff*) ;
 int FUNC_8 (struct mvneta_port*,struct mvneta_rx_desc*) ;
 int FUNC_9 (struct mvneta_port*,struct mvneta_rx_queue*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct mvneta_port*,struct mvneta_rx_queue*,int,int) ;
 struct mvneta_rx_desc* FUNC_12 (struct mvneta_rx_queue*) ;
 int FUNC_13 (struct napi_struct*,struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct net_device*,int) ;
 int FUNC_15 (struct net_device*,char*) ;
 int VAR_7 ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_18 (struct sk_buff*,int) ;
 struct mvneta_pcpu_stats* FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct napi_struct *VAR_8,
     struct mvneta_port *VAR_9, int VAR_10,
     struct mvneta_rx_queue *VAR_11)
{
 struct net_device *VAR_12 = VAR_9->dev;
 int VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;


 VAR_13 = FUNC_9(VAR_9, VAR_11);

 if (VAR_10 > VAR_13)
  VAR_10 = VAR_13;

 VAR_13 = 0;


 while (VAR_13 < VAR_10) {
  struct mvneta_rx_desc *VAR_16 = FUNC_12(VAR_11);
  struct mvneta_bm_pool *VAR_17 = ((void*)0);
  struct sk_buff *VAR_18;
  unsigned char *VAR_19;
  dma_addr_t VAR_20;
  u32 VAR_21, VAR_22;
  int VAR_23, VAR_24;
  u8 VAR_25;

  VAR_13++;
  VAR_21 = VAR_16->status;
  VAR_23 = VAR_16->data_size - (VAR_1 + VAR_3);
  VAR_19 = (u8 *)(uintptr_t)VAR_16->buf_cookie;
  VAR_20 = VAR_16->buf_phys_addr;
  VAR_25 = FUNC_0(VAR_16);
  VAR_17 = &VAR_9->bm_priv->bm_pools[VAR_25];

  if (!FUNC_10(VAR_21) ||
      (VAR_21 & VAR_4)) {
err_drop_frame_ret_pool:

   FUNC_6(VAR_9->bm_priv, VAR_17,
           VAR_16->buf_phys_addr);
err_drop_frame:
   VAR_12->stats.rx_errors++;
   FUNC_8(VAR_9, VAR_16);

   continue;
  }

  if (VAR_23 <= VAR_7) {

   VAR_18 = FUNC_14(VAR_12, VAR_23);
   if (FUNC_22(!VAR_18))
    goto err_drop_frame_ret_pool;

   FUNC_2(&VAR_9->bm_priv->pdev->dev,
                                 VAR_16->buf_phys_addr,
                                 VAR_3 + VAR_5,
                                 VAR_23,
                                 VAR_0);
   FUNC_17(VAR_18, VAR_19 + VAR_3 + VAR_5,
         VAR_23);

   VAR_18->protocol = FUNC_4(VAR_18, VAR_12);
   FUNC_7(VAR_9, VAR_21, VAR_18);
   FUNC_13(VAR_8, VAR_18);

   VAR_14++;
   VAR_15 += VAR_23;


   FUNC_6(VAR_9->bm_priv, VAR_17,
           VAR_16->buf_phys_addr);


   continue;
  }


  VAR_24 = FUNC_5(&VAR_17->hwbm_pool, VAR_2);
  if (VAR_24) {
   FUNC_15(VAR_12, "Linux processing - Can't refill\n");
   VAR_11->refill_err++;
   goto err_drop_frame_ret_pool;
  }

  VAR_22 = VAR_17->hwbm_pool.frag_size;

  VAR_18 = FUNC_1(VAR_19, VAR_22 > VAR_6 ? 0 : VAR_22);




  FUNC_3(&VAR_9->bm_priv->pdev->dev, VAR_20,
     VAR_17->buf_size, VAR_0);
  if (!VAR_18)
   goto err_drop_frame;

  VAR_14++;
  VAR_15 += VAR_23;


  FUNC_18(VAR_18, VAR_3 + VAR_5);
  FUNC_16(VAR_18, VAR_23);

  VAR_18->protocol = FUNC_4(VAR_18, VAR_12);

  FUNC_7(VAR_9, VAR_21, VAR_18);

  FUNC_13(VAR_8, VAR_18);
 }

 if (VAR_14) {
  struct mvneta_pcpu_stats *VAR_26 = FUNC_19(VAR_9->stats);

  FUNC_20(&VAR_26->syncp);
  VAR_26->rx_packets += VAR_14;
  VAR_26->rx_bytes += VAR_15;
  FUNC_21(&VAR_26->syncp);
 }


 FUNC_11(VAR_9, VAR_11, VAR_13, VAR_13);

 return VAR_13;
}
