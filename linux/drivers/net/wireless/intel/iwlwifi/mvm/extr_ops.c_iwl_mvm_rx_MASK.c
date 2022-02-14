
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct napi_struct {int dummy; } ;
struct TYPE_2__ {int cmd; int group_id; } ;
struct iwl_rx_packet {TYPE_1__ hdr; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct iwl_op_mode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_rx_cmd_buffer*,struct iwl_rx_packet*) ;
 int FUNC_3 (struct iwl_mvm*,struct napi_struct*,struct iwl_rx_cmd_buffer*) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_rx_cmd_buffer*) ;
 scalar_t__ FUNC_5 (int) ;
 struct iwl_rx_packet* FUNC_6 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_7(struct iwl_op_mode *VAR_3,
         struct napi_struct *VAR_4,
         struct iwl_rx_cmd_buffer *VAR_5)
{
 struct iwl_rx_packet *VAR_6 = FUNC_6(VAR_5);
 struct iwl_mvm *VAR_7 = FUNC_0(VAR_3);
 u16 VAR_8 = FUNC_1(VAR_6->hdr.group_id, VAR_6->hdr.cmd);

 if (FUNC_5(VAR_8 == FUNC_1(VAR_0, VAR_1)))
  FUNC_3(VAR_7, VAR_4, VAR_5);
 else if (VAR_8 == FUNC_1(VAR_0, VAR_2))
  FUNC_4(VAR_7, VAR_5);
 else
  FUNC_2(VAR_7, VAR_5, VAR_6);
}
