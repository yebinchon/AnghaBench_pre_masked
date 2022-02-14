
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct page {int dummy; } ;
struct iwl_txq {int lock; TYPE_2__* entries; int write_ptr; int read_ptr; } ;
struct iwl_trans_pcie {size_t cmd_queue; int wait_command_queue; int rx_page_order; struct iwl_txq** txq; } ;
struct iwl_trans {int status; int op_mode; } ;
struct TYPE_5__ {int sequence; } ;
struct iwl_rx_packet {TYPE_1__ hdr; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct TYPE_7__ {int cmd; int group_id; } ;
struct iwl_device_cmd {TYPE_3__ hdr; } ;
struct iwl_cmd_meta {int flags; TYPE_4__* source; } ;
struct TYPE_8__ {unsigned long _rx_page_addr; int _rx_page_order; struct iwl_rx_packet* resp_pkt; } ;
struct TYPE_6__ {struct iwl_cmd_meta meta; struct iwl_device_cmd* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*,int ) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int,char*,int,int,int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct iwl_trans*,int ) ;
 int FUNC_9 (int ,struct iwl_device_cmd*) ;
 int FUNC_10 (struct iwl_trans*,int,int) ;
 int FUNC_11 (struct iwl_txq*,int) ;
 int FUNC_12 (struct iwl_trans*,struct iwl_cmd_meta*,struct iwl_txq*,int) ;
 int FUNC_13 (struct iwl_trans*,struct iwl_rx_packet*,int) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct page*) ;
 struct iwl_rx_packet* FUNC_16 (struct iwl_rx_cmd_buffer*) ;
 struct page* FUNC_17 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int *) ;

void FUNC_22(struct iwl_trans *VAR_4,
       struct iwl_rx_cmd_buffer *VAR_5)
{
 struct iwl_rx_packet *VAR_6 = FUNC_16(VAR_5);
 u16 VAR_7 = FUNC_14(VAR_6->hdr.sequence);
 u8 VAR_8;
 u32 VAR_9;
 int VAR_10 = FUNC_4(VAR_7);
 int VAR_11 = FUNC_3(VAR_7);
 int VAR_12;
 struct iwl_device_cmd *VAR_13;
 struct iwl_cmd_meta *VAR_14;
 struct iwl_trans_pcie *VAR_15 = FUNC_1(VAR_4);
 struct iwl_txq *VAR_16 = VAR_15->txq[VAR_15->cmd_queue];




 if (FUNC_5(VAR_10 != VAR_15->cmd_queue,
   "wrong command queue %d (should be %d), sequence 0x%X readp=%d writep=%d\n",
   VAR_10, VAR_15->cmd_queue, VAR_7, VAR_16->read_ptr,
   VAR_16->write_ptr)) {
  FUNC_13(VAR_4, VAR_6, 32);
  return;
 }

 FUNC_18(&VAR_16->lock);

 VAR_12 = FUNC_11(VAR_16, VAR_11);
 VAR_13 = VAR_16->entries[VAR_12].cmd;
 VAR_14 = &VAR_16->entries[VAR_12].meta;
 VAR_8 = VAR_13->hdr.group_id;
 VAR_9 = FUNC_7(VAR_13->hdr.cmd, VAR_8, 0);

 FUNC_12(VAR_4, VAR_14, VAR_16, VAR_11);


 if (VAR_14->flags & VAR_2) {
  struct page *VAR_17 = FUNC_17(VAR_5);

  VAR_14->source->resp_pkt = VAR_6;
  VAR_14->source->_rx_page_addr = (unsigned long)FUNC_15(VAR_17);
  VAR_14->source->_rx_page_order = VAR_15->rx_page_order;
 }

 if (VAR_14->flags & VAR_1)
  FUNC_9(VAR_4->op_mode, VAR_13);

 FUNC_10(VAR_4, VAR_10, VAR_11);

 if (!(VAR_14->flags & VAR_0)) {
  if (!FUNC_20(VAR_3, &VAR_4->status)) {
   FUNC_2(VAR_4,
     "HCMD_ACTIVE already clear for command %s\n",
     FUNC_8(VAR_4, VAR_9));
  }
  FUNC_6(VAR_3, &VAR_4->status);
  FUNC_0(VAR_4, "Clearing HCMD_ACTIVE for command %s\n",
          FUNC_8(VAR_4, VAR_9));
  FUNC_21(&VAR_15->wait_command_queue);
 }

 VAR_14->flags = 0;

 FUNC_19(&VAR_16->lock);
}
