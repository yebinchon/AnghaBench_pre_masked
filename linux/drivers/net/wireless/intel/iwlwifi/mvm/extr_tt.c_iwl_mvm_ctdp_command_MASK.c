
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct iwl_mvm_ctdp_cmd {int window_size; int budget; int operation; } ;
struct TYPE_2__ {size_t cur_state; } ;
struct iwl_mvm {TYPE_1__ cooling_dev; int mutex; } ;
typedef int cmd ;





 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (size_t) ;
 size_t* VAR_2 ;
 int FUNC_4 (struct iwl_mvm*,int ,int,struct iwl_mvm_ctdp_cmd*,size_t*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iwl_mvm *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct iwl_mvm_ctdp_cmd VAR_6 = {
  .operation = FUNC_3(VAR_4),
  .budget = FUNC_3(VAR_2[VAR_5]),
  .window_size = 0,
 };
 int VAR_7;
 u32 VAR_8;

 FUNC_5(&VAR_3->mutex);

 VAR_8 = 0;
 VAR_7 = FUNC_4(VAR_3, FUNC_2(VAR_1,
             VAR_0),
       sizeof(VAR_6), &VAR_6, &VAR_8);

 if (VAR_7) {
  FUNC_1(VAR_3, "cTDP command failed (err=%d)\n", VAR_7);
  return VAR_7;
 }

 switch (VAR_4) {
 case 129:



  break;
 case 130:
  FUNC_0(VAR_3, "cTDP avg energy in mWatt = %d\n", VAR_8);






  return VAR_8;
 case 128:
  FUNC_0(VAR_3, "cTDP stopped successfully\n");
  break;
 }

 return 0;
}
