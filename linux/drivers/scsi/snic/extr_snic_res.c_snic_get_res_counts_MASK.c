
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic {scalar_t__ wq_count; scalar_t__ cq_count; scalar_t__ intr_count; int vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int ) ;

void
FUNC_2(struct snic *VAR_3)
{
 VAR_3->wq_count = FUNC_1(VAR_3->vdev, VAR_2);
 FUNC_0(VAR_3->wq_count == 0);
 VAR_3->cq_count = FUNC_1(VAR_3->vdev, VAR_0);
 FUNC_0(VAR_3->cq_count == 0);
 VAR_3->intr_count = FUNC_1(VAR_3->vdev,
        VAR_1);
 FUNC_0(VAR_3->intr_count == 0);
}
