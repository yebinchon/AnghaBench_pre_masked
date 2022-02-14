
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iwl_phy_db_entry {int dummy; } ;
struct iwl_phy_db {size_t n_group_papd; size_t n_group_txp; struct iwl_phy_db_entry* calib_ch_group_txp; struct iwl_phy_db_entry* calib_ch_group_papd; struct iwl_phy_db_entry calib_nch; struct iwl_phy_db_entry cfg; } ;
typedef enum iwl_phy_db_section_type { ____Placeholder_iwl_phy_db_section_type } iwl_phy_db_section_type ;






 int VAR_0 ;

__attribute__((used)) static struct iwl_phy_db_entry *
FUNC_0(struct iwl_phy_db *VAR_1,
         enum iwl_phy_db_section_type VAR_2,
         u16 VAR_3)
{
 if (!VAR_1 || VAR_2 >= VAR_0)
  return ((void*)0);

 switch (VAR_2) {
 case 128:
  return &VAR_1->cfg;
 case 129:
  return &VAR_1->calib_nch;
 case 131:
  if (VAR_3 >= VAR_1->n_group_papd)
   return ((void*)0);
  return &VAR_1->calib_ch_group_papd[VAR_3];
 case 130:
  if (VAR_3 >= VAR_1->n_group_txp)
   return ((void*)0);
  return &VAR_1->calib_ch_group_txp[VAR_3];
 default:
  return ((void*)0);
 }
 return ((void*)0);
}
