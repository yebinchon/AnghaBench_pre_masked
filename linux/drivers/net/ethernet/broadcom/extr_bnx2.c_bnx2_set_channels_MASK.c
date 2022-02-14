
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ rx_count; scalar_t__ tx_count; } ;
struct bnx2 {int flags; scalar_t__ num_req_rx_rings; scalar_t__ num_req_tx_rings; int tx_ring_size; int rx_ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bnx2*,int ,int ,int) ;
 int VAR_4 ;
 struct bnx2* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
         struct ethtool_channels *VAR_6)
{
 struct bnx2 *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8 = 1;
 u32 VAR_9 = 1;
 int VAR_10 = 0;

 if ((VAR_7->flags & VAR_0) && !VAR_4) {
  VAR_8 = VAR_2;
  VAR_9 = VAR_3;
 }
 if (VAR_6->rx_count > VAR_8 ||
     VAR_6->tx_count > VAR_9)
  return -VAR_1;

 VAR_7->num_req_rx_rings = VAR_6->rx_count;
 VAR_7->num_req_tx_rings = VAR_6->tx_count;

 if (FUNC_2(VAR_5))
  VAR_10 = FUNC_0(VAR_7, VAR_7->rx_ring_size,
        VAR_7->tx_ring_size, 1);

 return VAR_10;
}
