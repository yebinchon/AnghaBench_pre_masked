
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union iwl_dbg_tlv_tp_data {struct iwl_rx_packet* fw_pkt; } ;
struct TYPE_3__ {int cmd; int group_id; } ;
struct iwl_rx_packet {TYPE_1__ hdr; } ;
struct iwl_rx_handlers {scalar_t__ cmd_id; scalar_t__ context; int (* fn ) (struct iwl_mvm*,struct iwl_rx_cmd_buffer*) ;} ;
struct iwl_rx_cmd_buffer {int _rx_page_order; int _offset; } ;
struct iwl_mvm {int async_handlers_wk; int async_handlers_lock; int async_handlers_list; int notif_wait; int fwrt; } ;
struct TYPE_4__ {int _rx_page_order; int _offset; int _page; } ;
struct iwl_async_handler_entry {scalar_t__ context; int list; int (* fn ) (struct iwl_mvm*,struct iwl_rx_cmd_buffer*) ;TYPE_2__ rxb; } ;


 int FUNC_0 (struct iwl_rx_handlers*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,union iwl_dbg_tlv_tp_data*) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_rx_packet*) ;
 struct iwl_rx_handlers* VAR_3 ;
 int FUNC_4 (int *,struct iwl_rx_packet*) ;
 struct iwl_async_handler_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct iwl_mvm*,struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static void FUNC_12(struct iwl_mvm *VAR_4,
         struct iwl_rx_cmd_buffer *VAR_5,
         struct iwl_rx_packet *VAR_6)
{
 int VAR_7;
 union iwl_dbg_tlv_tp_data VAR_8 = { .fw_pkt = VAR_6 };

 FUNC_2(&VAR_4->fwrt,
          VAR_1, &VAR_8);
 FUNC_3(VAR_4, VAR_6);






 FUNC_4(&VAR_4->notif_wait, VAR_6);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  const struct iwl_rx_handlers *VAR_9 = &VAR_3[VAR_7];
  struct iwl_async_handler_entry *VAR_10;

  if (VAR_9->cmd_id != FUNC_1(VAR_6->hdr.group_id, VAR_6->hdr.cmd))
   continue;

  if (VAR_9->context == VAR_2) {
   VAR_9->fn(VAR_4, VAR_5);
   return;
  }

  VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_0);

  if (!VAR_10)
   return;

  VAR_10->rxb._page = FUNC_7(VAR_5);
  VAR_10->rxb._offset = VAR_5->_offset;
  VAR_10->rxb._rx_page_order = VAR_5->_rx_page_order;
  VAR_10->fn = VAR_9->fn;
  VAR_10->context = VAR_9->context;
  FUNC_9(&VAR_4->async_handlers_lock);
  FUNC_6(&VAR_10->list, &VAR_4->async_handlers_list);
  FUNC_10(&VAR_4->async_handlers_lock);
  FUNC_8(&VAR_4->async_handlers_wk);
  break;
 }
}
