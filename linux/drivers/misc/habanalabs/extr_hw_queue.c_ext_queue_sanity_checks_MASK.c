
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_hw_queue {size_t hw_queue_id; } ;
struct hl_device {int dev; TYPE_1__* completion_queue; } ;
typedef int atomic_t ;
struct TYPE_2__ {int free_slots_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct hl_hw_queue*,int ) ;

__attribute__((used)) static int FUNC_4(struct hl_device *VAR_2,
    struct hl_hw_queue *VAR_3, int VAR_4,
    bool VAR_5)
{
 atomic_t *VAR_6 =
   &VAR_2->completion_queue[VAR_3->hw_queue_id].free_slots_cnt;
 int VAR_7;


 VAR_7 = FUNC_3(VAR_3, VAR_1);

 if (VAR_7 < VAR_4) {
  FUNC_2(VAR_2->dev, "Queue %d doesn't have room for %d CBs\n",
   VAR_3->hw_queue_id, VAR_4);
  return -VAR_0;
 }

 if (VAR_5) {







  if (FUNC_1(VAR_4 * -1, VAR_6)) {
   FUNC_2(VAR_2->dev, "No space for %d on CQ %d\n",
    VAR_4, VAR_3->hw_queue_id);
   FUNC_0(VAR_4, VAR_6);
   return -VAR_0;
  }
 }

 return 0;
}
