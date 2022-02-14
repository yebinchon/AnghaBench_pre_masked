
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ other_count; int tx_count; int rx_count; scalar_t__ max_combined; scalar_t__ max_other; void* max_tx; void* max_rx; } ;
struct bnx2 {int flags; int num_tx_rings; int num_rx_rings; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct bnx2* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4,
         struct ethtool_channels *VAR_5)
{
 struct bnx2 *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7 = 1;
 u32 VAR_8 = 1;

 if ((VAR_6->flags & VAR_0) && !VAR_3) {
  VAR_7 = VAR_1;
  VAR_8 = VAR_2;
 }

 VAR_5->max_rx = VAR_7;
 VAR_5->max_tx = VAR_8;
 VAR_5->max_other = 0;
 VAR_5->max_combined = 0;
 VAR_5->rx_count = VAR_6->num_rx_rings;
 VAR_5->tx_count = VAR_6->num_tx_rings;
 VAR_5->other_count = 0;
 VAR_5->combined_count = 0;
}
