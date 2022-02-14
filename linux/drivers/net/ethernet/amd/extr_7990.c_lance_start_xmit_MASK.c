
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int * data; } ;
struct net_device {int dummy; } ;
struct lance_private {int tx_new; int tx_ring_mod_mask; int tx_full; int devlock; struct lance_init_block* init_block; } ;
struct lance_init_block {TYPE_1__* btx_ring; int ** tx_buf; } ;
struct TYPE_2__ {int length; int tmd1_bits; scalar_t__ misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lance_private*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (void*,int ,int) ;
 struct lance_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct sk_buff*,void*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct lance_private *VAR_9 = FUNC_3(VAR_8);
 volatile struct lance_init_block *VAR_10 = VAR_9->init_block;
 int VAR_11, VAR_12, VAR_13;
 static int VAR_14;
 unsigned long VAR_15;

 FUNC_5(VAR_8);

 if (!VAR_6) {
  FUNC_1(VAR_7);
  return VAR_5;
 }

 VAR_12 = VAR_7->len;
 VAR_13 = (VAR_12 <= VAR_0) ? VAR_0 : VAR_12;
 VAR_11 = VAR_9->tx_new & VAR_9->tx_ring_mod_mask;
 VAR_10->btx_ring[VAR_11].length = (-VAR_13) | 0xf000;
 VAR_10->btx_ring[VAR_11].misc = 0;

 if (VAR_7->len < VAR_0)
  FUNC_2((void *)&VAR_10->tx_buf[VAR_11][0], 0, VAR_0);
 FUNC_7(VAR_7, (void *)&VAR_10->tx_buf[VAR_11][0], VAR_12);


 VAR_10->btx_ring[VAR_11].tmd1_bits = (VAR_4|VAR_3);
 VAR_9->tx_new = (VAR_9->tx_new + 1) & VAR_9->tx_ring_mod_mask;

 VAR_14++;

 FUNC_0(VAR_9, VAR_1 | VAR_2);
 FUNC_1(VAR_7);

 FUNC_8(&VAR_9->devlock, VAR_15);
 if (VAR_6)
  FUNC_4(VAR_8);
 else
  VAR_9->tx_full = 1;
 FUNC_9(&VAR_9->devlock, VAR_15);

 return VAR_5;
}
