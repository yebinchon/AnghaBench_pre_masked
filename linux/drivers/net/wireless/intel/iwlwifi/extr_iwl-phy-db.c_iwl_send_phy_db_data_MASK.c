
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iwl_phy_db {int trans; int n_group_txp; int n_group_papd; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct iwl_phy_db*,int ,int **,int *,int ) ;
 int FUNC_3 (struct iwl_phy_db*,int ,int ) ;
 int FUNC_4 (struct iwl_phy_db*,int ,int ,int *) ;

int FUNC_5(struct iwl_phy_db *VAR_4)
{
 u8 *VAR_5 = ((void*)0);
 u16 VAR_6 = 0;
 int VAR_7;

 FUNC_0(VAR_4->trans,
         "Sending phy db data and configuration to runtime image\n");


 VAR_7 = FUNC_2(VAR_4, VAR_3,
       &VAR_5, &VAR_6, 0);
 if (VAR_7) {
  FUNC_1(VAR_4->trans, "Cannot get Phy DB cfg section\n");
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_3, VAR_6, VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_4->trans,
   "Cannot send HCMD of  Phy DB cfg section\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_2,
       &VAR_5, &VAR_6, 0);
 if (VAR_7) {
  FUNC_1(VAR_4->trans,
   "Cannot get Phy DB non specific channel section\n");
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_2, VAR_6, VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_4->trans,
   "Cannot send HCMD of Phy DB non specific channel section\n");
  return VAR_7;
 }


 VAR_7 = FUNC_3(VAR_4,
       VAR_0,
       VAR_4->n_group_papd);
 if (VAR_7) {
  FUNC_1(VAR_4->trans,
   "Cannot send channel specific PAPD groups\n");
  return VAR_7;
 }


 VAR_7 = FUNC_3(VAR_4,
       VAR_1,
       VAR_4->n_group_txp);
 if (VAR_7) {
  FUNC_1(VAR_4->trans,
   "Cannot send channel specific TX power groups\n");
  return VAR_7;
 }

 FUNC_0(VAR_4->trans,
         "Finished sending phy db non channel data\n");
 return 0;
}
