
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_phy {int loss_of_dword_sync_count; int phy_reset_problem_count; int invalid_dword_count; int running_disparity_error_count; } ;
struct asd_sas_phy {struct sas_phy* phy; } ;
struct hisi_sas_phy {struct asd_sas_phy sas_phy; } ;
struct hisi_hba {struct hisi_sas_phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hisi_hba*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct hisi_hba *VAR_2, int VAR_3)
{
 struct hisi_sas_phy *VAR_4 = &VAR_2->phy[VAR_3];
 struct asd_sas_phy *VAR_5 = &VAR_4->sas_phy;
 struct sas_phy *VAR_6 = VAR_5->phy;
 u32 VAR_7, VAR_8;


 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_0);


 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_1);

 VAR_6->loss_of_dword_sync_count += (VAR_7 >> 16) & 0xFFFF;
 VAR_6->phy_reset_problem_count += VAR_7 & 0xFFFF;
 VAR_6->invalid_dword_count += (VAR_8 & 0xFF0000) >> 16;
 VAR_6->running_disparity_error_count += VAR_8 & 0xFF;
}
