
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_tcp_ctrl {TYPE_1__* queues; } ;
struct nvme_ctrl {int device; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct nvme_ctrl*) ;
 int FUNC_3 (struct nvme_ctrl*,int,int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 struct nvme_tcp_ctrl* FUNC_6 (struct nvme_ctrl*) ;

__attribute__((used)) static int FUNC_7(struct nvme_ctrl *VAR_2, int VAR_3)
{
 struct nvme_tcp_ctrl *VAR_4 = FUNC_6(VAR_2);
 int VAR_5;

 if (VAR_3)
  VAR_5 = FUNC_3(VAR_2, VAR_3, 0);
 else
  VAR_5 = FUNC_2(VAR_2);

 if (!VAR_5) {
  FUNC_4(VAR_1, &VAR_4->queues[VAR_3].flags);
 } else {
  if (FUNC_5(VAR_0, &VAR_4->queues[VAR_3].flags))
   FUNC_0(&VAR_4->queues[VAR_3]);
  FUNC_1(VAR_2->device,
   "failed to connect queue: %d ret=%d\n", VAR_3, VAR_5);
 }
 return VAR_5;
}
