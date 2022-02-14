
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_mvm_phy_ctxt {int color; int id; TYPE_2__* channel; } ;
struct iwl_mvm_iface_iterator_data {int idx; int * colors; int * ids; struct iwl_mvm_phy_ctxt* phyctxt; } ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct iwl_binding_cmd {void** macs; void* phy; void* action; void* id_and_color; void* lmac_id; } ;
typedef int cmd ;
struct TYPE_4__ {scalar_t__ band; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_mvm*,char*,scalar_t__,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int ,int,struct iwl_binding_cmd*,scalar_t__*) ;
 int FUNC_6 (struct iwl_binding_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_9, u32 VAR_10,
          struct iwl_mvm_iface_iterator_data *VAR_11)
{
 struct iwl_binding_cmd VAR_12;
 struct iwl_mvm_phy_ctxt *VAR_13 = VAR_11->phyctxt;
 int VAR_14, VAR_15;
 u32 VAR_16;
 int VAR_17;

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));

 if (FUNC_3(&VAR_9->fw->ucode_capa,
   VAR_6)) {
  VAR_17 = sizeof(VAR_12);
  if (VAR_13->channel->band == VAR_8 ||
      !FUNC_4(VAR_9))
   VAR_12.lmac_id = FUNC_2(VAR_4);
  else
   VAR_12.lmac_id = FUNC_2(VAR_5);
 } else {
  VAR_17 = VAR_3;
 }

 VAR_12.id_and_color = FUNC_2(FUNC_0(VAR_13->id,
          VAR_13->color));
 VAR_12.action = FUNC_2(VAR_10);
 VAR_12.phy = FUNC_2(FUNC_0(VAR_13->id,
        VAR_13->color));

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
  VAR_12.macs[VAR_14] = FUNC_2(VAR_2);
 for (VAR_14 = 0; VAR_14 < VAR_11->idx; VAR_14++)
  VAR_12.macs[VAR_14] = FUNC_2(FUNC_0(VAR_11->ids[VAR_14],
             VAR_11->colors[VAR_14]));

 VAR_16 = 0;
 VAR_15 = FUNC_5(VAR_9, VAR_0,
       VAR_17, &VAR_12, &VAR_16);
 if (VAR_15) {
  FUNC_1(VAR_9, "Failed to send binding (action:%d): %d\n",
   VAR_10, VAR_15);
  return VAR_15;
 }

 if (VAR_16) {
  FUNC_1(VAR_9, "Binding command failed: %u\n", VAR_16);
  VAR_15 = -VAR_1;
 }

 return VAR_15;
}
