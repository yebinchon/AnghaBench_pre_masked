
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct temac_local {int tx_bd_p; int rx_bd_p; int tx_chnl_ctrl; int rx_chnl_ctrl; int (* dma_out ) (struct temac_local*,int ,int) ;scalar_t__ rx_bd_ci; scalar_t__ tx_bd_tail; scalar_t__ tx_bd_next; scalar_t__ tx_bd_ci; TYPE_2__* rx_bd_v; struct sk_buff** rx_skb; TYPE_1__* tx_bd_v; } ;
struct sk_buff {int data; } ;
struct TYPE_6__ {int parent; } ;
struct net_device {TYPE_3__ dev; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {void* app0; void* len; void* phys; void* next; } ;
struct TYPE_4__ {void* next; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (int) ;
 struct sk_buff** FUNC_1 (TYPE_3__*,int,int,int ) ;
 void* FUNC_2 (int ,int,int*,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 struct sk_buff* FUNC_4 (struct net_device*,int) ;
 struct temac_local* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct temac_local*,int ,int) ;
 int FUNC_7 (struct temac_local*,int ,int) ;
 int FUNC_8 (struct temac_local*,int ,int) ;
 int FUNC_9 (struct temac_local*,int ,int) ;
 int FUNC_10 (struct temac_local*,int ,int) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_17)
{
 struct temac_local *VAR_18 = FUNC_5(VAR_17);
 struct sk_buff *VAR_19;
 dma_addr_t VAR_20;
 int VAR_21;

 VAR_18->rx_skb = FUNC_1(&VAR_17->dev, VAR_8, sizeof(*VAR_18->rx_skb),
      VAR_7);
 if (!VAR_18->rx_skb)
  goto out;



 VAR_18->tx_bd_v = FUNC_2(VAR_17->dev.parent,
      sizeof(*VAR_18->tx_bd_v) * VAR_13,
      &VAR_18->tx_bd_p, VAR_7);
 if (!VAR_18->tx_bd_v)
  goto out;

 VAR_18->rx_bd_v = FUNC_2(VAR_17->dev.parent,
      sizeof(*VAR_18->rx_bd_v) * VAR_8,
      &VAR_18->rx_bd_p, VAR_7);
 if (!VAR_18->rx_bd_v)
  goto out;

 for (VAR_21 = 0; VAR_21 < VAR_13; VAR_21++) {
  VAR_18->tx_bd_v[VAR_21].next = FUNC_0(VAR_18->tx_bd_p
    + sizeof(*VAR_18->tx_bd_v) * ((VAR_21 + 1) % VAR_13));
 }

 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
  VAR_18->rx_bd_v[VAR_21].next = FUNC_0(VAR_18->rx_bd_p
    + sizeof(*VAR_18->rx_bd_v) * ((VAR_21 + 1) % VAR_8));

  VAR_19 = FUNC_4(VAR_17,
      VAR_16);
  if (!VAR_19)
   goto out;

  VAR_18->rx_skb[VAR_21] = VAR_19;

  VAR_20 = FUNC_3(VAR_17->dev.parent, VAR_19->data,
           VAR_16,
           VAR_5);
  VAR_18->rx_bd_v[VAR_21].phys = FUNC_0(VAR_20);
  VAR_18->rx_bd_v[VAR_21].len = FUNC_0(VAR_16);
  VAR_18->rx_bd_v[VAR_21].app0 = FUNC_0(VAR_12);
 }


 VAR_18->dma_out(VAR_18, VAR_14, VAR_18->tx_chnl_ctrl |
      0x00000400 |
      VAR_2 | VAR_3 |
      VAR_1 | VAR_0);
 VAR_18->dma_out(VAR_18, VAR_9, VAR_18->rx_chnl_ctrl |
      VAR_4 |
      VAR_2 | VAR_3 |
      VAR_1 | VAR_0);


 VAR_18->tx_bd_ci = 0;
 VAR_18->tx_bd_next = 0;
 VAR_18->tx_bd_tail = 0;
 VAR_18->rx_bd_ci = 0;


 FUNC_12();
 VAR_18->dma_out(VAR_18, VAR_10, VAR_18->rx_bd_p);
 VAR_18->dma_out(VAR_18, VAR_11,
         VAR_18->rx_bd_p + (sizeof(*VAR_18->rx_bd_v) * (VAR_8 - 1)));


 VAR_18->dma_out(VAR_18, VAR_15, VAR_18->tx_bd_p);

 return 0;

out:
 FUNC_11(VAR_17);
 return -VAR_6;
}
