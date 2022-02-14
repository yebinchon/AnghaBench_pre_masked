
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pm8001_phy {int phy_state; } ;
struct pm8001_hba_info {struct pm8001_phy* phy; } ;
struct phy_stop_resp {int phyid; int status; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_3(struct pm8001_hba_info *VAR_3, void *VAR_4)
{
 struct phy_stop_resp *VAR_5 =
  (struct phy_stop_resp *)(VAR_4 + 4);
 u32 VAR_6 =
  FUNC_1(VAR_5->status);
 u32 VAR_7 =
  FUNC_1(VAR_5->phyid) & 0xFF;
 struct pm8001_phy *VAR_8 = &VAR_3->phy[VAR_7];
 FUNC_0(VAR_3,
   FUNC_2("phy:0x%x status:0x%x\n",
     VAR_7, VAR_6));
 if (VAR_6 == VAR_2 ||
  VAR_6 == VAR_1)
  VAR_8->phy_state = VAR_0;
 return 0;
}
