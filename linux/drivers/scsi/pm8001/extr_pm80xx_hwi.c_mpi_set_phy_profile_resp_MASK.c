
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct set_phy_profile_resp {int status; int ppc_phyid; } ;
struct pm8001_hba_info {int dummy; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pm8001_hba_info *VAR_1,
   void *VAR_2)
{
 u8 VAR_3;
 struct set_phy_profile_resp *VAR_4 =
  (struct set_phy_profile_resp *)(VAR_2 + 4);
 u32 VAR_5 = FUNC_1(VAR_4->ppc_phyid);
 u32 VAR_6 = FUNC_1(VAR_4->status);

 VAR_3 = (u8)((VAR_5 & 0xFF00) >> 8);
 if (VAR_6) {

  FUNC_0(VAR_1,
   FUNC_2("PhyProfile command failed  with status "
   "0x%08X \n", VAR_6));
  return -1;
 } else {
  if (VAR_3 != VAR_0) {
   FUNC_0(VAR_1,
    FUNC_2("Invalid page code 0x%X\n",
     VAR_3));
   return -1;
  }
 }
 return 0;
}
