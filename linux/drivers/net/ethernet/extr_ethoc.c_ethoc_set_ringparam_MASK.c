
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mem_start; int irq; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;
struct ethoc {scalar_t__ num_bd; scalar_t__ num_rx; int num_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ethoc*,int) ;
 int FUNC_1 (struct ethoc*) ;
 int FUNC_2 (struct ethoc*,int) ;
 int FUNC_3 (struct ethoc*) ;
 int FUNC_4 (struct ethoc*,int ) ;
 struct ethoc* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_3,
          struct ethtool_ringparam *VAR_4)
{
 struct ethoc *VAR_5 = FUNC_5(VAR_3);

 if (VAR_4->tx_pending < 1 || VAR_4->rx_pending < 1 ||
     VAR_4->tx_pending + VAR_4->rx_pending > VAR_5->num_bd)
  return -VAR_0;
 if (VAR_4->rx_mini_pending || VAR_4->rx_jumbo_pending)
  return -VAR_0;

 if (FUNC_6(VAR_3)) {
  FUNC_7(VAR_3);
  FUNC_1(VAR_5);
  FUNC_0(VAR_5, VAR_2 | VAR_1);
  FUNC_10(VAR_3->irq);
 }

 VAR_5->num_tx = FUNC_9(VAR_4->tx_pending);
 VAR_5->num_rx = VAR_4->rx_pending;
 FUNC_4(VAR_5, VAR_3->mem_start);

 if (FUNC_6(VAR_3)) {
  FUNC_2(VAR_5, VAR_2 | VAR_1);
  FUNC_3(VAR_5);
  FUNC_8(VAR_3);
 }
 return 0;
}
