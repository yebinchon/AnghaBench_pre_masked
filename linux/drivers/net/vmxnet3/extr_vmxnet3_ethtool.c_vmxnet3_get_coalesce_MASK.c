
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vmxnet3_adapter {TYPE_4__* coal_conf; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int use_adaptive_rx_coalesce; int rx_coalesce_usecs; int rx_max_coalesced_frames; int tx_max_coalesced_frames; } ;
struct TYPE_6__ {int rbc_rate; } ;
struct TYPE_5__ {int rx_depth; int tx_comp_depth; } ;
struct TYPE_7__ {TYPE_2__ coalRbc; TYPE_1__ coalStatic; } ;
struct TYPE_8__ {int coalMode; TYPE_3__ coalPara; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct vmxnet3_adapter*) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_1, struct ethtool_coalesce *VAR_2)
{
 struct vmxnet3_adapter *VAR_3 = FUNC_2(VAR_1);

 if (!FUNC_1(VAR_3))
  return -VAR_0;

 switch (VAR_3->coal_conf->coalMode) {
 case 130:

  break;
 case 131:
  VAR_2->use_adaptive_rx_coalesce = 1;
  break;
 case 128:
  VAR_2->tx_max_coalesced_frames =
   VAR_3->coal_conf->coalPara.coalStatic.tx_comp_depth;
  VAR_2->rx_max_coalesced_frames =
   VAR_3->coal_conf->coalPara.coalStatic.rx_depth;
  break;
 case 129: {
  u32 VAR_4;

  VAR_4 = VAR_3->coal_conf->coalPara.coalRbc.rbc_rate;
  VAR_2->rx_coalesce_usecs = FUNC_0(VAR_4);
 }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
