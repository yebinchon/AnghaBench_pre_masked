
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct dcbx_pfc_feature {int pri_en_bitmap; scalar_t__ enabled; } ;
struct TYPE_5__ {int enabled; int priority_non_pauseable_mask; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_6__ {TYPE_2__ pfc; TYPE_1__ app; } ;
struct bnx2x {TYPE_3__ dcbx_port_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_4,
     struct dcbx_pfc_feature *VAR_5, u32 VAR_6)
{
 if (FUNC_1(VAR_6, VAR_1))
  FUNC_0(VAR_0, "DCBX_LOCAL_PFC_ERROR\n");

 if (FUNC_1(VAR_6, VAR_3))
  FUNC_0(VAR_0, "DCBX_REMOTE_PFC_TLV_NOT_FOUND\n");
 if (VAR_4->dcbx_port_params.app.enabled && VAR_5->enabled &&
    !FUNC_1(VAR_6, VAR_1 | VAR_2 |
        VAR_3)) {
  VAR_4->dcbx_port_params.pfc.enabled = 1;
  VAR_4->dcbx_port_params.pfc.priority_non_pauseable_mask =
   ~(VAR_5->pri_en_bitmap);
 } else {
  FUNC_0(VAR_0, "DCBX_LOCAL_PFC_DISABLED\n");
  VAR_4->dcbx_port_params.pfc.enabled = 0;
  VAR_4->dcbx_port_params.pfc.priority_non_pauseable_mask = 0;
 }
}
