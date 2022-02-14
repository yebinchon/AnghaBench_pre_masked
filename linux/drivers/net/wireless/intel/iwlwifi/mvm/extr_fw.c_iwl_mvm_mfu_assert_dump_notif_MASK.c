
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_mfu_assert_dump_notif {scalar_t__ index_num; int assert_id; int data_size; int * data; } ;
typedef int __le32 ;


 int FUNC_0 (struct iwl_mvm*,char*,int,int) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 struct iwl_rx_packet* FUNC_4 (struct iwl_rx_cmd_buffer*) ;

void FUNC_5(struct iwl_mvm *VAR_0,
       struct iwl_rx_cmd_buffer *VAR_1)
{
 struct iwl_rx_packet *VAR_2 = FUNC_4(VAR_1);
 struct iwl_mfu_assert_dump_notif *VAR_3 = (void *)VAR_2->data;
 __le32 *VAR_4 = VAR_3->data;
 int VAR_5 = FUNC_3(VAR_3->data_size) / sizeof(__le32);
 int VAR_6;

 if (VAR_3->index_num == 0)
  FUNC_1(VAR_0, "MFUART assert id 0x%x occurred\n",
    FUNC_3(VAR_3->assert_id));

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_0(VAR_0,
          "MFUART assert dump, dword %u: 0x%08x\n",
          FUNC_2(VAR_3->index_num) *
          VAR_5 + VAR_6,
          FUNC_3(VAR_4[VAR_6]));
}
