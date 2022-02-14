
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_24__ {int size; int * data; } ;
struct TYPE_22__ {int size; int * data; } ;
struct TYPE_21__ {int size; int * data; } ;
struct TYPE_20__ {int size; int * data; } ;
struct TYPE_19__ {int size; int * data; } ;
struct TYPE_18__ {int size; int * data; } ;
struct iwl_mvm {char const* nvm_file_name; TYPE_12__* nvm_data; TYPE_10__* trans; TYPE_11__* nvm_sections; TYPE_9__ nvm_hw_blob; TYPE_8__* cfg; TYPE_7__ nvm_reg_blob; TYPE_6__ nvm_phy_sku_blob; TYPE_5__ nvm_prod_blob; TYPE_4__ nvm_calib_blob; TYPE_3__ nvm_sw_blob; } ;
struct TYPE_23__ {char* default_nvm_file_C_step; int nvm_hw_section_num; } ;
struct TYPE_17__ {TYPE_1__* base_params; } ;
struct TYPE_16__ {int eeprom_size; } ;
struct TYPE_15__ {int nvm_version; } ;
struct TYPE_14__ {int length; int * data; } ;
struct TYPE_13__ {int dev; int hw_id; TYPE_2__* trans_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_6 ;






 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int,int *,int) ;
 int FUNC_4 (struct iwl_mvm*,int,int *,scalar_t__) ;
 TYPE_12__* FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (TYPE_10__*,char const*,TYPE_11__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int ) ;
 int * FUNC_9 (int *,int,int ) ;

int FUNC_10(struct iwl_mvm *VAR_7)
{
 int VAR_8, VAR_9;
 u32 VAR_10 = 0;
 u8 *VAR_11, *VAR_12;
 const char *VAR_13 = VAR_7->cfg->default_nvm_file_C_step;

 if (FUNC_2(VAR_7->cfg->nvm_hw_section_num >= VAR_6))
  return -VAR_1;



 FUNC_0(VAR_7->trans->dev, "Read from NVM\n");

 VAR_11 = FUNC_8(VAR_7->trans->trans_cfg->base_params->eeprom_size,
        VAR_5);
 if (!VAR_11)
  return -VAR_4;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {

  VAR_8 = FUNC_4(VAR_7, VAR_9, VAR_11,
        VAR_10);
  if (VAR_8 == -VAR_2) {
   VAR_8 = 0;
   continue;
  }
  if (VAR_8 < 0)
   break;
  VAR_10 += VAR_8;
  VAR_12 = FUNC_9(VAR_11, VAR_8, VAR_5);
  if (!VAR_12) {
   VAR_8 = -VAR_4;
   break;
  }

  FUNC_3(VAR_7->trans->hw_id, VAR_9, VAR_12, VAR_8);

  VAR_7->nvm_sections[VAR_9].data = VAR_12;
  VAR_7->nvm_sections[VAR_9].length = VAR_8;
 }
 if (!VAR_10)
  FUNC_1(VAR_7, "OTP is blank\n");
 FUNC_7(VAR_11);


 if (VAR_7->nvm_file_name) {

  VAR_8 = FUNC_6(VAR_7->trans, VAR_7->nvm_file_name,
         VAR_7->nvm_sections);
  if (VAR_8) {
   VAR_7->nvm_file_name = VAR_13;

   if ((VAR_8 == -VAR_0 || VAR_8 == -VAR_3) &&
       VAR_7->nvm_file_name) {

    VAR_8 = FUNC_6(VAR_7->trans,
           VAR_7->nvm_file_name,
           VAR_7->nvm_sections);
    if (VAR_8)
     return VAR_8;
   } else {
    return VAR_8;
   }
  }
 }


 VAR_7->nvm_data = FUNC_5(VAR_7);
 if (!VAR_7->nvm_data)
  return -VAR_2;
 FUNC_0(VAR_7->trans->dev, "nvm version = %x\n",
    VAR_7->nvm_data->nvm_version);

 return VAR_8 < 0 ? VAR_8 : 0;
}
