
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_8__ {TYPE_3__* app_pri_tbl; int enabled; int tc_supported; int default_pri; } ;
struct TYPE_6__ {int enabled; int pfc_caps; int pri_en_bitmap; } ;
struct TYPE_5__ {int pri_pg_tbl; int pg_bw_tbl; int enabled; } ;
struct dcbx_features {TYPE_4__ app; TYPE_2__ pfc; TYPE_1__ ets; } ;
struct bnx2x {int dummy; } ;
struct TYPE_7__ {int appBitfield; int pri_bitmap; int app_id; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char*,size_t,...) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_5,
           struct dcbx_features *VAR_6,
           u32 VAR_7)
{
 u8 VAR_8 = 0;
 FUNC_2(VAR_4, "local_mib.error %x\n", VAR_7);


 FUNC_2(VAR_4,
    "local_mib.features.ets.enabled %x\n", VAR_6->ets.enabled);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_2(VAR_4,
     "local_mib.features.ets.pg_bw_tbl[%d] %d\n", VAR_8,
     FUNC_0(VAR_6->ets.pg_bw_tbl, VAR_8));
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_2(VAR_4,
     "local_mib.features.ets.pri_pg_tbl[%d] %d\n", VAR_8,
     FUNC_1(VAR_6->ets.pri_pg_tbl, VAR_8));


 FUNC_2(VAR_0, "dcbx_features.pfc.pri_en_bitmap %x\n",
     VAR_6->pfc.pri_en_bitmap);
 FUNC_2(VAR_0, "dcbx_features.pfc.pfc_caps %x\n",
     VAR_6->pfc.pfc_caps);
 FUNC_2(VAR_0, "dcbx_features.pfc.enabled %x\n",
     VAR_6->pfc.enabled);

 FUNC_2(VAR_0, "dcbx_features.app.default_pri %x\n",
     VAR_6->app.default_pri);
 FUNC_2(VAR_0, "dcbx_features.app.tc_supported %x\n",
     VAR_6->app.tc_supported);
 FUNC_2(VAR_0, "dcbx_features.app.enabled %x\n",
     VAR_6->app.enabled);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  FUNC_2(VAR_0,
     "dcbx_features.app.app_pri_tbl[%x].app_id %x\n",
     VAR_8, VAR_6->app.app_pri_tbl[VAR_8].app_id);
  FUNC_2(VAR_0,
     "dcbx_features.app.app_pri_tbl[%x].pri_bitmap %x\n",
     VAR_8, VAR_6->app.app_pri_tbl[VAR_8].pri_bitmap);
  FUNC_2(VAR_0,
     "dcbx_features.app.app_pri_tbl[%x].appBitfield %x\n",
     VAR_8, VAR_6->app.app_pri_tbl[VAR_8].appBitfield);
 }
}
