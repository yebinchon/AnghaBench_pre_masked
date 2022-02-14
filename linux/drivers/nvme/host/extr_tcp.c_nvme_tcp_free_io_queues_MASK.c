
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int queue_count; } ;


 int FUNC_0 (struct nvme_ctrl*,int) ;

__attribute__((used)) static void FUNC_1(struct nvme_ctrl *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 < VAR_0->queue_count; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
