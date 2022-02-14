
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct hwrm_vnic_tpa_cfg_input {void* vnic_id; void* min_agg_len; void* max_aggs; void* max_agg_segs; void* enables; void* flags; int member_0; } ;
struct bnxt_vnic_info {scalar_t__ fw_vnic_id; } ;
struct bnxt {int flags; size_t max_tpa; TYPE_1__* dev; struct bnxt_vnic_info* vnic_info; } ;
typedef int req ;
struct TYPE_2__ {size_t mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int FUNC_0 (struct bnxt*,struct hwrm_vnic_tpa_cfg_input*,int ,int,int) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct bnxt*,struct hwrm_vnic_tpa_cfg_input*,int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_18, u16 VAR_19, u32 VAR_20)
{
 struct bnxt_vnic_info *VAR_21 = &VAR_18->vnic_info[VAR_19];
 u16 VAR_22 = VAR_17;
 struct hwrm_vnic_tpa_cfg_input VAR_23 = {0};

 if (VAR_21->fw_vnic_id == VAR_5)
  return 0;

 FUNC_0(VAR_18, &VAR_23, VAR_4, -1, -1);

 if (VAR_20) {
  u16 VAR_24 = VAR_18->dev->mtu - 40;
  u32 VAR_25, VAR_26, VAR_27 = 0, VAR_28;

  VAR_28 = VAR_16 |
   VAR_13 |
   VAR_15 |
   VAR_11 |
   VAR_12;
  if (VAR_20 & VAR_1)
   VAR_28 |= VAR_14;

  VAR_23.flags = FUNC_2(VAR_28);

  VAR_23.enables =
   FUNC_2(VAR_9 |
        VAR_8 |
        VAR_10);




  if (VAR_24 <= VAR_2) {
   VAR_26 = VAR_2 / VAR_24;
   VAR_25 = (VAR_6 - 1) * VAR_26;
  } else {
   VAR_26 = VAR_24 / VAR_2;
   if (VAR_24 & (VAR_2 - 1))
    VAR_26++;
   VAR_25 = (VAR_6 - VAR_26) / VAR_26;
  }

  if (VAR_18->flags & VAR_0) {
   VAR_27 = VAR_7;
   VAR_22 = VAR_18->max_tpa;
  } else {
   VAR_27 = FUNC_4(VAR_25);
  }
  VAR_23.max_agg_segs = FUNC_1(VAR_27);
  VAR_23.max_aggs = FUNC_1(VAR_22);

  VAR_23.min_agg_len = FUNC_2(512);
 }
 VAR_23.vnic_id = FUNC_1(VAR_21->fw_vnic_id);

 return FUNC_3(VAR_18, &VAR_23, sizeof(VAR_23), VAR_3);
}
