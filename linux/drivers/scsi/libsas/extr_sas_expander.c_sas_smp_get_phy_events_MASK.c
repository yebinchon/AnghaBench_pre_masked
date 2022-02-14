
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sas_rphy {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct sas_phy {void* phy_reset_problem_count; void* loss_of_dword_sync_count; void* running_disparity_error_count; void* invalid_dword_count; int number; TYPE_1__ dev; } ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 struct sas_rphy* FUNC_2 (int ) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct domain_device* FUNC_5 (struct sas_rphy*) ;
 int FUNC_6 (struct domain_device*,int *,int ,int *,int ) ;

int FUNC_7(struct sas_phy *VAR_4)
{
 int VAR_5;
 u8 *VAR_6;
 u8 *VAR_7;
 struct sas_rphy *VAR_8 = FUNC_2(VAR_4->dev.parent);
 struct domain_device *VAR_9 = FUNC_5(VAR_8);

 VAR_6 = FUNC_0(VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_2);
 if (!VAR_7) {
  FUNC_4(VAR_6);
  return -VAR_0;
 }

 VAR_6[1] = VAR_3;
 VAR_6[9] = VAR_4->number;

 VAR_5 = FUNC_6(VAR_9, VAR_6, VAR_1,
               VAR_7, VAR_2);

 if (VAR_5)
  goto out;

 VAR_4->invalid_dword_count = FUNC_3(&VAR_7[12]);
 VAR_4->running_disparity_error_count = FUNC_3(&VAR_7[16]);
 VAR_4->loss_of_dword_sync_count = FUNC_3(&VAR_7[20]);
 VAR_4->phy_reset_problem_count = FUNC_3(&VAR_7[24]);

 out:
 FUNC_4(VAR_6);
 FUNC_4(VAR_7);
 return VAR_5;

}
