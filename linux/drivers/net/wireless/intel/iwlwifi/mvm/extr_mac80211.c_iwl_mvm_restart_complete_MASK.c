
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iwl_mvm*,int ) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct iwl_mvm *VAR_2)
{
 int VAR_3;

 FUNC_5(&VAR_2->mutex);

 FUNC_1(VAR_1, &VAR_2->status);

 VAR_3 = FUNC_4(VAR_2, 1, ((void*)0));
 if (VAR_3)
  FUNC_0(VAR_2, "Failed to update quotas after restart (%d)\n",
   VAR_3);

 FUNC_2(VAR_2, VAR_0);





 FUNC_3(VAR_2);

 FUNC_6(&VAR_2->mutex);
}
