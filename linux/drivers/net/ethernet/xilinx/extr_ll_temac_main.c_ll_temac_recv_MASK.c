
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct temac_local {int rx_bd_ci; int temac_features; int rx_lock; int (* dma_out ) (struct temac_local*,int ,scalar_t__) ;struct cdmac_bd* rx_bd_v; struct sk_buff** rx_skb; scalar_t__ rx_bd_p; } ;
struct sk_buff {int len; int data; int ip_summed; int csum; int protocol; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_2__ dev; TYPE_1__ stats; } ;
struct cdmac_bd {void* app0; void* len; void* phys; void* app3; void* app4; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int,scalar_t__,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (struct net_device*,scalar_t__) ;
 struct temac_local* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct temac_local*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_9)
{
 struct temac_local *VAR_10 = FUNC_7(VAR_9);
 struct sk_buff *VAR_11, *VAR_12;
 unsigned int VAR_13;
 struct cdmac_bd *VAR_14;
 dma_addr_t VAR_15, VAR_16;
 int VAR_17;
 unsigned long VAR_18;

 FUNC_12(&VAR_10->rx_lock, VAR_18);

 VAR_15 = VAR_10->rx_bd_p + sizeof(*VAR_10->rx_bd_v) * VAR_10->rx_bd_ci;
 VAR_14 = &VAR_10->rx_bd_v[VAR_10->rx_bd_ci];

 VAR_13 = FUNC_0(VAR_14->app0);
 while ((VAR_13 & VAR_5)) {

  VAR_11 = VAR_10->rx_skb[VAR_10->rx_bd_ci];
  VAR_17 = FUNC_0(VAR_14->app4) & 0x3FFF;

  FUNC_3(VAR_9->dev.parent, FUNC_0(VAR_14->phys),
     VAR_8, VAR_1);

  FUNC_11(VAR_11, VAR_17);
  VAR_11->protocol = FUNC_4(VAR_11, VAR_9);
  FUNC_9(VAR_11);


  if (((VAR_10->temac_features & VAR_7) != 0) &&
      (VAR_11->protocol == FUNC_5(VAR_2)) &&
      (VAR_11->len > 64)) {






   VAR_11->csum = FUNC_5(FUNC_0(VAR_14->app3) & 0xFFFF);
   VAR_11->ip_summed = VAR_0;
  }

  if (!FUNC_10(VAR_11))
   FUNC_8(VAR_11);

  VAR_9->stats.rx_packets++;
  VAR_9->stats.rx_bytes += VAR_17;

  VAR_12 = FUNC_6(VAR_9,
      VAR_8);
  if (!VAR_12) {
   FUNC_13(&VAR_10->rx_lock, VAR_18);
   return;
  }

  VAR_14->app0 = FUNC_1(VAR_6);
  VAR_16 = FUNC_2(VAR_9->dev.parent, VAR_12->data,
           VAR_8,
           VAR_1);
  VAR_14->phys = FUNC_1(VAR_16);
  VAR_14->len = FUNC_1(VAR_8);
  VAR_10->rx_skb[VAR_10->rx_bd_ci] = VAR_12;

  VAR_10->rx_bd_ci++;
  if (VAR_10->rx_bd_ci >= VAR_3)
   VAR_10->rx_bd_ci = 0;

  VAR_14 = &VAR_10->rx_bd_v[VAR_10->rx_bd_ci];
  VAR_13 = FUNC_0(VAR_14->app0);
 }
 VAR_10->dma_out(VAR_10, VAR_4, VAR_15);

 FUNC_13(&VAR_10->rx_lock, VAR_18);
}
