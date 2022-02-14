
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_rdma_queue {scalar_t__ cm_error; int cm_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct nvme_rdma_queue *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_2->cm_done,
   FUNC_1(VAR_1) + 1);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 == 0)
  return -VAR_0;
 FUNC_0(VAR_2->cm_error > 0);
 return VAR_2->cm_error;
}
