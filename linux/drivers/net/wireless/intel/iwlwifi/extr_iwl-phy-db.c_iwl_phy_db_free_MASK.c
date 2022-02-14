
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_phy_db {int n_group_papd; int n_group_txp; struct iwl_phy_db* calib_ch_group_txp; struct iwl_phy_db* calib_ch_group_papd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_phy_db*,int ,int) ;
 int FUNC_1 (struct iwl_phy_db*) ;

void FUNC_2(struct iwl_phy_db *VAR_4)
{
 int VAR_5;

 if (!VAR_4)
  return;

 FUNC_0(VAR_4, VAR_3, 0);
 FUNC_0(VAR_4, VAR_2, 0);

 for (VAR_5 = 0; VAR_5 < VAR_4->n_group_papd; VAR_5++)
  FUNC_0(VAR_4, VAR_0, VAR_5);
 FUNC_1(VAR_4->calib_ch_group_papd);

 for (VAR_5 = 0; VAR_5 < VAR_4->n_group_txp; VAR_5++)
  FUNC_0(VAR_4, VAR_1, VAR_5);
 FUNC_1(VAR_4->calib_ch_group_txp);

 FUNC_1(VAR_4);
}
