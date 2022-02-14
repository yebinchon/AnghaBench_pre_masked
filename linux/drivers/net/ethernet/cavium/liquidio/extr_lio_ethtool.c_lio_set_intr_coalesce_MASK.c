
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct octeon_device {int chip_id; void* tx_max_coalesced_frames; void* rx_max_coalesced_frames; void* rx_coalesce_usecs; TYPE_5__* pci_dev; TYPE_4__** instr_queue; } ;
struct oct_intrmod_cfg {int rx_enable; int tx_enable; void* tx_frames; void* rx_usecs; void* rx_frames; int member_0; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {size_t num_txpciq; TYPE_2__* txpciq; } ;
struct lio {TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int fill_threshold; } ;
struct TYPE_6__ {size_t q_no; } ;
struct TYPE_7__ {TYPE_1__ s; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lio* FUNC_3 (struct net_device*) ;




 int FUNC_4 (int *,char*,int,int,int) ;
 int FUNC_5 (struct lio*,struct oct_intrmod_cfg*,struct ethtool_coalesce*) ;
 int FUNC_6 (struct lio*,struct oct_intrmod_cfg*,struct ethtool_coalesce*) ;
 int FUNC_7 (struct lio*,struct oct_intrmod_cfg*,struct ethtool_coalesce*) ;
 int FUNC_8 (struct lio*,struct oct_intrmod_cfg*,struct ethtool_coalesce*) ;
 int FUNC_9 (struct octeon_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3,
     struct ethtool_coalesce *VAR_4)
{
 struct lio *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;
 struct octeon_device *VAR_7 = VAR_5->oct_dev;
 struct oct_intrmod_cfg VAR_8 = {0};
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12;

 switch (VAR_7->chip_id) {
 case 128:
 case 129:
  VAR_12 = VAR_1;
  VAR_11 = VAR_0;
  if ((VAR_4->tx_max_coalesced_frames >= VAR_12) &&
      (VAR_4->tx_max_coalesced_frames <= VAR_11)) {
   for (VAR_9 = 0; VAR_9 < VAR_5->linfo.num_txpciq; VAR_9++) {
    VAR_10 = VAR_5->linfo.txpciq[VAR_9].s.q_no;
    VAR_7->instr_queue[VAR_10]->fill_threshold =
     VAR_4->tx_max_coalesced_frames;
   }
  } else {
   FUNC_4(&VAR_7->pci_dev->dev,
    "LIQUIDIO: Invalid tx-frames:%d. Range is min:%d max:%d\n",
    VAR_4->tx_max_coalesced_frames,
    VAR_12, VAR_11);
   return -VAR_2;
  }
  break;
 case 131:
 case 130:
  break;
 default:
  return -VAR_2;
 }

 VAR_8.rx_enable = VAR_4->use_adaptive_rx_coalesce ? 1 : 0;
 VAR_8.tx_enable = VAR_4->use_adaptive_tx_coalesce ? 1 : 0;
 VAR_8.rx_frames = FUNC_1(FUNC_9(VAR_7));
 VAR_8.rx_usecs = FUNC_2(FUNC_9(VAR_7));
 VAR_8.tx_frames = FUNC_0(FUNC_9(VAR_7));

 VAR_6 = FUNC_5(VAR_5, &VAR_8, VAR_4);

 if (!VAR_4->use_adaptive_rx_coalesce) {
  VAR_6 = FUNC_7(VAR_5, &VAR_8, VAR_4);
  if (VAR_6)
   goto ret_intrmod;

  VAR_6 = FUNC_6(VAR_5, &VAR_8, VAR_4);
  if (VAR_6)
   goto ret_intrmod;
 } else {
  VAR_7->rx_coalesce_usecs =
   FUNC_2(FUNC_9(VAR_7));
  VAR_7->rx_max_coalesced_frames =
   FUNC_1(FUNC_9(VAR_7));
 }

 if (!VAR_4->use_adaptive_tx_coalesce) {
  VAR_6 = FUNC_8(VAR_5, &VAR_8, VAR_4);
  if (VAR_6)
   goto ret_intrmod;
 } else {
  VAR_7->tx_max_coalesced_frames =
   FUNC_0(FUNC_9(VAR_7));
 }

 return 0;
ret_intrmod:
 return VAR_6;
}
