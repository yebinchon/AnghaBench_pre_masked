
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int status; int fwrt; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct iwl_mvm *VAR_4)
{
 int VAR_5;

 FUNC_4(&VAR_4->mutex);

 if (FUNC_6(VAR_2, &VAR_4->status)) {




  FUNC_5(VAR_3, &VAR_4->status);
  FUNC_0(VAR_2, &VAR_4->status);

  FUNC_2(VAR_4);
 }
 VAR_5 = FUNC_3(VAR_4);

 FUNC_1(&VAR_4->fwrt, VAR_1,
          ((void*)0));
 FUNC_1(&VAR_4->fwrt, VAR_0,
          ((void*)0));

 if (VAR_5 && FUNC_6(VAR_3, &VAR_4->status)) {




  FUNC_0(VAR_3, &VAR_4->status);
 }

 return VAR_5;
}
