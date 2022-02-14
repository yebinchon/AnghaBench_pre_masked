
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*,int,int) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1,
    "WRDS SAR BIOS table invalid or unavailable. (%d)\n",
    VAR_2);




  return 1;
 }

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 < 0)
  FUNC_0(VAR_1,
    "EWRD SAR BIOS table invalid or unavailable. (%d)\n",
    VAR_2);


 VAR_2 = FUNC_3(VAR_1, 1, 1);






 if (VAR_2 == -VAR_0)
  return 1;

 return VAR_2;
}
