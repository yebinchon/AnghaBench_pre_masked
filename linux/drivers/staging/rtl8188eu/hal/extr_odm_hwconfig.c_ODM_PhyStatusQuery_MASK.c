
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct odm_phy_status_info {int dummy; } ;
struct odm_per_pkt_info {int dummy; } ;
struct odm_dm_struct {scalar_t__ RSSI_test; } ;


 int FUNC_0 (struct odm_dm_struct*,struct odm_phy_status_info*,struct odm_per_pkt_info*) ;
 int FUNC_1 (struct odm_dm_struct*,struct odm_phy_status_info*,int *,struct odm_per_pkt_info*) ;

void FUNC_2(struct odm_dm_struct *VAR_0,
   struct odm_phy_status_info *VAR_1,
   u8 *VAR_2, struct odm_per_pkt_info *VAR_3)
{
 FUNC_1(VAR_0, VAR_1, VAR_2,
      VAR_3);
 if (VAR_0->RSSI_test)
  ;
 else
  FUNC_0(VAR_0, VAR_1, VAR_3);
}
