
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start_channel; } ;
struct knav_range_info {int queue_base; int flags; int num_queues; TYPE_1__ acc_info; struct knav_device* kdev; } ;
struct knav_queue_inst {scalar_t__ notify_needed; } ;
struct knav_device {int base_id; int dev; } ;
struct knav_acc_channel {int channel; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct knav_queue_inst*) ;
 struct knav_queue_inst* FUNC_2 (struct knav_device*,struct knav_range_info*,int) ;

__attribute__((used)) static void FUNC_3(struct knav_range_info *VAR_1,
    struct knav_acc_channel *VAR_2)
{
 struct knav_device *VAR_3 = VAR_1->kdev;
 struct knav_queue_inst *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = VAR_3->base_id + VAR_1->queue_base;

 if (VAR_1->flags & VAR_0) {
  for (VAR_6 = 0; VAR_6 < VAR_1->num_queues; VAR_6++) {
   VAR_4 = FUNC_2(VAR_3, VAR_1,
        VAR_6);
   if (VAR_4->notify_needed) {
    VAR_4->notify_needed = 0;
    FUNC_0(VAR_3->dev, "acc-irq: notifying %d\n",
     VAR_5 + VAR_6);
    FUNC_1(VAR_4);
   }
  }
 } else {
  VAR_6 = VAR_2->channel - VAR_1->acc_info.start_channel;
  VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_6);
  FUNC_0(VAR_3->dev, "acc-irq: notifying %d\n",
   VAR_5 + VAR_6);
  FUNC_1(VAR_4);
 }
}
