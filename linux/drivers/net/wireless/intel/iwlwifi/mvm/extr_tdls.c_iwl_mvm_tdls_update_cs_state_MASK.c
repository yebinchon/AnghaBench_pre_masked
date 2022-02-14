
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sent_timestamp; } ;
struct TYPE_4__ {int state; int cur_sta_id; TYPE_1__ peer; } ;
struct iwl_mvm {TYPE_2__ tdls_cs; } ;
typedef enum iwl_mvm_tdls_cs_state { ____Placeholder_iwl_mvm_tdls_cs_state } iwl_mvm_tdls_cs_state ;


 int FUNC_0 (struct iwl_mvm*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_3,
      enum iwl_mvm_tdls_cs_state VAR_4)
{
 if (VAR_3->tdls_cs.state == VAR_4)
  return;

 FUNC_0(VAR_3, "TDLS channel switch state: %s -> %s\n",
         FUNC_2(VAR_3->tdls_cs.state),
         FUNC_2(VAR_4));
 VAR_3->tdls_cs.state = VAR_4;


 if (VAR_4 == VAR_2)
  VAR_3->tdls_cs.peer.sent_timestamp = FUNC_1(VAR_3);

 if (VAR_4 == VAR_1)
  VAR_3->tdls_cs.cur_sta_id = VAR_0;
}
