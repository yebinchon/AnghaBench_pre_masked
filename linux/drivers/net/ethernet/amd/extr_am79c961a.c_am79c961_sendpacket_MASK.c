
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct net_device {int base_addr; } ;
struct dev_priv {unsigned int txhead; unsigned int txhdr; unsigned int* txbuffer; int chip_lock; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct net_device*,unsigned int) ;
 int FUNC_1 (struct net_device*,unsigned int,int ,int) ;
 int FUNC_2 (struct net_device*,unsigned int,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static netdev_tx_t
FUNC_9(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 struct dev_priv *VAR_10 = FUNC_4(VAR_9);
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13;
 unsigned long VAR_14;

 VAR_13 = VAR_10->txhead;
 VAR_11 = VAR_10->txhdr + (VAR_13 << 3);
 VAR_12 = VAR_10->txbuffer[VAR_13];
 VAR_13 += 1;
 if (VAR_13 >= VAR_7)
  VAR_13 = 0;

 FUNC_1 (VAR_9, VAR_12, VAR_8->data, VAR_8->len);
 FUNC_2 (VAR_9, VAR_11 + 4, -VAR_8->len);
 FUNC_2 (VAR_9, VAR_11 + 2, VAR_5|VAR_6|VAR_4);
 VAR_10->txhead = VAR_13;

 FUNC_6(&VAR_10->chip_lock, VAR_14);
 FUNC_8 (VAR_9->base_addr, VAR_0, VAR_2|VAR_1);
 FUNC_7(&VAR_10->chip_lock, VAR_14);






 if (FUNC_0(VAR_9, VAR_10->txhdr + (VAR_10->txhead << 3) + 2) & VAR_5)
  FUNC_5(VAR_9);

 FUNC_3(VAR_8);

 return VAR_3;
}
