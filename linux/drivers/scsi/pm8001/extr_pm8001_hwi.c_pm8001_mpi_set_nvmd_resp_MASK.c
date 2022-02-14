
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pm8001_hba_info {int nvmd_completion; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_ccb_info {int ccb_tag; int * task; } ;
struct get_nvm_data_resp {int dlen_status; int tag; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pm8001_hba_info*,size_t) ;

void FUNC_6(struct pm8001_hba_info *VAR_1, void *VAR_2)
{
 struct get_nvm_data_resp *VAR_3 =
  (struct get_nvm_data_resp *)(VAR_2 + 4);
 u32 VAR_4 = FUNC_3(VAR_3->tag);
 struct pm8001_ccb_info *VAR_5 = &VAR_1->ccb_info[VAR_4];
 u32 VAR_6 = FUNC_3(VAR_3->dlen_status);
 FUNC_2(VAR_1->nvmd_completion);
 FUNC_1(VAR_1, FUNC_4("Set nvm data complete!\n"));
 if ((VAR_6 & VAR_0) != 0) {
  FUNC_0(VAR_1,
   FUNC_4("Set nvm data error!\n"));
  return;
 }
 VAR_5->task = ((void*)0);
 VAR_5->ccb_tag = 0xFFFFFFFF;
 FUNC_5(VAR_1, VAR_4);
}
