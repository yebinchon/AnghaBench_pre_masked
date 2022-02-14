
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iwl_nvm_section {scalar_t__ data; } ;
struct iwl_nvm_data {int dummy; } ;
struct iwl_mvm {TYPE_2__* fw; TYPE_5__* cfg; TYPE_4__* trans; struct iwl_nvm_section* nvm_sections; } ;
typedef int __le16 ;
typedef int __be16 ;
struct TYPE_10__ {size_t nvm_hw_section_num; } ;
struct TYPE_9__ {TYPE_1__* cfg; } ;
struct TYPE_8__ {int lar_disable; } ;
struct TYPE_7__ {int valid_rx_ant; int valid_tx_ant; int ucode_capa; } ;
struct TYPE_6__ {scalar_t__ nvm_type; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 struct iwl_nvm_data* FUNC_2 (TYPE_4__*,TYPE_5__*,int const*,int const*,int const*,int const*,int const*,int const*,int ,int ,int) ;
 TYPE_3__ VAR_9 ;

__attribute__((used)) static struct iwl_nvm_data *
FUNC_3(struct iwl_mvm *VAR_10)
{
 struct iwl_nvm_section *VAR_11 = VAR_10->nvm_sections;
 const __be16 *VAR_12;
 const __le16 *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 bool VAR_18;
 int VAR_19;


 if (VAR_10->trans->cfg->nvm_type != VAR_0) {
  if (!VAR_10->nvm_sections[VAR_8].data ||
      !VAR_10->nvm_sections[VAR_10->cfg->nvm_hw_section_num].data) {
   FUNC_0(VAR_10, "Can't parse empty OTP/NVM sections\n");
   return ((void*)0);
  }
 } else {
  if (VAR_10->trans->cfg->nvm_type == VAR_1)
   VAR_19 = VAR_7;
  else
   VAR_19 = VAR_6;


  if (!VAR_10->nvm_sections[VAR_8].data ||
      !VAR_10->nvm_sections[VAR_19].data) {
   FUNC_0(VAR_10,
    "Can't parse empty family 8000 OTP/NVM sections\n");
   return ((void*)0);
  }

  if (!VAR_10->nvm_sections[VAR_10->cfg->nvm_hw_section_num].data &&
      !VAR_10->nvm_sections[VAR_4].data) {
   FUNC_0(VAR_10,
    "Can't parse mac_address, empty sections\n");
   return ((void*)0);
  }


  if (!VAR_10->nvm_sections[VAR_5].data) {
   FUNC_0(VAR_10,
    "Can't parse phy_sku in B0, empty sections\n");
   return ((void*)0);
  }
 }

 VAR_12 = (const __be16 *)VAR_11[VAR_10->cfg->nvm_hw_section_num].data;
 VAR_13 = (const __le16 *)VAR_11[VAR_8].data;
 VAR_14 = (const __le16 *)VAR_11[VAR_3].data;
 VAR_16 =
  (const __le16 *)VAR_11[VAR_4].data;
 VAR_17 = (const __le16 *)VAR_11[VAR_5].data;

 VAR_15 = VAR_10->trans->cfg->nvm_type == VAR_1 ?
  (const __le16 *)VAR_11[VAR_7].data :
  (const __le16 *)VAR_11[VAR_6].data;

 VAR_18 = !VAR_9.lar_disable &&
        FUNC_1(&VAR_10->fw->ucode_capa,
      VAR_2);

 return FUNC_2(VAR_10->trans, VAR_10->cfg, VAR_12, VAR_13, VAR_14,
      VAR_15, VAR_16, VAR_17,
      VAR_10->fw->valid_tx_ant, VAR_10->fw->valid_rx_ant,
      VAR_18);
}
