
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {scalar_t__ fp_num_rx; scalar_t__ fp_num_tx; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ rx_count; scalar_t__ tx_count; scalar_t__ combined_count; void* max_tx; void* max_rx; void* max_combined; } ;


 void* FUNC_0 (struct qede_dev*) ;
 scalar_t__ FUNC_1 (struct qede_dev*) ;
 struct qede_dev* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
         struct ethtool_channels *VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_2(VAR_0);

 VAR_1->max_combined = FUNC_0(VAR_2);
 VAR_1->max_rx = FUNC_0(VAR_2);
 VAR_1->max_tx = FUNC_0(VAR_2);
 VAR_1->combined_count = FUNC_1(VAR_2) - VAR_2->fp_num_tx -
     VAR_2->fp_num_rx;
 VAR_1->tx_count = VAR_2->fp_num_tx;
 VAR_1->rx_count = VAR_2->fp_num_rx;
}
