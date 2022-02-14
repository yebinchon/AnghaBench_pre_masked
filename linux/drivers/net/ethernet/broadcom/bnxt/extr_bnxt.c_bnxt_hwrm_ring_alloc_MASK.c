
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct bnxt_ring_struct {size_t map_idx; size_t handle; size_t grp_idx; int fw_ring_id; } ;
struct bnxt_tx_ring_info {int tx_db; struct bnxt_ring_struct tx_ring_struct; struct bnxt_napi* bnapi; } ;
struct bnxt_rx_ring_info {int rx_prod; int rx_db; int rx_agg_prod; int rx_agg_db; struct bnxt_ring_struct rx_agg_ring_struct; struct bnxt_napi* bnapi; struct bnxt_ring_struct rx_ring_struct; } ;
struct bnxt_cp_ring_info {int cp_raw_cons; int cp_db; struct bnxt_ring_struct cp_ring_struct; struct bnxt_cp_ring_info** cp_ring_arr; } ;
struct bnxt_napi {size_t index; struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int flags; int cp_nr_rings; int tx_nr_rings; int rx_nr_rings; TYPE_2__* grp_info; struct bnxt_rx_ring_info* rx_ring; struct bnxt_tx_ring_info* tx_ring; int dev; TYPE_1__* irq_tbl; struct bnxt_napi** bnapi; } ;
struct TYPE_4__ {int agg_fw_ring_id; int rx_fw_ring_id; int cp_fw_ring_id; } ;
struct TYPE_3__ {unsigned int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct bnxt*,int *,int ) ;
 int FUNC_1 (struct bnxt*,int *,int ) ;
 int FUNC_2 (struct bnxt*,int *,int ) ;
 int FUNC_3 (struct bnxt*,int ) ;
 int FUNC_4 (struct bnxt*,int *,size_t,size_t,int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct bnxt*,struct bnxt_ring_struct*,size_t,size_t) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct bnxt *VAR_9)
{
 bool VAR_10 = !!(VAR_9->flags & VAR_0);
 int VAR_11, VAR_12 = 0;
 u32 VAR_13;

 if (VAR_9->flags & VAR_1)
  VAR_13 = VAR_6;
 else
  VAR_13 = VAR_5;
 for (VAR_11 = 0; VAR_11 < VAR_9->cp_nr_rings; VAR_11++) {
  struct bnxt_napi *VAR_14 = VAR_9->bnapi[VAR_11];
  struct bnxt_cp_ring_info *VAR_15 = &VAR_14->cp_ring;
  struct bnxt_ring_struct *VAR_16 = &VAR_15->cp_ring_struct;
  u32 VAR_17 = VAR_16->map_idx;
  unsigned int VAR_18;

  VAR_18 = VAR_9->irq_tbl[VAR_17].vector;
  FUNC_5(VAR_18);
  VAR_12 = FUNC_7(VAR_9, VAR_16, VAR_13, VAR_17);
  if (VAR_12) {
   FUNC_6(VAR_18);
   goto err_out;
  }
  FUNC_4(VAR_9, &VAR_15->cp_db, VAR_13, VAR_17, VAR_16->fw_ring_id);
  FUNC_1(VAR_9, &VAR_15->cp_db, VAR_15->cp_raw_cons);
  FUNC_6(VAR_18);
  VAR_9->grp_info[VAR_11].cp_fw_ring_id = VAR_16->fw_ring_id;

  if (!VAR_11) {
   VAR_12 = FUNC_3(VAR_9, VAR_16->fw_ring_id);
   if (VAR_12)
    FUNC_8(VAR_9->dev, "Failed to set async event completion ring.\n");
  }
 }

 VAR_13 = VAR_8;
 for (VAR_11 = 0; VAR_11 < VAR_9->tx_nr_rings; VAR_11++) {
  struct bnxt_tx_ring_info *VAR_19 = &VAR_9->tx_ring[VAR_11];
  struct bnxt_ring_struct *VAR_20;
  u32 VAR_21;

  if (VAR_9->flags & VAR_1) {
   struct bnxt_napi *VAR_22 = VAR_19->bnapi;
   struct bnxt_cp_ring_info *VAR_23, *VAR_24;
   u32 VAR_25 = VAR_5;

   VAR_23 = &VAR_22->cp_ring;
   VAR_24 = VAR_23->cp_ring_arr[VAR_3];
   VAR_20 = &VAR_24->cp_ring_struct;
   VAR_20->handle = VAR_3;
   VAR_21 = VAR_22->index;
   VAR_12 = FUNC_7(VAR_9, VAR_20, VAR_25, VAR_21);
   if (VAR_12)
    goto err_out;
   FUNC_4(VAR_9, &VAR_24->cp_db, VAR_25, VAR_21,
        VAR_20->fw_ring_id);
   FUNC_0(VAR_9, &VAR_24->cp_db, VAR_24->cp_raw_cons);
  }
  VAR_20 = &VAR_19->tx_ring_struct;
  VAR_21 = VAR_11;
  VAR_12 = FUNC_7(VAR_9, VAR_20, VAR_13, VAR_21);
  if (VAR_12)
   goto err_out;
  FUNC_4(VAR_9, &VAR_19->tx_db, VAR_13, VAR_21, VAR_20->fw_ring_id);
 }

 VAR_13 = VAR_7;
 for (VAR_11 = 0; VAR_11 < VAR_9->rx_nr_rings; VAR_11++) {
  struct bnxt_rx_ring_info *VAR_26 = &VAR_9->rx_ring[VAR_11];
  struct bnxt_ring_struct *VAR_27 = &VAR_26->rx_ring_struct;
  struct bnxt_napi *VAR_28 = VAR_26->bnapi;
  u32 VAR_29 = VAR_28->index;

  VAR_12 = FUNC_7(VAR_9, VAR_27, VAR_13, VAR_29);
  if (VAR_12)
   goto err_out;
  FUNC_4(VAR_9, &VAR_26->rx_db, VAR_13, VAR_29, VAR_27->fw_ring_id);

  if (!VAR_10)
   FUNC_2(VAR_9, &VAR_26->rx_db, VAR_26->rx_prod);
  VAR_9->grp_info[VAR_29].rx_fw_ring_id = VAR_27->fw_ring_id;
  if (VAR_9->flags & VAR_1) {
   struct bnxt_cp_ring_info *VAR_30 = &VAR_28->cp_ring;
   u32 VAR_31 = VAR_5;
   struct bnxt_cp_ring_info *VAR_32;

   VAR_32 = VAR_30->cp_ring_arr[VAR_2];
   VAR_27 = &VAR_32->cp_ring_struct;
   VAR_27->handle = VAR_2;
   VAR_12 = FUNC_7(VAR_9, VAR_27, VAR_31, VAR_29);
   if (VAR_12)
    goto err_out;
   FUNC_4(VAR_9, &VAR_32->cp_db, VAR_31, VAR_29,
        VAR_27->fw_ring_id);
   FUNC_0(VAR_9, &VAR_32->cp_db, VAR_32->cp_raw_cons);
  }
 }

 if (VAR_10) {
  VAR_13 = VAR_4;
  for (VAR_11 = 0; VAR_11 < VAR_9->rx_nr_rings; VAR_11++) {
   struct bnxt_rx_ring_info *VAR_33 = &VAR_9->rx_ring[VAR_11];
   struct bnxt_ring_struct *VAR_34 =
      &VAR_33->rx_agg_ring_struct;
   u32 VAR_35 = VAR_34->grp_idx;
   u32 VAR_36 = VAR_35 + VAR_9->rx_nr_rings;

   VAR_12 = FUNC_7(VAR_9, VAR_34, VAR_13, VAR_36);
   if (VAR_12)
    goto err_out;

   FUNC_4(VAR_9, &VAR_33->rx_agg_db, VAR_13, VAR_36,
        VAR_34->fw_ring_id);
   FUNC_2(VAR_9, &VAR_33->rx_agg_db, VAR_33->rx_agg_prod);
   FUNC_2(VAR_9, &VAR_33->rx_db, VAR_33->rx_prod);
   VAR_9->grp_info[VAR_35].agg_fw_ring_id = VAR_34->fw_ring_id;
  }
 }
err_out:
 return VAR_12;
}
