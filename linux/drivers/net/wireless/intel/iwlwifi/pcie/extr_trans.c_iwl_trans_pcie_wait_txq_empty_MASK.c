
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iwl_txq {scalar_t__ write_ptr; scalar_t__ read_ptr; int lock; int overflow_q; int overflow_tx; } ;
struct iwl_trans_pcie {struct iwl_txq** txq; int * queue_used; } ;
struct iwl_trans {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*,int) ;
 int FUNC_1 (struct iwl_trans*,char*,int) ;
 int VAR_3 ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct iwl_trans*,struct iwl_txq*) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int,int *) ;
 int FUNC_11 (unsigned long,scalar_t__) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13(struct iwl_trans *VAR_6, int VAR_7)
{
 struct iwl_trans_pcie *VAR_8 = FUNC_2(VAR_6);
 struct iwl_txq *VAR_9;
 unsigned long VAR_10 = VAR_5;
 bool VAR_11;
 u8 VAR_12;


 if (FUNC_10(VAR_4, &VAR_6->status))
  return -VAR_1;

 if (!FUNC_10(VAR_7, VAR_8->queue_used))
  return -VAR_0;

 FUNC_0(VAR_6, "Emptying queue %d...\n", VAR_7);
 VAR_9 = VAR_8->txq[VAR_7];

 FUNC_8(&VAR_9->lock);
 VAR_11 = VAR_9->overflow_tx ||
        !FUNC_7(&VAR_9->overflow_q);
 FUNC_9(&VAR_9->lock);

 VAR_12 = FUNC_3(VAR_9->write_ptr);

 while ((VAR_9->read_ptr != FUNC_3(VAR_9->write_ptr) ||
  VAR_11) &&
        !FUNC_11(VAR_5,
      VAR_10 + FUNC_6(VAR_3))) {
  u8 VAR_13 = FUNC_3(VAR_9->write_ptr);






  if (FUNC_4(VAR_12 != VAR_13 && !VAR_11,
         "WR pointer moved while flushing %d -> %d\n",
         VAR_12, VAR_13))
   return -VAR_2;
  VAR_12 = VAR_13;

  FUNC_12(1000, 2000);

  FUNC_8(&VAR_9->lock);
  VAR_11 = VAR_9->overflow_tx ||
         !FUNC_7(&VAR_9->overflow_q);
  FUNC_9(&VAR_9->lock);
 }

 if (VAR_9->read_ptr != VAR_9->write_ptr) {
  FUNC_1(VAR_6,
   "fail to flush all tx fifo queues Q %d\n", VAR_7);
  FUNC_5(VAR_6, VAR_9);
  return -VAR_2;
 }

 FUNC_0(VAR_6, "Queue %d is now empty.\n", VAR_7);

 return 0;
}
