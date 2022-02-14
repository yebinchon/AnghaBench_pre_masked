
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iwl_mvm* FUNC_0 (struct iwl_op_mode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct napi_struct*,struct iwl_rx_cmd_buffer*,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_rx_cmd_buffer*,struct iwl_rx_packet*) ;
 int FUNC_4 (struct iwl_mvm*,struct napi_struct*,struct iwl_rx_cmd_buffer*,int ) ;
 int FUNC_5 (struct iwl_mvm*,struct napi_struct*,struct iwl_rx_cmd_buffer*,int ) ;
 int FUNC_6 (struct iwl_mvm*,struct napi_struct*,struct iwl_rx_cmd_buffer*,int ) ;
 int FUNC_7 (struct iwl_mvm*,struct napi_struct*,struct iwl_rx_cmd_buffer*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 struct iwl_rx_packet* FUNC_9 (struct iwl_rx_cmd_buffer*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct iwl_op_mode *VAR_7,
     struct napi_struct *VAR_8,
     struct iwl_rx_cmd_buffer *VAR_9)
{
 struct iwl_rx_packet *VAR_10 = FUNC_9(VAR_9);
 struct iwl_mvm *VAR_11 = FUNC_0(VAR_7);
 u16 VAR_12 = FUNC_1(VAR_10->hdr.group_id, VAR_10->hdr.cmd);

 if (FUNC_8(VAR_12 == FUNC_1(VAR_3, VAR_4)))
  FUNC_6(VAR_11, VAR_8, VAR_9, 0);
 else if (FUNC_10(VAR_12 == FUNC_1(VAR_1,
      VAR_6)))
  FUNC_7(VAR_11, VAR_8, VAR_9, 0);
 else if (VAR_12 == FUNC_1(VAR_3, VAR_2))
  FUNC_4(VAR_11, VAR_8, VAR_9, 0);
 else if (VAR_12 == FUNC_1(VAR_3, VAR_0))
  FUNC_2(VAR_11, VAR_8, VAR_9, 0);
 else if (VAR_12 == FUNC_1(VAR_1, VAR_5))
  FUNC_5(VAR_11, VAR_8, VAR_9, 0);
 else
  FUNC_3(VAR_11, VAR_9, VAR_10);
}
