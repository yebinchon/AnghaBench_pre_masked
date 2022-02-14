
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct bnxt_cp_ring_info {TYPE_1__* hw_stats; scalar_t__ missed_irqs; scalar_t__ rx_l4_csum_errors; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {size_t cp_nr_rings; int flags; size_t fw_rx_stats_ext_size; size_t fw_tx_stats_ext_size; long* pri2cos; scalar_t__ hw_pcie_stats; scalar_t__ pri2cos_valid; scalar_t__ hw_tx_port_stats_ext; scalar_t__ hw_rx_port_stats_ext; scalar_t__ hw_rx_port_stats; struct bnxt_napi** bnapi; } ;
typedef int __le64 ;
struct TYPE_20__ {int offset; } ;
struct TYPE_19__ {int offset; } ;
struct TYPE_18__ {long base_off; } ;
struct TYPE_17__ {long base_off; } ;
struct TYPE_16__ {scalar_t__ counter; } ;
struct TYPE_15__ {long base_off; } ;
struct TYPE_14__ {long base_off; } ;
struct TYPE_13__ {int offset; } ;
struct TYPE_12__ {int tx_discard_pkts; int rx_discard_pkts; } ;
struct TYPE_11__ {int offset; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 size_t FUNC_2 (struct bnxt*) ;
 TYPE_10__* VAR_8 ;
 TYPE_9__* VAR_9 ;
 TYPE_8__* VAR_10 ;
 int VAR_11 ;
 TYPE_7__* VAR_12 ;
 TYPE_6__* VAR_13 ;
 TYPE_5__* VAR_14 ;
 TYPE_4__* VAR_15 ;
 TYPE_3__* VAR_16 ;
 TYPE_2__* VAR_17 ;
 scalar_t__ FUNC_3 (int ) ;
 struct bnxt* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_18,
       struct ethtool_stats *VAR_19, u64 *VAR_20)
{
 u32 VAR_21, VAR_22 = 0;
 struct bnxt *VAR_23 = FUNC_4(VAR_18);
 u32 VAR_24 = FUNC_0(VAR_11) +
     FUNC_2(VAR_23);

 if (!VAR_23->bnapi) {
  VAR_22 += FUNC_1(VAR_23) + VAR_5;
  goto skip_ring_stats;
 }

 for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++)
  VAR_14[VAR_21].counter = 0;

 for (VAR_21 = 0; VAR_21 < VAR_23->cp_nr_rings; VAR_21++) {
  struct bnxt_napi *VAR_25 = VAR_23->bnapi[VAR_21];
  struct bnxt_cp_ring_info *VAR_26 = &VAR_25->cp_ring;
  __le64 *VAR_27 = (__le64 *)VAR_26->hw_stats;
  int VAR_28;

  for (VAR_28 = 0; VAR_28 < VAR_24; VAR_22++, VAR_28++)
   VAR_20[VAR_22] = FUNC_3(VAR_27[VAR_28]);
  VAR_20[VAR_22++] = VAR_26->rx_l4_csum_errors;
  VAR_20[VAR_22++] = VAR_26->missed_irqs;

  VAR_14[VAR_6].counter +=
   FUNC_3(VAR_26->hw_stats->rx_discard_pkts);
  VAR_14[VAR_7].counter +=
   FUNC_3(VAR_26->hw_stats->tx_discard_pkts);
 }

 for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++, VAR_22++)
  VAR_20[VAR_22] = VAR_14[VAR_21].counter;

skip_ring_stats:
 if (VAR_23->flags & VAR_1) {
  __le64 *VAR_29 = (__le64 *)VAR_23->hw_rx_port_stats;

  for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++, VAR_22++) {
   VAR_20[VAR_22] = FUNC_3(*(VAR_29 +
            VAR_9[VAR_21].offset));
  }
 }
 if (VAR_23->flags & VAR_2) {
  __le64 *VAR_30 = (__le64 *)VAR_23->hw_rx_port_stats_ext;
  __le64 *VAR_31 = (__le64 *)VAR_23->hw_tx_port_stats_ext;

  for (VAR_21 = 0; VAR_21 < VAR_23->fw_rx_stats_ext_size; VAR_21++, VAR_22++) {
   VAR_20[VAR_22] = FUNC_3(*(VAR_30 +
         VAR_10[VAR_21].offset));
  }
  for (VAR_21 = 0; VAR_21 < VAR_23->fw_tx_stats_ext_size; VAR_21++, VAR_22++) {
   VAR_20[VAR_22] = FUNC_3(*(VAR_31 +
     VAR_17[VAR_21].offset));
  }
  if (VAR_23->pri2cos_valid) {
   for (VAR_21 = 0; VAR_21 < 8; VAR_21++, VAR_22++) {
    long VAR_32 = VAR_12[VAR_21].base_off +
      VAR_23->pri2cos[VAR_21];

    VAR_20[VAR_22] = FUNC_3(*(VAR_30 + VAR_32));
   }
   for (VAR_21 = 0; VAR_21 < 8; VAR_21++, VAR_22++) {
    long VAR_33 = VAR_13[VAR_21].base_off +
      VAR_23->pri2cos[VAR_21];

    VAR_20[VAR_22] = FUNC_3(*(VAR_30 + VAR_33));
   }
   for (VAR_21 = 0; VAR_21 < 8; VAR_21++, VAR_22++) {
    long VAR_34 = VAR_15[VAR_21].base_off +
      VAR_23->pri2cos[VAR_21];

    VAR_20[VAR_22] = FUNC_3(*(VAR_31 + VAR_34));
   }
   for (VAR_21 = 0; VAR_21 < 8; VAR_21++, VAR_22++) {
    long VAR_35 = VAR_16[VAR_21].base_off +
      VAR_23->pri2cos[VAR_21];

    VAR_20[VAR_22] = FUNC_3(*(VAR_31 + VAR_35));
   }
  }
 }
 if (VAR_23->flags & VAR_0) {
  __le64 *VAR_36 = (__le64 *)VAR_23->hw_pcie_stats;

  for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++, VAR_22++) {
   VAR_20[VAR_22] = FUNC_3(*(VAR_36 +
            VAR_8[VAR_21].offset));
  }
 }
}
