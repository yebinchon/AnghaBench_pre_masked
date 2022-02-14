
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pm8001_phy {int * enable_completion; int phy_state; } ;
struct pm8001_hba_info {scalar_t__ flags; struct pm8001_phy* phy; } ;
struct phy_start_resp {int phyid; int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_4(struct pm8001_hba_info *VAR_2, void *VAR_3)
{
 struct phy_start_resp *VAR_4 =
  (struct phy_start_resp *)(VAR_3 + 4);
 u32 VAR_5 =
  FUNC_2(VAR_4->status);
 u32 VAR_6 =
  FUNC_2(VAR_4->phyid);
 struct pm8001_phy *VAR_7 = &VAR_2->phy[VAR_6];

 FUNC_0(VAR_2,
  FUNC_3("phy start resp status:0x%x, phyid:0x%x\n",
    VAR_5, VAR_6));
 if (VAR_5 == 0) {
  VAR_7->phy_state = VAR_0;
  if (VAR_2->flags == VAR_1 &&
    VAR_7->enable_completion != ((void*)0))
   FUNC_1(VAR_7->enable_completion);
 }
 return 0;

}
