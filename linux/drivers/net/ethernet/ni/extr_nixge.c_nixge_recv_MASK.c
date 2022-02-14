
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int data; int ip_summed; int protocol; } ;
struct nixge_priv {size_t rx_bd_ci; struct nixge_hw_dma_bd* rx_bd_v; int napi; scalar_t__ rx_bd_p; } ;
struct nixge_hw_dma_bd {int status; int cntrl; } ;
struct TYPE_4__ {int rx_packets; int rx_bytes; } ;
struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_2__ stats; TYPE_1__ dev; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct nixge_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct nixge_priv*,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct nixge_hw_dma_bd*,int ) ;
 int FUNC_10 (struct nixge_hw_dma_bd*,uintptr_t) ;
 int FUNC_11 (struct nixge_hw_dma_bd*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_9, int VAR_10)
{
 struct nixge_priv *VAR_11 = FUNC_7(VAR_9);
 struct sk_buff *VAR_12, *VAR_13;
 struct nixge_hw_dma_bd *VAR_14;
 dma_addr_t VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 u32 VAR_19 = 0;

 VAR_14 = &VAR_11->rx_bd_v[VAR_11->rx_bd_ci];

 while ((VAR_14->status & VAR_5 &&
  VAR_10 > VAR_17)) {
  VAR_15 = VAR_11->rx_bd_p + sizeof(*VAR_11->rx_bd_v) *
    VAR_11->rx_bd_ci;

  VAR_12 = (struct sk_buff *)(uintptr_t)
   FUNC_9(VAR_14, VAR_8);

  VAR_18 = VAR_14->status & VAR_4;
  if (VAR_18 > VAR_2)
   VAR_18 = VAR_2;

  FUNC_2(VAR_9->dev.parent,
     FUNC_9(VAR_14, VAR_7),
     VAR_2,
     VAR_1);

  FUNC_13(VAR_12, VAR_18);

  VAR_12->protocol = FUNC_3(VAR_12, VAR_9);
  FUNC_12(VAR_12);




  VAR_12->ip_summed = VAR_0;

  FUNC_4(&VAR_11->napi, VAR_12);

  VAR_19 += VAR_18;
  VAR_17++;

  VAR_13 = FUNC_5(VAR_9,
          VAR_2);
  if (!VAR_13)
   return VAR_17;

  VAR_16 = FUNC_0(VAR_9->dev.parent, VAR_13->data,
       VAR_2,
       VAR_1);
  if (FUNC_1(VAR_9->dev.parent, VAR_16)) {

   FUNC_6(VAR_9, "Failed to map ...\n");
  }
  FUNC_11(VAR_14, VAR_16);
  VAR_14->cntrl = VAR_2;
  VAR_14->status = 0;
  FUNC_10(VAR_14, (uintptr_t)VAR_13);

  ++VAR_11->rx_bd_ci;
  VAR_11->rx_bd_ci %= VAR_3;
  VAR_14 = &VAR_11->rx_bd_v[VAR_11->rx_bd_ci];
 }

 VAR_9->stats.rx_packets += VAR_17;
 VAR_9->stats.rx_bytes += VAR_19;

 if (VAR_15)
  FUNC_8(VAR_11, VAR_6, VAR_15);

 return VAR_17;
}
