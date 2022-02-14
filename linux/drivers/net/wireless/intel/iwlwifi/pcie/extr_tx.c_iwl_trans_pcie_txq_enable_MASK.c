
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_txq {int ampdu; int read_ptr; int write_ptr; int wd_timeout; } ;
struct iwl_trans_txq_scd_cfg {int fifo; int frame_limit; int tid; int sta_id; scalar_t__ aggregate; } ;
struct iwl_trans_pcie {int cmd_queue; scalar_t__ scd_set_active; scalar_t__ scd_base_addr; int queue_used; struct iwl_txq** txq; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {int mq_rx_supported; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct iwl_trans*,char*,int,int,...) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int,char*,int) ;
 int VAR_6 ;
 int FUNC_9 (struct iwl_trans*,int,int) ;
 int FUNC_10 (struct iwl_trans*,int ) ;
 int FUNC_11 (struct iwl_trans*,int) ;
 int FUNC_12 (struct iwl_trans*,int) ;
 int FUNC_13 (struct iwl_trans*,int) ;
 int FUNC_14 (struct iwl_trans*,int) ;
 int FUNC_15 (struct iwl_trans*,scalar_t__,int) ;
 int FUNC_16 (struct iwl_trans*,int ,int) ;
 int FUNC_17 (struct iwl_trans*,int ,int) ;
 int FUNC_18 (unsigned int) ;
 scalar_t__ FUNC_19 (int,int ) ;

bool FUNC_20(struct iwl_trans *VAR_7, int VAR_8, u16 VAR_9,
          const struct iwl_trans_txq_scd_cfg *VAR_10,
          unsigned int VAR_11)
{
 struct iwl_trans_pcie *VAR_12 = FUNC_3(VAR_7);
 struct iwl_txq *VAR_13 = VAR_12->txq[VAR_8];
 int VAR_14 = -1;
 bool VAR_15 = 0;

 if (FUNC_19(VAR_8, VAR_12->queue_used))
  FUNC_8(1, "queue %d already used - expect issues", VAR_8);

 VAR_13->wd_timeout = FUNC_18(VAR_11);

 if (VAR_10) {
  VAR_14 = VAR_10->fifo;


  if (VAR_8 == VAR_12->cmd_queue &&
      VAR_12->scd_set_active)
   FUNC_10(VAR_7, 0);


  FUNC_14(VAR_7, VAR_8);


  if (VAR_8 != VAR_12->cmd_queue)
   FUNC_13(VAR_7, VAR_8);

  if (VAR_10->aggregate) {
   u16 VAR_16 = FUNC_1(VAR_10->sta_id, VAR_10->tid);


   FUNC_9(VAR_7, VAR_16, VAR_8);


   FUNC_12(VAR_7, VAR_8);
   VAR_13->ampdu = 1;
  } else {





   FUNC_11(VAR_7, VAR_8);

   VAR_9 = VAR_13->read_ptr;
  }
 } else {
  VAR_15 = !VAR_7->trans_cfg->mq_rx_supported &&
   !((VAR_9 - VAR_13->write_ptr) & 0x3f) &&
   (VAR_9 != VAR_13->write_ptr);
  if (VAR_15)
   VAR_9++;
 }



 VAR_13->read_ptr = (VAR_9 & 0xff);
 VAR_13->write_ptr = (VAR_9 & 0xff);
 FUNC_16(VAR_7, VAR_1,
      (VAR_9 & 0xff) | (VAR_8 << 8));

 if (VAR_10) {
  u8 VAR_17 = VAR_10->frame_limit;

  FUNC_17(VAR_7, FUNC_6(VAR_8), VAR_9);


  FUNC_15(VAR_7, VAR_12->scd_base_addr +
    FUNC_4(VAR_8), 0);
  FUNC_15(VAR_7,
   VAR_12->scd_base_addr +
   FUNC_4(VAR_8) + sizeof(u32),
   FUNC_5(VAR_6, VAR_17) |
   FUNC_5(VAR_0, VAR_17));


  FUNC_17(VAR_7, FUNC_7(VAR_8),
          (1 << VAR_3) |
          (VAR_10->fifo << VAR_4) |
          (1 << VAR_5) |
          VAR_2);


  if (VAR_8 == VAR_12->cmd_queue &&
      VAR_12->scd_set_active)
   FUNC_10(VAR_7, FUNC_0(VAR_8));

  FUNC_2(VAR_7,
        "Activate queue %d on FIFO %d WrPtr: %d\n",
        VAR_8, VAR_14, VAR_9 & 0xff);
 } else {
  FUNC_2(VAR_7,
        "Activate queue %d WrPtr: %d\n",
        VAR_8, VAR_9 & 0xff);
 }

 return VAR_15;
}
