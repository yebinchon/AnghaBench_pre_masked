
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int aux_sta; int aux_queue; int mutex; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_mvm*,int ,int ,int *,int *,int ) ;
 int FUNC_2 (struct iwl_mvm*,int *,int ,int ,int ) ;
 int FUNC_3 (struct iwl_mvm*,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct iwl_mvm *VAR_4)
{
 int VAR_5;

 FUNC_4(&VAR_4->mutex);


 VAR_5 = FUNC_2(VAR_4, &VAR_4->aux_sta, FUNC_0(VAR_4->aux_queue),
           VAR_3,
           VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_2, 0,
          &VAR_4->aux_sta, &VAR_4->aux_queue,
          VAR_0);
 if (VAR_5) {
  FUNC_3(VAR_4, &VAR_4->aux_sta);
  return VAR_5;
 }

 return 0;
}
