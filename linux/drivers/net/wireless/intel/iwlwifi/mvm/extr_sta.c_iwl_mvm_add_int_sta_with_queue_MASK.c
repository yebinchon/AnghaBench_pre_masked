
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_mvm_int_sta {int sta_id; } ;
struct iwl_mvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,struct iwl_mvm_int_sta*,int *,int,int) ;
 int FUNC_1 (struct iwl_mvm*,int *,int,int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,int,int ,int) ;
 int FUNC_3 (struct iwl_mvm*,int ) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int ) ;

__attribute__((used)) static int FUNC_6(struct iwl_mvm *VAR_1, int VAR_2,
       int VAR_3,
       struct iwl_mvm_int_sta *VAR_4,
       u16 *VAR_5, int VAR_6)
{
 int VAR_7;


 if (!FUNC_4(VAR_1))
  FUNC_2(VAR_1, *VAR_5, VAR_4->sta_id, VAR_6);

 VAR_7 = FUNC_0(VAR_1, VAR_4, ((void*)0), VAR_2, VAR_3);
 if (VAR_7) {
  if (!FUNC_4(VAR_1))
   FUNC_1(VAR_1, ((void*)0), *VAR_5,
         VAR_0, 0);
  return VAR_7;
 }





 if (FUNC_4(VAR_1)) {
  int VAR_8;

  VAR_8 = FUNC_3(VAR_1, VAR_4->sta_id);
  if (VAR_8 < 0) {
   FUNC_5(VAR_1, VAR_4->sta_id);
   return VAR_8;
  }

  *VAR_5 = VAR_8;
 }

 return 0;
}
