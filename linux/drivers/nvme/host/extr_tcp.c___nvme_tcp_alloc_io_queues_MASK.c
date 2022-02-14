
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int queue_count; scalar_t__ sqsize; } ;


 int FUNC_0 (struct nvme_ctrl*,int,scalar_t__) ;
 int FUNC_1 (struct nvme_ctrl*,int) ;

__attribute__((used)) static int FUNC_2(struct nvme_ctrl *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 1; VAR_1 < VAR_0->queue_count; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1,
    VAR_0->sqsize + 1);
  if (VAR_2)
   goto out_free_queues;
 }

 return 0;

out_free_queues:
 for (VAR_1--; VAR_1 >= 1; VAR_1--)
  FUNC_1(VAR_0, VAR_1);

 return VAR_2;
}
