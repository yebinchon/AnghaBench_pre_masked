
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dummy; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_baid_data {unsigned int tid; unsigned int sta_id; } ;
struct iwl_mvm {int * baid_map; } ;
struct iwl_bar_frame_release {int sta_tid; int ba_info; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_mvm*,char*,unsigned int) ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_2 (int,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct iwl_mvm*,struct napi_struct*,unsigned int,unsigned int,int,int ) ;
 unsigned int FUNC_5 (int ,int ) ;
 struct iwl_mvm_baid_data* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct iwl_rx_packet* FUNC_9 (struct iwl_rx_cmd_buffer*) ;

void FUNC_10(struct iwl_mvm *VAR_5, struct napi_struct *VAR_6,
      struct iwl_rx_cmd_buffer *VAR_7, int VAR_8)
{
 struct iwl_rx_packet *VAR_9 = FUNC_9(VAR_7);
 struct iwl_bar_frame_release *VAR_10 = (void *)VAR_9->data;
 unsigned int VAR_11 = FUNC_5(VAR_10->ba_info,
       VAR_0);
 unsigned int VAR_12 = FUNC_5(VAR_10->ba_info,
       VAR_1);
 unsigned int VAR_13 = FUNC_5(VAR_10->sta_tid,
         VAR_2);
 unsigned int VAR_14 = FUNC_5(VAR_10->sta_tid,
      VAR_3);
 struct iwl_mvm_baid_data *VAR_15;

 if (FUNC_3(VAR_11 == VAR_4 ||
    VAR_11 >= FUNC_0(VAR_5->baid_map)))
  return;

 FUNC_7();
 VAR_15 = FUNC_6(VAR_5->baid_map[VAR_11]);
 if (!VAR_15) {
  FUNC_1(VAR_5,
        "Got valid BAID %d but not allocated, invalid BAR release!\n",
         VAR_11);
  goto out;
 }

 if (FUNC_2(VAR_14 != VAR_15->tid || VAR_13 != VAR_15->sta_id,
   "baid 0x%x is mapped to sta:%d tid:%d, but BAR release received for sta:%d tid:%d\n",
   VAR_11, VAR_15->sta_id, VAR_15->tid, VAR_13,
   VAR_14))
  goto out;

 FUNC_4(VAR_5, VAR_6, VAR_11, VAR_12, VAR_8, 0);
out:
 FUNC_8();
}
