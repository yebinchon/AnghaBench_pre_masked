
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_mvm {int dummy; } ;
struct iwl_host_cmd {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_host_cmd*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_3)
{
 int VAR_4;
 struct iwl_host_cmd VAR_5 = {
  .id = VAR_2,
 };
 u32 VAR_6 = VAR_0;

 VAR_4 = FUNC_1(VAR_3, &VAR_5, &VAR_6);
 if (VAR_4)
  return VAR_4;

 if (VAR_6 != VAR_0) {







  FUNC_0(VAR_3, "SCAN OFFLOAD ABORT ret %d.\n", VAR_6);
  VAR_4 = -VAR_1;
 }

 return VAR_4;
}
