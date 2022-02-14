
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int dummy; } ;
struct nvme_dev {int ctrl; struct nvme_queue* queues; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvme_queue*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nvme_dev *VAR_0, bool VAR_1)
{
 struct nvme_queue *VAR_2 = &VAR_0->queues[0];

 if (VAR_1)
  FUNC_2(&VAR_0->ctrl);
 else
  FUNC_0(&VAR_0->ctrl);

 FUNC_1(VAR_2, -1);
}
