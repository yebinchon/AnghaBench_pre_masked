
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dummy; } ;
struct iwl_phy_db {int n_group_txp; int n_group_papd; struct iwl_trans* trans; } ;


 int VAR_0 ;
 struct iwl_phy_db* FUNC_0 (int,int ) ;

struct iwl_phy_db *FUNC_1(struct iwl_trans *VAR_1)
{
 struct iwl_phy_db *VAR_2 = FUNC_0(sizeof(struct iwl_phy_db),
         VAR_0);

 if (!VAR_2)
  return VAR_2;

 VAR_2->trans = VAR_1;

 VAR_2->n_group_txp = -1;
 VAR_2->n_group_papd = -1;


 return VAR_2;
}
