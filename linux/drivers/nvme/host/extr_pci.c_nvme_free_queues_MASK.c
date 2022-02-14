
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue_count; } ;
struct nvme_dev {int * queues; TYPE_1__ ctrl; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nvme_dev *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_0->ctrl.queue_count - 1; VAR_2 >= VAR_1; VAR_2--) {
  VAR_0->ctrl.queue_count--;
  FUNC_0(&VAR_0->queues[VAR_2]);
 }
}
