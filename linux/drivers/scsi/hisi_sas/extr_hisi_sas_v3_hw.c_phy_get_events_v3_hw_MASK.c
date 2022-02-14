
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sas_phy {int running_disparity_error_count; int invalid_dword_count; int phy_reset_problem_count; int loss_of_dword_sync_count; } ;
struct asd_sas_phy {struct sas_phy* phy; } ;
struct hisi_sas_phy {int lock; int code_violation_err_count; struct asd_sas_phy sas_phy; } ;
struct hisi_hba {struct hisi_sas_phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hisi_hba*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_5, int VAR_6)
{
 struct hisi_sas_phy *VAR_7 = &VAR_5->phy[VAR_6];
 struct asd_sas_phy *VAR_8 = &VAR_7->sas_phy;
 struct sas_phy *VAR_9 = VAR_8->phy;
 unsigned long VAR_10;
 u32 VAR_11;

 FUNC_1(&VAR_7->lock, VAR_10);


 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_2);
 VAR_9->loss_of_dword_sync_count += VAR_11;


 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_4);
 VAR_9->phy_reset_problem_count += VAR_11;


 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_3);
 VAR_9->invalid_dword_count += VAR_11;


 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_1);
 VAR_9->running_disparity_error_count += VAR_11;


 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_0);
 VAR_7->code_violation_err_count += VAR_11;

 FUNC_2(&VAR_7->lock, VAR_10);
}
