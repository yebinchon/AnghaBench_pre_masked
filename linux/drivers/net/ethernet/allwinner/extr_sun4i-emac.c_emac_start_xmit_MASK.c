
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;
struct emac_board_info {int tx_fifo_stat; int lock; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 struct emac_board_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct emac_board_info *VAR_9 = FUNC_2(VAR_8);
 unsigned long VAR_10;
 unsigned long VAR_11;

 VAR_10 = VAR_9->tx_fifo_stat & 3;
 if (VAR_10 == 3)
  return 1;

 VAR_10 = (VAR_10 == 1 ? 1 : 0);

 FUNC_6(&VAR_9->lock, VAR_11);

 FUNC_8(VAR_10, VAR_9->membase + VAR_2);

 FUNC_1(VAR_9->membase + VAR_3,
   VAR_7->data, VAR_7->len);
 VAR_8->stats.tx_bytes += VAR_7->len;

 VAR_9->tx_fifo_stat |= 1 << VAR_10;

 if (VAR_10 == 0) {

  FUNC_8(VAR_7->len, VAR_9->membase + VAR_4);

  FUNC_8(FUNC_5(VAR_9->membase + VAR_0) | 1,
         VAR_9->membase + VAR_0);


  FUNC_4(VAR_8);
 } else if (VAR_10 == 1) {

  FUNC_8(VAR_7->len, VAR_9->membase + VAR_5);

  FUNC_8(FUNC_5(VAR_9->membase + VAR_1) | 1,
         VAR_9->membase + VAR_1);


  FUNC_4(VAR_8);
 }

 if ((VAR_9->tx_fifo_stat & 3) == 3) {

  FUNC_3(VAR_8);
 }

 FUNC_7(&VAR_9->lock, VAR_11);


 FUNC_0(VAR_7);

 return VAR_6;
}
