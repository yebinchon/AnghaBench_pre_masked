
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_scan_config_v2 {int dummy; } ;
struct iwl_scan_config_v1 {int dummy; } ;
struct iwl_mvm {int scan_type; int hb_scan_type; TYPE_4__* fw; TYPE_2__* nvm_data; } ;
struct iwl_host_cmd {int* len; int * dataflags; void** data; int id; } ;
typedef enum iwl_mvm_scan_type { ____Placeholder_iwl_mvm_scan_type } iwl_mvm_scan_type ;
struct TYPE_7__ {int n_scan_channels; } ;
struct TYPE_8__ {TYPE_3__ ucode_capa; } ;
struct TYPE_6__ {TYPE_1__* bands; } ;
struct TYPE_5__ {int n_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,void*,int,int,int) ;
 int FUNC_6 (struct iwl_mvm*,void*,int,int,int) ;
 int FUNC_7 (struct iwl_mvm*,int *) ;
 int FUNC_8 (struct iwl_mvm*,int *,size_t) ;
 scalar_t__ FUNC_9 (struct iwl_mvm*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 int FUNC_12 (void*) ;
 void* FUNC_13 (int,int ) ;

__attribute__((used)) static int FUNC_14(struct iwl_mvm *VAR_25)
{
 void *VAR_26;
 int VAR_27, VAR_28;
 struct iwl_host_cmd VAR_29 = {
  .id = FUNC_3(VAR_11, VAR_2, 0),
 };
 enum iwl_mvm_scan_type VAR_30;
 enum iwl_mvm_scan_type VAR_31 = VAR_8;
 int VAR_32 =
  VAR_25->nvm_data->bands[VAR_9].n_channels +
  VAR_25->nvm_data->bands[VAR_10].n_channels;
 u32 VAR_33;
 u8 VAR_34;

 if (FUNC_2(VAR_32 > VAR_25->fw->ucode_capa.n_scan_channels))
  VAR_32 = VAR_25->fw->ucode_capa.n_scan_channels;

 if (FUNC_9(VAR_25)) {
  VAR_30 = FUNC_8(VAR_25, ((void*)0),
        VAR_9);
  VAR_31 = FUNC_8(VAR_25, ((void*)0),
           VAR_10);
  if (VAR_30 == VAR_25->scan_type && VAR_31 == VAR_25->hb_scan_type)
   return 0;
 } else {
  VAR_30 = FUNC_7(VAR_25, ((void*)0));
  if (VAR_30 == VAR_25->scan_type)
   return 0;
 }

 if (FUNC_4(VAR_25))
  VAR_28 = sizeof(struct iwl_scan_config_v2);
 else
  VAR_28 = sizeof(struct iwl_scan_config_v1);
 VAR_28 += VAR_32;

 VAR_26 = FUNC_13(VAR_28, VAR_1);
 if (!VAR_26)
  return -VAR_0;

 VAR_33 = VAR_12 |
   VAR_13 |
   VAR_24 |
   VAR_23 |
   VAR_17 |
   VAR_16 |
   VAR_20 |
   VAR_22 |
   VAR_18 |
   FUNC_1(VAR_32) |
   (FUNC_10(VAR_30) ?
    VAR_19 :
    VAR_14);

 VAR_34 = VAR_4 |
   VAR_3 |
   VAR_5 |
   VAR_6;





 if (FUNC_4(VAR_25)) {
  if (FUNC_9(VAR_25))
   VAR_33 |= (FUNC_10(VAR_31)) ?
     VAR_21 :
     VAR_15;
  FUNC_6(VAR_25, VAR_26, VAR_33, VAR_34,
         VAR_32);
 } else {
  FUNC_5(VAR_25, VAR_26, VAR_33, VAR_34,
         VAR_32);
 }

 VAR_29.data[0] = VAR_26;
 VAR_29.len[0] = VAR_28;
 VAR_29.dataflags[0] = VAR_7;

 FUNC_0(VAR_25, "Sending UMAC scan config\n");

 VAR_27 = FUNC_11(VAR_25, &VAR_29);
 if (!VAR_27) {
  VAR_25->scan_type = VAR_30;
  VAR_25->hb_scan_type = VAR_31;
 }

 FUNC_12(VAR_26);
 return VAR_27;
}
