
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ cb; } ;
struct iwl_txq {int high_mark; scalar_t__ write_ptr; scalar_t__ read_ptr; int lock; scalar_t__ wd_timeout; int stuck_timer; TYPE_2__* entries; int overflow_q; } ;
struct iwl_tx_cmd_gen3 {int len; } ;
struct iwl_tx_cmd_gen2 {int len; } ;
struct iwl_trans_pcie {int dev_cmd_offs; int queue_used; struct iwl_txq** txq; } ;
struct iwl_trans {TYPE_3__* trans_cfg; } ;
struct TYPE_5__ {int sequence; } ;
struct iwl_device_cmd {scalar_t__ payload; TYPE_1__ hdr; } ;
struct iwl_cmd_meta {scalar_t__ flags; } ;
struct TYPE_8__ {scalar_t__ nr_frags; } ;
struct TYPE_7__ {scalar_t__ device_family; } ;
struct TYPE_6__ {struct iwl_cmd_meta meta; struct iwl_device_cmd* cmd; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct iwl_trans_pcie*) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (struct iwl_trans*,struct iwl_txq*,struct iwl_device_cmd*,struct sk_buff*,struct iwl_cmd_meta*) ;
 int FUNC_9 (struct iwl_trans*,void*) ;
 int FUNC_10 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_11 (struct iwl_trans_pcie*,struct iwl_txq*,int ,int ) ;
 int FUNC_12 (struct iwl_txq*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct iwl_trans*,scalar_t__) ;
 int FUNC_14 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_15 (struct iwl_trans*,struct iwl_txq*) ;
 scalar_t__ VAR_3 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,scalar_t__) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 TYPE_4__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int,int ) ;
 scalar_t__ FUNC_23 (int) ;

int FUNC_24(struct iwl_trans *VAR_4, struct sk_buff *VAR_5,
      struct iwl_device_cmd *VAR_6, int VAR_7)
{
 struct iwl_trans_pcie *VAR_8 = FUNC_2(VAR_4);
 struct iwl_cmd_meta *VAR_9;
 struct iwl_txq *VAR_10 = VAR_8->txq[VAR_7];
 u16 VAR_11;
 int VAR_12;
 void *VAR_13;

 if (FUNC_4(!FUNC_22(VAR_7, VAR_8->queue_used),
        "TX on unused queue %d\n", VAR_7))
  return -VAR_0;

 if (FUNC_18(VAR_5) &&
     FUNC_19(VAR_5)->nr_frags > FUNC_1(VAR_8) &&
     FUNC_5(VAR_5))
  return -VAR_1;

 FUNC_20(&VAR_10->lock);

 if (FUNC_14(VAR_4, VAR_10) < VAR_10->high_mark) {
  FUNC_15(VAR_4, VAR_10);


  if (FUNC_23(FUNC_14(VAR_4, VAR_10) < 3)) {
   struct iwl_device_cmd **VAR_14;

   VAR_14 = (void *)((u8 *)VAR_5->cb +
            VAR_8->dev_cmd_offs);

   *VAR_14 = VAR_6;
   FUNC_6(&VAR_10->overflow_q, VAR_5);
   FUNC_21(&VAR_10->lock);
   return 0;
  }
 }

 VAR_12 = FUNC_12(VAR_10, VAR_10->write_ptr);


 VAR_10->entries[VAR_12].skb = VAR_5;
 VAR_10->entries[VAR_12].cmd = VAR_6;

 VAR_6->hdr.sequence =
  FUNC_7((u16)(FUNC_3(VAR_7) |
       FUNC_0(VAR_12)));


 VAR_9 = &VAR_10->entries[VAR_12].meta;
 VAR_9->flags = 0;

 VAR_13 = FUNC_8(VAR_4, VAR_10, VAR_6, VAR_5, VAR_9);
 if (!VAR_13) {
  FUNC_21(&VAR_10->lock);
  return -1;
 }

 if (VAR_4->trans_cfg->device_family >= VAR_2) {
  struct iwl_tx_cmd_gen3 *VAR_15 =
   (void *)VAR_6->payload;

  VAR_11 = FUNC_16(VAR_15->len);
 } else {
  struct iwl_tx_cmd_gen2 *VAR_16 =
   (void *)VAR_6->payload;

  VAR_11 = FUNC_16(VAR_16->len);
 }


 FUNC_11(VAR_8, VAR_10, VAR_11,
          FUNC_9(VAR_4, VAR_13));


 if (VAR_10->read_ptr == VAR_10->write_ptr && VAR_10->wd_timeout)
  FUNC_17(&VAR_10->stuck_timer, VAR_3 + VAR_10->wd_timeout);


 VAR_10->write_ptr = FUNC_13(VAR_4, VAR_10->write_ptr);
 FUNC_10(VAR_4, VAR_10);




 FUNC_21(&VAR_10->lock);
 return 0;
}
