
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pm8001_hba_info {TYPE_1__* phy; } ;
struct local_phy_ctl_resp {int tag; int phyop_phyid; int status; } ;
struct TYPE_2__ {int reset_success; int * enable_completion; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct pm8001_hba_info*,scalar_t__) ;

int FUNC_5(struct pm8001_hba_info *VAR_2, void *VAR_3)
{
 u32 VAR_4;
 struct local_phy_ctl_resp *VAR_5 =
  (struct local_phy_ctl_resp *)(VAR_3 + 4);
 u32 VAR_6 = FUNC_2(VAR_5->status);
 u32 VAR_7 = FUNC_2(VAR_5->phyop_phyid) & VAR_0;
 u32 VAR_8 = FUNC_2(VAR_5->phyop_phyid) & VAR_1;
 VAR_4 = FUNC_2(VAR_5->tag);
 if (VAR_6 != 0) {
  FUNC_0(VAR_2,
   FUNC_3("%x phy execute %x phy op failed!\n",
   VAR_7, VAR_8));
 } else {
  FUNC_0(VAR_2,
   FUNC_3("%x phy execute %x phy op success!\n",
   VAR_7, VAR_8));
  VAR_2->phy[VAR_7].reset_success = 1;
 }
 if (VAR_2->phy[VAR_7].enable_completion) {
  FUNC_1(VAR_2->phy[VAR_7].enable_completion);
  VAR_2->phy[VAR_7].enable_completion = ((void*)0);
 }
 FUNC_4(VAR_2, VAR_4);
 return 0;
}
