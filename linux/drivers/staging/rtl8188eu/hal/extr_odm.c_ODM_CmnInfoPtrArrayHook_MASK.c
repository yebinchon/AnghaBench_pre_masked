
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sta_info {int dummy; } ;
struct odm_dm_struct {struct sta_info** pODM_StaInfo; } ;
typedef enum odm_common_info_def { ____Placeholder_odm_common_info_def } odm_common_info_def ;


 int VAR_0 ;

void FUNC_0(struct odm_dm_struct *VAR_1, enum odm_common_info_def VAR_2, u16 VAR_3, void *VAR_4)
{
 if (VAR_2 == VAR_0)
  VAR_1->pODM_StaInfo[VAR_3] = (struct sta_info *)VAR_4;
}
