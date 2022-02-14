
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
 struct iwl_mvm* FUNC_0 (struct iwl_op_mode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct napi_struct*,struct iwl_rx_cmd_buffer*,unsigned int) ;
 int FUNC_3 (struct iwl_mvm*,struct napi_struct*,struct iwl_rx_cmd_buffer*,unsigned int) ;
 int FUNC_4 (struct iwl_mvm*,struct napi_struct*,struct iwl_rx_cmd_buffer*,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;
 struct iwl_rx_packet* FUNC_6 (struct iwl_rx_cmd_buffer*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct iwl_op_mode *VAR_5,
         struct napi_struct *VAR_6,
         struct iwl_rx_cmd_buffer *VAR_7,
         unsigned int VAR_8)
{
 struct iwl_mvm *VAR_9 = FUNC_0(VAR_5);
 struct iwl_rx_packet *VAR_10 = FUNC_6(VAR_7);
 u16 VAR_11 = FUNC_1(VAR_10->hdr.group_id, VAR_10->hdr.cmd);

 if (FUNC_7(VAR_11 == FUNC_1(VAR_2, VAR_1)))
  FUNC_2(VAR_9, VAR_6, VAR_7, VAR_8);
 else if (FUNC_7(VAR_11 == FUNC_1(VAR_0,
      VAR_4)))
  FUNC_4(VAR_9, VAR_6, VAR_7, VAR_8);
 else if (FUNC_5(VAR_11 == FUNC_1(VAR_2, VAR_3)))
  FUNC_3(VAR_9, VAR_6, VAR_7, VAR_8);
}
