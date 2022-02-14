
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {scalar_t__ q_num_rx_buffers; scalar_t__ q_num_tx_buffers; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;


 int FUNC_0 (struct qede_dev*,int,char*,scalar_t__,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qede_dev*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_7,
         struct ethtool_ringparam *VAR_8)
{
 struct qede_dev *VAR_9 = FUNC_1(VAR_7);

 FUNC_0(VAR_9, (VAR_2 | VAR_1),
     "Set ring params command parameters: rx_pending = %d, tx_pending = %d\n",
     VAR_8->rx_pending, VAR_8->tx_pending);


 if (VAR_8->rx_pending > VAR_3 ||
     VAR_8->rx_pending < VAR_4 ||
     VAR_8->tx_pending > VAR_5 ||
     VAR_8->tx_pending < VAR_6) {
  FUNC_0(VAR_9, (VAR_2 | VAR_1),
      "Can only support Rx Buffer size [0%08x,...,0x%08x] and Tx Buffer size [0x%08x,...,0x%08x]\n",
      VAR_4, VAR_3,
      VAR_6, VAR_5);
  return -VAR_0;
 }


 VAR_9->q_num_rx_buffers = VAR_8->rx_pending;
 VAR_9->q_num_tx_buffers = VAR_8->tx_pending;

 FUNC_2(VAR_9, ((void*)0), 0);

 return 0;
}
