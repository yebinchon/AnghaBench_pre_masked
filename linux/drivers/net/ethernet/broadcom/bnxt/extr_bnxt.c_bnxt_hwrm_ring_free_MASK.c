
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bnxt_ring_struct {scalar_t__ fw_ring_id; } ;
struct bnxt_tx_ring_info {struct bnxt_ring_struct tx_ring_struct; } ;
struct bnxt_rx_ring_info {TYPE_1__* bnapi; struct bnxt_ring_struct rx_agg_ring_struct; struct bnxt_ring_struct rx_ring_struct; } ;
struct bnxt_cp_ring_info {struct bnxt_ring_struct cp_ring_struct; struct bnxt_cp_ring_info** cp_ring_arr; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int tx_nr_rings; int rx_nr_rings; int flags; int cp_nr_rings; TYPE_2__* grp_info; struct bnxt_napi** bnapi; struct bnxt_rx_ring_info* rx_ring; struct bnxt_tx_ring_info* tx_ring; } ;
struct TYPE_4__ {scalar_t__ cp_fw_ring_id; scalar_t__ agg_fw_ring_id; scalar_t__ rx_fw_ring_id; } ;
struct TYPE_3__ {scalar_t__ index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct bnxt*,struct bnxt_rx_ring_info*) ;
 scalar_t__ FUNC_1 (struct bnxt*,struct bnxt_tx_ring_info*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*,struct bnxt_ring_struct*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct bnxt *VAR_7, bool VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 if (!VAR_7->bnapi)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_7->tx_nr_rings; VAR_10++) {
  struct bnxt_tx_ring_info *VAR_11 = &VAR_7->tx_ring[VAR_10];
  struct bnxt_ring_struct *VAR_12 = &VAR_11->tx_ring_struct;

  if (VAR_12->fw_ring_id != VAR_1) {
   u32 VAR_13 = FUNC_1(VAR_7, VAR_11);

   FUNC_3(VAR_7, VAR_12,
      VAR_6,
      VAR_8 ? VAR_13 :
      VAR_1);
   VAR_12->fw_ring_id = VAR_1;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->rx_nr_rings; VAR_10++) {
  struct bnxt_rx_ring_info *VAR_14 = &VAR_7->rx_ring[VAR_10];
  struct bnxt_ring_struct *VAR_15 = &VAR_14->rx_ring_struct;
  u32 VAR_16 = VAR_14->bnapi->index;

  if (VAR_15->fw_ring_id != VAR_1) {
   u32 VAR_17 = FUNC_0(VAR_7, VAR_14);

   FUNC_3(VAR_7, VAR_15,
      VAR_4,
      VAR_8 ? VAR_17 :
      VAR_1);
   VAR_15->fw_ring_id = VAR_1;
   VAR_7->grp_info[VAR_16].rx_fw_ring_id =
    VAR_1;
  }
 }

 if (VAR_7->flags & VAR_0)
  VAR_9 = VAR_5;
 else
  VAR_9 = VAR_4;
 for (VAR_10 = 0; VAR_10 < VAR_7->rx_nr_rings; VAR_10++) {
  struct bnxt_rx_ring_info *VAR_18 = &VAR_7->rx_ring[VAR_10];
  struct bnxt_ring_struct *VAR_19 = &VAR_18->rx_agg_ring_struct;
  u32 VAR_20 = VAR_18->bnapi->index;

  if (VAR_19->fw_ring_id != VAR_1) {
   u32 VAR_21 = FUNC_0(VAR_7, VAR_18);

   FUNC_3(VAR_7, VAR_19, VAR_9,
      VAR_8 ? VAR_21 :
      VAR_1);
   VAR_19->fw_ring_id = VAR_1;
   VAR_7->grp_info[VAR_20].agg_fw_ring_id =
    VAR_1;
  }
 }





 FUNC_2(VAR_7);

 if (VAR_7->flags & VAR_0)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_2;
 for (VAR_10 = 0; VAR_10 < VAR_7->cp_nr_rings; VAR_10++) {
  struct bnxt_napi *VAR_22 = VAR_7->bnapi[VAR_10];
  struct bnxt_cp_ring_info *VAR_23 = &VAR_22->cp_ring;
  struct bnxt_ring_struct *VAR_24;
  int VAR_25;

  for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
   struct bnxt_cp_ring_info *VAR_26 = VAR_23->cp_ring_arr[VAR_25];

   if (VAR_26) {
    VAR_24 = &VAR_26->cp_ring_struct;
    if (VAR_24->fw_ring_id == VAR_1)
     continue;
    FUNC_3(VAR_7, VAR_24,
     VAR_2,
     VAR_1);
    VAR_24->fw_ring_id = VAR_1;
   }
  }
  VAR_24 = &VAR_23->cp_ring_struct;
  if (VAR_24->fw_ring_id != VAR_1) {
   FUNC_3(VAR_7, VAR_24, VAR_9,
      VAR_1);
   VAR_24->fw_ring_id = VAR_1;
   VAR_7->grp_info[VAR_10].cp_fw_ring_id = VAR_1;
  }
 }
}
