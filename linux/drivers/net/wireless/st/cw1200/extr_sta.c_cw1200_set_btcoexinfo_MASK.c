
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wsm_override_internal_txrate {void* nonErpInternalTxRate; void* internalTxRate; } ;
struct TYPE_6__ {int operational_rate_set; } ;
struct TYPE_5__ {int basic_rate_set; } ;
struct cw1200_common {scalar_t__ mode; TYPE_3__ bss_params; TYPE_2__ association_mode; TYPE_1__* vif; } ;
typedef int arg ;
struct TYPE_4__ {int p2p; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct cw1200_common*) ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wsm_override_internal_txrate*,int ,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct cw1200_common*,int ,struct wsm_override_internal_txrate*,int) ;

__attribute__((used)) static int FUNC_8(struct cw1200_common *VAR_2)
{
 struct wsm_override_internal_txrate VAR_3;
 int VAR_4 = 0;

 if (VAR_2->mode == VAR_0) {

  FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  FUNC_3(VAR_2);
 } else {
  return 0;
 }

 FUNC_5(&VAR_3, 0, sizeof(struct wsm_override_internal_txrate));

 if (!VAR_2->vif->p2p) {

  if (VAR_2->bss_params.operational_rate_set & ~0xF) {
   FUNC_6("[STA] STA has ERP rates\n");

   VAR_3.internalTxRate = (FUNC_0(
   VAR_2->bss_params.operational_rate_set & ~0xF));
  } else {
   FUNC_6("[STA] STA has non ERP rates\n");

   VAR_3.internalTxRate = (FUNC_0(FUNC_4(VAR_2->association_mode.basic_rate_set)));
  }
  VAR_3.nonErpInternalTxRate = (FUNC_0(FUNC_4(VAR_2->association_mode.basic_rate_set)));
 } else {

  VAR_3.internalTxRate = (FUNC_0(VAR_2->bss_params.operational_rate_set & ~0xF));
  VAR_3.nonErpInternalTxRate = (FUNC_0(VAR_2->bss_params.operational_rate_set & ~0xF));
 }

 FUNC_6("[STA] BTCOEX_INFO MODE %d, internalTxRate : %x, nonErpInternalTxRate: %x\n",
   VAR_2->mode,
   VAR_3.internalTxRate,
   VAR_3.nonErpInternalTxRate);

 VAR_4 = FUNC_7(VAR_2, VAR_1,
       &VAR_3, sizeof(VAR_3));

 return VAR_4;
}
