
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int cur; } ;
struct jme_adapter {TYPE_1__ dpi; int flags; } ;
struct ethtool_coalesce {int use_adaptive_rx_coalesce; scalar_t__ rx_max_coalesced_frames; scalar_t__ rx_coalesce_usecs; int tx_max_coalesced_frames; int tx_coalesce_usecs; } ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct jme_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_9, struct ethtool_coalesce *VAR_10)
{
 struct jme_adapter *VAR_11 = FUNC_0(VAR_9);

 VAR_10->tx_coalesce_usecs = VAR_8;
 VAR_10->tx_max_coalesced_frames = VAR_7;

 if (FUNC_1(VAR_0, &VAR_11->flags)) {
  VAR_10->use_adaptive_rx_coalesce = 0;
  VAR_10->rx_coalesce_usecs = 0;
  VAR_10->rx_max_coalesced_frames = 0;
  return 0;
 }

 VAR_10->use_adaptive_rx_coalesce = 1;

 switch (VAR_11->dpi.cur) {
 case 130:
  VAR_10->rx_coalesce_usecs = VAR_2;
  VAR_10->rx_max_coalesced_frames = VAR_1;
  break;
 case 129:
  VAR_10->rx_coalesce_usecs = VAR_4;
  VAR_10->rx_max_coalesced_frames = VAR_3;
  break;
 case 128:
  VAR_10->rx_coalesce_usecs = VAR_6;
  VAR_10->rx_max_coalesced_frames = VAR_5;
  break;
 default:
  break;
 }

 return 0;
}
