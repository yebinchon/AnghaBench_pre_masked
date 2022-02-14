
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int confVer; int confPA; int confLen; } ;
union Vmxnet3_CmdInfo {TYPE_5__ varConf; } ;
typedef scalar_t__ u32 ;
struct vmxnet3_adapter {int default_coal_mode; int cmd_lock; int coal_conf_pa; TYPE_6__* coal_conf; struct Vmxnet3_DriverShared* shared; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ rx_coalesce_usecs; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ tx_max_coalesced_frames; scalar_t__ rx_max_coalesced_frames; scalar_t__ rate_sample_interval; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ tx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; } ;
struct TYPE_7__ {union Vmxnet3_CmdInfo cmdInfo; } ;
struct Vmxnet3_DriverShared {TYPE_1__ cu; } ;
struct TYPE_9__ {void* tx_depth; void* rx_depth; void* tx_comp_depth; } ;
struct TYPE_8__ {scalar_t__ rbc_rate; } ;
struct TYPE_10__ {TYPE_3__ coalStatic; TYPE_2__ coalRbc; } ;
struct TYPE_12__ {TYPE_4__ coalPara; int coalMode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct vmxnet3_adapter*) ;
 int FUNC_2 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;
 struct vmxnet3_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_10(struct net_device *VAR_12, struct ethtool_coalesce *VAR_13)
{
 struct vmxnet3_adapter *VAR_14 = FUNC_6(VAR_12);
 struct Vmxnet3_DriverShared *VAR_15 = VAR_14->shared;
 union Vmxnet3_CmdInfo *VAR_16 = &VAR_15->cu.cmdInfo;
 unsigned long VAR_17;

 if (!FUNC_1(VAR_14))
  return -VAR_1;

 if (VAR_13->rx_coalesce_usecs_irq ||
     VAR_13->rx_max_coalesced_frames_irq ||
     VAR_13->tx_coalesce_usecs ||
     VAR_13->tx_coalesce_usecs_irq ||
     VAR_13->tx_max_coalesced_frames_irq ||
     VAR_13->stats_block_coalesce_usecs ||
     VAR_13->use_adaptive_tx_coalesce ||
     VAR_13->pkt_rate_low ||
     VAR_13->rx_coalesce_usecs_low ||
     VAR_13->rx_max_coalesced_frames_low ||
     VAR_13->tx_coalesce_usecs_low ||
     VAR_13->tx_max_coalesced_frames_low ||
     VAR_13->pkt_rate_high ||
     VAR_13->rx_coalesce_usecs_high ||
     VAR_13->rx_max_coalesced_frames_high ||
     VAR_13->tx_coalesce_usecs_high ||
     VAR_13->tx_max_coalesced_frames_high ||
     VAR_13->rate_sample_interval) {
  return -VAR_0;
 }

 if ((VAR_13->rx_coalesce_usecs == 0) &&
     (VAR_13->use_adaptive_rx_coalesce == 0) &&
     (VAR_13->tx_max_coalesced_frames == 0) &&
     (VAR_13->rx_max_coalesced_frames == 0)) {
  FUNC_5(VAR_14->coal_conf, 0, sizeof(*VAR_14->coal_conf));
  VAR_14->coal_conf->coalMode = VAR_4;
  goto done;
 }

 if (VAR_13->rx_coalesce_usecs != 0) {
  u32 VAR_18;

  if ((VAR_13->use_adaptive_rx_coalesce != 0) ||
      (VAR_13->tx_max_coalesced_frames != 0) ||
      (VAR_13->rx_max_coalesced_frames != 0)) {
   return -VAR_0;
  }

  VAR_18 = FUNC_0(VAR_13->rx_coalesce_usecs);
  if (VAR_18 < VAR_8 ||
      VAR_18 > VAR_7) {
   return -VAR_0;
  }

  FUNC_5(VAR_14->coal_conf, 0, sizeof(*VAR_14->coal_conf));
  VAR_14->coal_conf->coalMode = VAR_5;
  VAR_14->coal_conf->coalPara.coalRbc.rbc_rate = VAR_18;
  goto done;
 }

 if (VAR_13->use_adaptive_rx_coalesce != 0) {
  if ((VAR_13->rx_coalesce_usecs != 0) ||
      (VAR_13->tx_max_coalesced_frames != 0) ||
      (VAR_13->rx_max_coalesced_frames != 0)) {
   return -VAR_0;
  }
  FUNC_5(VAR_14->coal_conf, 0, sizeof(*VAR_14->coal_conf));
  VAR_14->coal_conf->coalMode = VAR_3;
  goto done;
 }

 if ((VAR_13->tx_max_coalesced_frames != 0) ||
     (VAR_13->rx_max_coalesced_frames != 0)) {
  if ((VAR_13->rx_coalesce_usecs != 0) ||
      (VAR_13->use_adaptive_rx_coalesce != 0)) {
   return -VAR_0;
  }

  if ((VAR_13->tx_max_coalesced_frames >
      VAR_10) ||
      (VAR_13->rx_max_coalesced_frames >
       VAR_10)) {
   return -VAR_0;
  }

  FUNC_5(VAR_14->coal_conf, 0, sizeof(*VAR_14->coal_conf));
  VAR_14->coal_conf->coalMode = VAR_6;

  VAR_14->coal_conf->coalPara.coalStatic.tx_comp_depth =
   (VAR_13->tx_max_coalesced_frames ?
    VAR_13->tx_max_coalesced_frames :
    VAR_9);

  VAR_14->coal_conf->coalPara.coalStatic.rx_depth =
   (VAR_13->rx_max_coalesced_frames ?
    VAR_13->rx_max_coalesced_frames :
    VAR_9);

  VAR_14->coal_conf->coalPara.coalStatic.tx_depth =
    VAR_9;
  goto done;
 }

done:
 VAR_14->default_coal_mode = 0;
 if (FUNC_7(VAR_12)) {
  FUNC_8(&VAR_14->cmd_lock, VAR_17);
  VAR_16->varConf.confVer = 1;
  VAR_16->varConf.confLen =
   FUNC_3(sizeof(*VAR_14->coal_conf));
  VAR_16->varConf.confPA = FUNC_4(VAR_14->coal_conf_pa);
  FUNC_2(VAR_14, VAR_11,
           VAR_2);
  FUNC_9(&VAR_14->cmd_lock, VAR_17);
 }

 return 0;
}
