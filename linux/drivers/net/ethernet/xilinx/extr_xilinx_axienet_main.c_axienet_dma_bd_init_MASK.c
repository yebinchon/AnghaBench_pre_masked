
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int data; } ;
struct TYPE_5__ {int parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct axienet_local {int tx_bd_num; int tx_bd_p; int rx_bd_num; int rx_bd_p; int coalesce_count_rx; int coalesce_count_tx; int max_frm_size; TYPE_3__* rx_bd_v; TYPE_1__* tx_bd_v; scalar_t__ rx_bd_ci; scalar_t__ tx_bd_tail; scalar_t__ tx_bd_ci; } ;
struct TYPE_6__ {int next; int cntrl; int phys; struct sk_buff* skb; } ;
struct TYPE_4__ {int next; } ;


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
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct axienet_local*,int ) ;
 int FUNC_2 (struct axienet_local*,int ,int) ;
 void* FUNC_3 (int ,int,int*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct sk_buff* FUNC_5 (struct net_device*,int ) ;
 struct axienet_local* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_16)
{
 u32 VAR_17;
 int VAR_18;
 struct sk_buff *VAR_19;
 struct axienet_local *VAR_20 = FUNC_6(VAR_16);


 VAR_20->tx_bd_ci = 0;
 VAR_20->tx_bd_tail = 0;
 VAR_20->rx_bd_ci = 0;


 VAR_20->tx_bd_v = FUNC_3(VAR_16->dev.parent,
      sizeof(*VAR_20->tx_bd_v) * VAR_20->tx_bd_num,
      &VAR_20->tx_bd_p, VAR_2);
 if (!VAR_20->tx_bd_v)
  goto out;

 VAR_20->rx_bd_v = FUNC_3(VAR_16->dev.parent,
      sizeof(*VAR_20->rx_bd_v) * VAR_20->rx_bd_num,
      &VAR_20->rx_bd_p, VAR_2);
 if (!VAR_20->rx_bd_v)
  goto out;

 for (VAR_18 = 0; VAR_18 < VAR_20->tx_bd_num; VAR_18++) {
  VAR_20->tx_bd_v[VAR_18].next = VAR_20->tx_bd_p +
          sizeof(*VAR_20->tx_bd_v) *
          ((VAR_18 + 1) % VAR_20->tx_bd_num);
 }

 for (VAR_18 = 0; VAR_18 < VAR_20->rx_bd_num; VAR_18++) {
  VAR_20->rx_bd_v[VAR_18].next = VAR_20->rx_bd_p +
          sizeof(*VAR_20->rx_bd_v) *
          ((VAR_18 + 1) % VAR_20->rx_bd_num);

  VAR_19 = FUNC_5(VAR_16, VAR_20->max_frm_size);
  if (!VAR_19)
   goto out;

  VAR_20->rx_bd_v[VAR_18].skb = VAR_19;
  VAR_20->rx_bd_v[VAR_18].phys = FUNC_4(VAR_16->dev.parent,
           VAR_19->data,
           VAR_20->max_frm_size,
           VAR_0);
  VAR_20->rx_bd_v[VAR_18].cntrl = VAR_20->max_frm_size;
 }


 VAR_17 = FUNC_1(VAR_20, VAR_12);

 VAR_17 = ((VAR_17 & ~VAR_3) |
       ((VAR_20->coalesce_count_rx) << VAR_4));

 VAR_17 = ((VAR_17 & ~VAR_6) |
       (VAR_8 << VAR_7));

 VAR_17 |= VAR_10;

 FUNC_2(VAR_20, VAR_12, VAR_17);


 VAR_17 = FUNC_1(VAR_20, VAR_15);

 VAR_17 = (((VAR_17 & ~VAR_3)) |
       ((VAR_20->coalesce_count_tx) << VAR_4));

 VAR_17 = (((VAR_17 & ~VAR_6)) |
       (VAR_9 << VAR_7));

 VAR_17 |= VAR_10;

 FUNC_2(VAR_20, VAR_15, VAR_17);




 FUNC_2(VAR_20, VAR_11, VAR_20->rx_bd_p);
 VAR_17 = FUNC_1(VAR_20, VAR_12);
 FUNC_2(VAR_20, VAR_12,
     VAR_17 | VAR_5);
 FUNC_2(VAR_20, VAR_13, VAR_20->rx_bd_p +
     (sizeof(*VAR_20->rx_bd_v) * (VAR_20->rx_bd_num - 1)));





 FUNC_2(VAR_20, VAR_14, VAR_20->tx_bd_p);
 VAR_17 = FUNC_1(VAR_20, VAR_15);
 FUNC_2(VAR_20, VAR_15,
     VAR_17 | VAR_5);

 return 0;
out:
 FUNC_0(VAR_16);
 return -VAR_1;
}
