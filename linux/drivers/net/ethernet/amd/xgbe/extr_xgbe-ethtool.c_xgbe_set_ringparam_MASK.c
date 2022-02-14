
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int rx_desc_count; unsigned int tx_desc_count; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {unsigned int rx_pending; unsigned int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 int FUNC_2 (struct net_device*,char*,unsigned int) ;
 struct xgbe_prv_data* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
         struct ethtool_ringparam *VAR_6)
{
 struct xgbe_prv_data *VAR_7 = FUNC_3(VAR_5);
 unsigned int VAR_8, VAR_9;

 if (VAR_6->rx_mini_pending || VAR_6->rx_jumbo_pending) {
  FUNC_1(VAR_5, "unsupported ring parameter\n");
  return -VAR_0;
 }

 if ((VAR_6->rx_pending < VAR_2) ||
     (VAR_6->rx_pending > VAR_1)) {
  FUNC_1(VAR_5,
      "rx ring parameter must be between %u and %u\n",
      VAR_2, VAR_1);
  return -VAR_0;
 }

 if ((VAR_6->tx_pending < VAR_4) ||
     (VAR_6->tx_pending > VAR_3)) {
  FUNC_1(VAR_5,
      "tx ring parameter must be between %u and %u\n",
      VAR_4, VAR_3);
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_6->rx_pending);
 if (VAR_8 != VAR_6->rx_pending)
  FUNC_2(VAR_5,
         "rx ring parameter rounded to power of two: %u\n",
         VAR_8);

 VAR_9 = FUNC_0(VAR_6->tx_pending);
 if (VAR_9 != VAR_6->tx_pending)
  FUNC_2(VAR_5,
         "tx ring parameter rounded to power of two: %u\n",
         VAR_9);

 if ((VAR_8 == VAR_7->rx_desc_count) &&
     (VAR_9 == VAR_7->tx_desc_count))
  goto out;

 VAR_7->rx_desc_count = VAR_8;
 VAR_7->tx_desc_count = VAR_9;

 FUNC_4(VAR_7);

out:
 return 0;
}
