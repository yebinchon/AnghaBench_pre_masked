
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
struct TYPE_8__ {void* default_pri; TYPE_3__* app_pri_tbl; } ;
struct TYPE_6__ {void* pri_en_bitmap; void* enabled; } ;
struct TYPE_5__ {int pri_pg_tbl; int pg_bw_tbl; void* enabled; } ;
struct dcbx_features {TYPE_4__ app; TYPE_2__ pfc; TYPE_1__ ets; } ;
struct lldp_admin_mib {int ver_cfg_flags; struct dcbx_features features; } ;
struct bnx2x_config_dcbx_params {scalar_t__ overwrite_settings; int admin_dcbx_version; scalar_t__ admin_default_priority; struct bnx2x_admin_priority_app_table* admin_priority_app_table; scalar_t__ admin_pfc_bitmap; scalar_t__* admin_configuration_ets_pg; scalar_t__* admin_configuration_bw_precentage; scalar_t__ admin_app_priority_willing; scalar_t__ admin_pfc_willing; scalar_t__ admin_ets_willing; scalar_t__ admin_application_priority_tx_enable; scalar_t__ admin_pfc_tx_enable; scalar_t__ admin_ets_configuration_tx_enable; scalar_t__ admin_pfc_enable; scalar_t__ admin_ets_enable; } ;
struct bnx2x_admin_priority_app_table {scalar_t__ app_id; scalar_t__ traffic_type; int priority; scalar_t__ valid; } ;
struct bnx2x {scalar_t__ dcbx_enabled; struct bnx2x_config_dcbx_params dcbx_config_params; } ;
struct TYPE_7__ {scalar_t__ app_id; int appBitfield; void* pri_bitmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t,void*) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,size_t,void*) ;
 int FUNC_4 (int ,char*,size_t,int ) ;
 scalar_t__ VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t FUNC_5 (struct bnx2x*) ;
 size_t VAR_21 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_8 (struct bnx2x*,size_t*,size_t,int) ;
 int FUNC_9 (struct bnx2x*,size_t*,size_t,int) ;
 int FUNC_10 (struct lldp_admin_mib*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct bnx2x *VAR_25,
    u32 VAR_26)
{
 struct lldp_admin_mib VAR_27;
 u32 VAR_28, VAR_29 = VAR_21, VAR_30 = 0;
 u32 VAR_31 = VAR_26 + FUNC_5(VAR_25);


 struct dcbx_features *VAR_32 = &VAR_27.features;
 struct bnx2x_config_dcbx_params *VAR_33 = &VAR_25->dcbx_config_params;

 FUNC_10(&VAR_27, 0, sizeof(struct lldp_admin_mib));


 FUNC_8(VAR_25, (u32 *)&VAR_27, VAR_31,
   sizeof(struct lldp_admin_mib));

 if (VAR_25->dcbx_enabled == VAR_0)
  FUNC_7(VAR_27.ver_cfg_flags, VAR_11);
 else
  FUNC_6(VAR_27.ver_cfg_flags, VAR_11);

 if (VAR_33->overwrite_settings == VAR_1) {

  FUNC_6(VAR_27.ver_cfg_flags, VAR_8);
  VAR_27.ver_cfg_flags |=
   (VAR_33->admin_dcbx_version << VAR_9) &
    VAR_8;

  VAR_32->ets.enabled = (u8)VAR_33->admin_ets_enable;

  VAR_32->pfc.enabled = (u8)VAR_33->admin_pfc_enable;


  if (VAR_33->admin_ets_configuration_tx_enable)
   FUNC_7(VAR_27.ver_cfg_flags,
      VAR_12);
  else
   FUNC_6(VAR_27.ver_cfg_flags,
        VAR_12);

  if (VAR_33->admin_pfc_tx_enable)
   FUNC_7(VAR_27.ver_cfg_flags,
      VAR_16);
  else
   FUNC_6(VAR_27.ver_cfg_flags,
      VAR_16);

  if (VAR_33->admin_application_priority_tx_enable)
   FUNC_7(VAR_27.ver_cfg_flags,
      VAR_3);
  else
   FUNC_6(VAR_27.ver_cfg_flags,
      VAR_3);

  if (VAR_33->admin_ets_willing)
   FUNC_7(VAR_27.ver_cfg_flags, VAR_13);
  else
   FUNC_6(VAR_27.ver_cfg_flags, VAR_13);

  if (VAR_33->admin_pfc_willing)
   FUNC_7(VAR_27.ver_cfg_flags, VAR_17);
  else
   FUNC_6(VAR_27.ver_cfg_flags, VAR_17);

  if (VAR_33->admin_app_priority_willing)
   FUNC_7(VAR_27.ver_cfg_flags, VAR_7);
  else
   FUNC_6(VAR_27.ver_cfg_flags, VAR_7);

  for (VAR_28 = 0 ; VAR_28 < VAR_14; VAR_28++) {
   FUNC_1(VAR_32->ets.pg_bw_tbl, VAR_28,
    (u8)VAR_33->admin_configuration_bw_precentage[VAR_28]);

   FUNC_4(VAR_2, "pg_bw_tbl[%d] = %02x\n",
      VAR_28, FUNC_0(VAR_32->ets.pg_bw_tbl, VAR_28));
  }

  for (VAR_28 = 0; VAR_28 < VAR_15; VAR_28++) {
   FUNC_3(VAR_32->ets.pri_pg_tbl, VAR_28,
     (u8)VAR_33->admin_configuration_ets_pg[VAR_28]);

   FUNC_4(VAR_2, "pri_pg_tbl[%d] = %02x\n",
      VAR_28, FUNC_2(VAR_32->ets.pri_pg_tbl, VAR_28));
  }



  VAR_32->pfc.pri_en_bitmap = (u8)VAR_33->admin_pfc_bitmap;
  for (VAR_28 = 0; VAR_28 < VAR_10; VAR_28++) {
   if (VAR_33->admin_priority_app_table[VAR_28].valid) {
    struct bnx2x_admin_priority_app_table *VAR_34 =
     VAR_33->admin_priority_app_table;
    if ((VAR_18 == VAR_34[VAR_28].app_id) &&
       (VAR_23 == VAR_34[VAR_28].traffic_type))
     VAR_30 = VAR_19;
    else if ((VAR_22 == VAR_34[VAR_28].app_id) &&
       (VAR_24 == VAR_34[VAR_28].traffic_type))
     VAR_30 = VAR_20;
    else
     VAR_30 = VAR_29++;

    VAR_32->app.app_pri_tbl[VAR_30].app_id =
     VAR_34[VAR_28].app_id;

    VAR_32->app.app_pri_tbl[VAR_30].pri_bitmap =
     (u8)(1 << VAR_34[VAR_28].priority);

    VAR_32->app.app_pri_tbl[VAR_30].appBitfield =
        (VAR_4);

    VAR_32->app.app_pri_tbl[VAR_30].appBitfield |=
       (VAR_23 == VAR_34[VAR_28].traffic_type) ?
     VAR_5 : VAR_6;
   }
  }

  VAR_32->app.default_pri = (u8)VAR_33->admin_default_priority;
 }


 FUNC_9(VAR_25, (u32 *)&VAR_27, VAR_31,
    sizeof(struct lldp_admin_mib));
}
