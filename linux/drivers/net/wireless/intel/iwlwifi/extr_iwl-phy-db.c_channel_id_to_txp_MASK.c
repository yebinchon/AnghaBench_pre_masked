
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_phy_db_chg_txp {int max_channel_idx; } ;
struct iwl_phy_db {int n_group_txp; TYPE_1__* calib_ch_group_txp; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct iwl_phy_db *VAR_0, u16 VAR_1)
{
 struct iwl_phy_db_chg_txp *VAR_2;
 int VAR_3;
 u8 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == 0xff)
  return 0xff;

 for (VAR_3 = 0; VAR_3 < VAR_0->n_group_txp; VAR_3++) {
  VAR_2 = (void *)VAR_0->calib_ch_group_txp[VAR_3].data;
  if (!VAR_2)
   return 0xff;




  if (FUNC_1(VAR_2->max_channel_idx) >= VAR_4)
   return VAR_3;
 }
 return 0xff;
}
