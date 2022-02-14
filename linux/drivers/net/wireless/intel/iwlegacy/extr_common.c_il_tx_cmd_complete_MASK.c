
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int write_ptr; int read_ptr; } ;
struct il_tx_queue {int time_stamp; struct il_cmd_meta* meta; struct il_device_cmd** cmd; TYPE_4__ q; } ;
struct TYPE_5__ {int sequence; } ;
struct il_rx_pkt {TYPE_1__ hdr; } ;
struct il_rx_buf {int * page; } ;
struct il_priv {size_t cmd_queue; int hcmd_lock; int wait_command_queue; int status; int pci_dev; struct il_tx_queue* txq; } ;
struct TYPE_7__ {int cmd; } ;
struct il_device_cmd {TYPE_3__ hdr; } ;
struct il_cmd_meta {int flags; int (* callback ) (struct il_priv*,struct il_device_cmd*,struct il_rx_pkt*) ;TYPE_2__* source; } ;
struct TYPE_6__ {unsigned long reply_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int,char*,int,int,int ,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct il_cmd_meta*,int ) ;
 int FUNC_6 (struct il_cmd_meta*,int ) ;
 int FUNC_7 (TYPE_4__*,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct il_priv*,int,int,int) ;
 int FUNC_10 (struct il_priv*,struct il_rx_pkt*,int) ;
 int VAR_5 ;
 int FUNC_11 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int ,int ,int ,int ) ;
 struct il_rx_pkt* FUNC_13 (struct il_rx_buf*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct il_priv*,struct il_device_cmd*,struct il_rx_pkt*) ;
 int FUNC_17 (int *) ;

void
FUNC_18(struct il_priv *VAR_8, struct il_rx_buf *VAR_9)
{
 struct il_rx_pkt *VAR_10 = FUNC_13(VAR_9);
 u16 VAR_11 = FUNC_11(VAR_10->hdr.sequence);
 int VAR_12 = FUNC_2(VAR_11);
 int VAR_13 = FUNC_1(VAR_11);
 int VAR_14;
 bool VAR_15 = !!(VAR_10->hdr.sequence & VAR_3);
 struct il_device_cmd *VAR_16;
 struct il_cmd_meta *VAR_17;
 struct il_tx_queue *VAR_18 = &VAR_8->txq[VAR_8->cmd_queue];
 unsigned long VAR_19;




 if (FUNC_3
     (VAR_12 != VAR_8->cmd_queue,
      "wrong command queue %d (should be %d), sequence 0x%X readp=%d writep=%d\n",
      VAR_12, VAR_8->cmd_queue, VAR_11, VAR_8->txq[VAR_8->cmd_queue].q.read_ptr,
      VAR_8->txq[VAR_8->cmd_queue].q.write_ptr)) {
  FUNC_10(VAR_8, VAR_10, 32);
  return;
 }

 VAR_14 = FUNC_7(&VAR_18->q, VAR_13, VAR_15);
 VAR_16 = VAR_18->cmd[VAR_14];
 VAR_17 = &VAR_18->meta[VAR_14];

 VAR_18->time_stamp = VAR_5;

 FUNC_12(VAR_8->pci_dev, FUNC_5(VAR_17, VAR_7),
    FUNC_6(VAR_17, VAR_6), VAR_2);


 if (VAR_17->flags & VAR_1) {
  VAR_17->source->reply_page = (unsigned long)FUNC_13(VAR_9);
  VAR_9->page = ((void*)0);
 } else if (VAR_17->callback)
  VAR_17->callback(VAR_8, VAR_16, VAR_10);

 FUNC_14(&VAR_8->hcmd_lock, VAR_19);

 FUNC_9(VAR_8, VAR_12, VAR_13, VAR_14);

 if (!(VAR_17->flags & VAR_0)) {
  FUNC_4(VAR_4, &VAR_8->status);
  FUNC_0("Clearing HCMD_ACTIVE for command %s\n",
         FUNC_8(VAR_16->hdr.cmd));
  FUNC_17(&VAR_8->wait_command_queue);
 }


 VAR_17->flags = 0;

 FUNC_15(&VAR_8->hcmd_lock, VAR_19);
}
