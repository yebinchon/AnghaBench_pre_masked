
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdebug_queued_cmd {struct scsi_cmnd* a_cmnd; } ;
struct sdebug_queue {int qc_lock; int in_use_bm; struct sdebug_queued_cmd* qc_arr; } ;
struct sdebug_dev_info {int num_in_q; } ;
struct sdebug_defer {int aborted; int qc_idx; int sqa_idx; scalar_t__ issuing_cpu; int defer_t; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct sdebug_dev_info*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sdebug_queue* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct sdebug_defer *VAR_9)
{
 bool VAR_10 = VAR_9->aborted;
 int VAR_11;
 int VAR_12 = 0;
 unsigned long VAR_13;
 struct sdebug_queue *VAR_14;
 struct sdebug_queued_cmd *VAR_15;
 struct scsi_cmnd *VAR_16;
 struct sdebug_dev_info *VAR_17;

 VAR_9->defer_t = VAR_1;
 if (FUNC_13(VAR_10))
  VAR_9->aborted = 0;
 VAR_11 = VAR_9->qc_idx;
 VAR_14 = VAR_6 + VAR_9->sqa_idx;
 if (VAR_7) {
  FUNC_1(&VAR_3);
  if (FUNC_8() != VAR_9->issuing_cpu)
   FUNC_1(&VAR_5);
 }
 if (FUNC_13((VAR_11 < 0) || (VAR_11 >= VAR_0))) {
  FUNC_6("wild qc_idx=%d\n", VAR_11);
  return;
 }
 FUNC_9(&VAR_14->qc_lock, VAR_13);
 VAR_15 = &VAR_14->qc_arr[VAR_11];
 VAR_16 = VAR_15->a_cmnd;
 if (FUNC_13(VAR_16 == ((void*)0))) {
  FUNC_10(&VAR_14->qc_lock, VAR_13);
  FUNC_6("scp is NULL, sqa_idx=%d, qc_idx=%d\n",
         VAR_9->sqa_idx, VAR_11);
  return;
 }
 VAR_17 = (struct sdebug_dev_info *)VAR_16->device->hostdata;
 if (FUNC_5(VAR_17))
  FUNC_0(&VAR_17->num_in_q);
 else
  FUNC_6("devip=NULL\n");
 if (FUNC_13(FUNC_2(&VAR_2) > 0))
  VAR_12 = 1;

 VAR_15->a_cmnd = ((void*)0);
 if (FUNC_13(!FUNC_12(VAR_11, VAR_14->in_use_bm))) {
  FUNC_10(&VAR_14->qc_lock, VAR_13);
  FUNC_6("Unexpected completion\n");
  return;
 }

 if (FUNC_13(VAR_12)) {
  int VAR_18, VAR_19;

  VAR_19 = FUNC_2(&VAR_2);
  if (VAR_11 >= VAR_19) {
   FUNC_10(&VAR_14->qc_lock, VAR_13);
   FUNC_6("index %d too large\n", VAR_19);
   return;
  }
  VAR_18 = FUNC_4(VAR_14->in_use_bm, VAR_19);
  if ((VAR_18 < VAR_4) || (VAR_18 == VAR_19))
   FUNC_3(&VAR_2, 0);
  else
   FUNC_3(&VAR_2, VAR_18 + 1);
 }
 FUNC_10(&VAR_14->qc_lock, VAR_13);
 if (FUNC_13(VAR_10)) {
  if (VAR_8)
   FUNC_7("bypassing scsi_done() due to aborted cmd\n");
  return;
 }
 VAR_16->scsi_done(VAR_16);
}
