
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {scalar_t__ numqueues; size_t numvtaps; size_t queue_index; int enabled; int queue_list; int next; struct file* file; int sk; int * taps; int tap; } ;
struct tap_dev {scalar_t__ numqueues; size_t numvtaps; size_t queue_index; int enabled; int queue_list; int next; struct file* file; int sk; int * taps; int tap; } ;
struct file {struct tap_queue* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,struct tap_queue*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tap_dev *VAR_2, struct file *VAR_3,
    struct tap_queue *VAR_4)
{
 if (VAR_2->numqueues == VAR_1)
  return -VAR_0;

 FUNC_1(VAR_4->tap, VAR_2);
 FUNC_1(VAR_2->taps[VAR_2->numvtaps], VAR_4);
 FUNC_2(&VAR_4->sk);

 VAR_4->file = VAR_3;
 VAR_4->queue_index = VAR_2->numvtaps;
 VAR_4->enabled = 1;
 VAR_3->private_data = VAR_4;
 FUNC_0(&VAR_4->next, &VAR_2->queue_list);

 VAR_2->numvtaps++;
 VAR_2->numqueues++;

 return 0;
}
