
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hl_hw_queue {int ci; struct hl_cs_job** shadow_queue; } ;
struct hl_device {int cq_wq; scalar_t__ disabled; struct hl_hw_queue* kernel_queues; int dev; } ;
struct hl_cs_job {int finish_work; } ;
struct hl_cq_entry {int data; } ;
struct hl_cq {size_t hw_queue_id; size_t ci; int free_slots_cnt; scalar_t__ kernel_address; struct hl_device* hdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,size_t) ;
 int FUNC_3 () ;
 size_t FUNC_4 (size_t) ;
 size_t FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

irqreturn_t FUNC_9(int VAR_7, void *VAR_8)
{
 struct hl_cq *VAR_9 = VAR_8;
 struct hl_device *VAR_10 = VAR_9->hdev;
 struct hl_hw_queue *VAR_11;
 struct hl_cs_job *VAR_12;
 bool VAR_13;
 u16 VAR_14;
 struct hl_cq_entry *VAR_15, *VAR_16;

 if (VAR_10->disabled) {
  FUNC_2(VAR_10->dev,
   "Device disabled but received IRQ %d for CQ %d\n",
   VAR_7, VAR_9->hw_queue_id);
  return VAR_6;
 }

 VAR_16 = (struct hl_cq_entry *) (uintptr_t) VAR_9->kernel_address;

 while (1) {
  bool VAR_17 = ((FUNC_7(VAR_16[VAR_9->ci].data) &
     VAR_0)
      >> VAR_1);

  if (!VAR_17)
   break;

  VAR_15 = (struct hl_cq_entry *) &VAR_16[VAR_9->ci];




  FUNC_3();

  VAR_13 = ((FUNC_7(VAR_15->data) &
     VAR_4)
     >> VAR_5);

  VAR_14 = (u16) ((FUNC_7(VAR_15->data) &
     VAR_2)
     >> VAR_3);

  VAR_11 = &VAR_10->kernel_queues[VAR_9->hw_queue_id];

  if ((VAR_13) && (!VAR_10->disabled)) {
   VAR_12 = VAR_11->shadow_queue[FUNC_5(VAR_14)];
   FUNC_8(VAR_10->cq_wq, &VAR_12->finish_work);
  }






  VAR_11->ci = FUNC_6(VAR_11->ci);


  VAR_15->data = FUNC_1(FUNC_7(VAR_15->data) &
      ~VAR_0);

  VAR_9->ci = FUNC_4(VAR_9->ci);


  FUNC_0(&VAR_9->free_slots_cnt);
 }

 return VAR_6;
}
