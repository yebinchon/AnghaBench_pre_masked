
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {void* intr_count; void* cq_count; void* rq_count; void* wq_count; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,void*,void*,void*,void*) ;
 int FUNC_1 (struct enic*) ;
 void* FUNC_2 (int ,int ) ;

void FUNC_3(struct enic *VAR_4)
{
 VAR_4->wq_count = FUNC_2(VAR_4->vdev, VAR_3);
 VAR_4->rq_count = FUNC_2(VAR_4->vdev, VAR_2);
 VAR_4->cq_count = FUNC_2(VAR_4->vdev, VAR_0);
 VAR_4->intr_count = FUNC_2(VAR_4->vdev,
  VAR_1);

 FUNC_0(FUNC_1(VAR_4),
  "vNIC resources avail: wq %d rq %d cq %d intr %d\n",
  VAR_4->wq_count, VAR_4->rq_count,
  VAR_4->cq_count, VAR_4->intr_count);
}
