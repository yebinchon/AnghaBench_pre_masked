
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ protocol; int len; int data; int ip_summed; int csum; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; } ;
struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_2__ stats; TYPE_1__ dev; } ;
struct axienet_local {size_t rx_bd_ci; int features; int rx_bd_num; struct axidma_bd* rx_bd_v; int max_frm_size; scalar_t__ rx_bd_p; } ;
struct axidma_bd {int status; int app4; int app2; int app3; struct sk_buff* skb; int cntrl; int phys; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct axienet_local*,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (struct net_device*,int ) ;
 struct axienet_local* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 dma_addr_t VAR_17 = 0;
 struct axienet_local *VAR_18 = FUNC_7(VAR_12);
 struct sk_buff *VAR_19, *VAR_20;
 struct axidma_bd *VAR_21;

 VAR_21 = &VAR_18->rx_bd_v[VAR_18->rx_bd_ci];

 while ((VAR_21->status & VAR_10)) {
  VAR_17 = VAR_18->rx_bd_p + sizeof(*VAR_18->rx_bd_v) * VAR_18->rx_bd_ci;

  FUNC_3(VAR_12->dev.parent, VAR_21->phys,
     VAR_18->max_frm_size,
     VAR_3);

  VAR_19 = VAR_21->skb;
  VAR_21->skb = ((void*)0);
  VAR_13 = VAR_21->app4 & 0x0000FFFF;

  FUNC_9(VAR_19, VAR_13);
  VAR_19->protocol = FUNC_4(VAR_19, VAR_12);

  VAR_19->ip_summed = VAR_1;


  if (VAR_18->features & VAR_5) {
   VAR_14 = (VAR_21->app2 &
          VAR_7) >> 3;
   if ((VAR_14 == VAR_8) ||
       (VAR_14 == VAR_9)) {
    VAR_19->ip_summed = VAR_2;
   }
  } else if ((VAR_18->features & VAR_6) != 0 &&
      VAR_19->protocol == FUNC_5(VAR_4) &&
      VAR_19->len > 64) {
   VAR_19->csum = FUNC_1(VAR_21->app3 & 0xFFFF);
   VAR_19->ip_summed = VAR_0;
  }

  FUNC_8(VAR_19);

  VAR_15 += VAR_13;
  VAR_16++;

  VAR_20 = FUNC_6(VAR_12, VAR_18->max_frm_size);
  if (!VAR_20)
   return;

  VAR_21->phys = FUNC_2(VAR_12->dev.parent, VAR_20->data,
          VAR_18->max_frm_size,
          VAR_3);
  VAR_21->cntrl = VAR_18->max_frm_size;
  VAR_21->status = 0;
  VAR_21->skb = VAR_20;

  if (++VAR_18->rx_bd_ci >= VAR_18->rx_bd_num)
   VAR_18->rx_bd_ci = 0;
  VAR_21 = &VAR_18->rx_bd_v[VAR_18->rx_bd_ci];
 }

 VAR_12->stats.rx_packets += VAR_16;
 VAR_12->stats.rx_bytes += VAR_15;

 if (VAR_17)
  FUNC_0(VAR_18, VAR_11, VAR_17);
}
