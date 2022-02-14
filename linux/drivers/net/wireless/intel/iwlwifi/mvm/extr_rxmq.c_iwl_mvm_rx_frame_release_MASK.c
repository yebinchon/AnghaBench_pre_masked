
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dummy; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_frame_release {int nssn; int baid; } ;


 int FUNC_0 (struct iwl_mvm*,struct napi_struct*,int ,int ,int,int ) ;
 int FUNC_1 (int ) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

void FUNC_3(struct iwl_mvm *VAR_0, struct napi_struct *VAR_1,
         struct iwl_rx_cmd_buffer *VAR_2, int VAR_3)
{
 struct iwl_rx_packet *VAR_4 = FUNC_2(VAR_2);
 struct iwl_frame_release *VAR_5 = (void *)VAR_4->data;

 FUNC_0(VAR_0, VAR_1, VAR_5->baid,
       FUNC_1(VAR_5->nssn),
       VAR_3, 0);
}
