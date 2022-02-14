
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xcan_priv {unsigned int tx_head; int tx_tail; unsigned int tx_max; int (* read_reg ) (struct xcan_priv*,int ) ;int tx_lock; int (* write_reg ) (struct xcan_priv*,int ,int) ;} ;
struct net_device_stats {int tx_packets; int tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 struct xcan_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct xcan_priv*,int ,int) ;
 int FUNC_9 (struct xcan_priv*,int ,int) ;
 int FUNC_10 (struct xcan_priv*,int ) ;
 int FUNC_11 (struct xcan_priv*,int ,int) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_5, u32 VAR_6)
{
 struct xcan_priv *VAR_7 = FUNC_4(VAR_5);
 struct net_device_stats *VAR_8 = &VAR_5->stats;
 unsigned int VAR_9;
 int VAR_10 = 1;
 unsigned long VAR_11;
 int VAR_12 = 0;







 FUNC_6(&VAR_7->tx_lock, VAR_11);

 VAR_9 = VAR_7->tx_head - VAR_7->tx_tail;

 if (FUNC_1(VAR_9 == 0)) {

  VAR_7->write_reg(VAR_7, VAR_1, VAR_4);
  FUNC_7(&VAR_7->tx_lock, VAR_11);
  return;
 }




 if (VAR_9 > 1) {
  FUNC_0(VAR_9 > VAR_7->tx_max);
  while ((VAR_6 & VAR_4) &&
         !FUNC_0(++VAR_12 == 100)) {
   VAR_7->write_reg(VAR_7, VAR_1,
     VAR_4);
   VAR_6 = VAR_7->read_reg(VAR_7, VAR_2);
  }

  if (VAR_6 & VAR_3) {

   VAR_10 = VAR_9;
  }
 } else {

  VAR_7->write_reg(VAR_7, VAR_1, VAR_4);
 }

 while (VAR_10--) {
  VAR_8->tx_bytes += FUNC_2(VAR_5, VAR_7->tx_tail %
          VAR_7->tx_max);
  VAR_7->tx_tail++;
  VAR_8->tx_packets++;
 }

 FUNC_5(VAR_5);

 FUNC_7(&VAR_7->tx_lock, VAR_11);

 FUNC_3(VAR_5, VAR_0);
 FUNC_12(VAR_5);
}
