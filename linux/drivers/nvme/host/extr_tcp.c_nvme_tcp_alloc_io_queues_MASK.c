
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {unsigned int queue_count; int device; } ;


 int FUNC_0 (struct nvme_ctrl*) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct nvme_ctrl*,unsigned int*) ;
 unsigned int FUNC_3 (struct nvme_ctrl*) ;
 int FUNC_4 (struct nvme_ctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct nvme_ctrl *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = FUNC_2(VAR_0, &VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_0->queue_count = VAR_1 + 1;
 if (VAR_0->queue_count < 2)
  return 0;

 FUNC_1(VAR_0->device,
  "creating %d I/O queues.\n", VAR_1);

 FUNC_4(VAR_0, VAR_1);

 return FUNC_0(VAR_0);
}
