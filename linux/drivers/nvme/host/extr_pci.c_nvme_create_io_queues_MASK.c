
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int queue_count; } ;
struct nvme_dev {unsigned int max_qid; unsigned int* io_queues; unsigned int online_queues; int * queues; TYPE_1__ ctrl; int q_depth; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 (struct nvme_dev*,unsigned int,int ) ;
 int FUNC_2 (int *,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct nvme_dev *VAR_4)
{
 unsigned VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_5 = VAR_4->ctrl.queue_count; VAR_5 <= VAR_4->max_qid; VAR_5++) {
  if (FUNC_1(VAR_4, VAR_5, VAR_4->q_depth)) {
   VAR_8 = -VAR_0;
   break;
  }
 }

 VAR_6 = FUNC_0(VAR_4->max_qid, VAR_4->ctrl.queue_count - 1);
 if (VAR_6 != 1 && VAR_4->io_queues[VAR_2]) {
  VAR_7 = VAR_4->io_queues[VAR_1] +
    VAR_4->io_queues[VAR_3];
 } else {
  VAR_7 = VAR_6;
 }

 for (VAR_5 = VAR_4->online_queues; VAR_5 <= VAR_6; VAR_5++) {
  bool VAR_9 = VAR_5 > VAR_7;

  VAR_8 = FUNC_2(&VAR_4->queues[VAR_5], VAR_5, VAR_9);
  if (VAR_8)
   break;
 }







 return VAR_8 >= 0 ? 0 : VAR_8;
}
