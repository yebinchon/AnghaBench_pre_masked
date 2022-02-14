
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic {unsigned int wq_count; unsigned int cq_count; unsigned int intr_count; int vdev; int shost; int err_intr_offset; int pdev; int intr; int wq; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,unsigned int,unsigned int,int ) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(struct snic *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_6->wq);
 unsigned int VAR_8 = VAR_2;
 unsigned int VAR_9 = VAR_7 + VAR_8 + 1;





 FUNC_1((FUNC_0(VAR_6->wq) + VAR_2) >
   FUNC_0(VAR_6->intr));

 if (VAR_6->wq_count < VAR_7 || VAR_6->cq_count < VAR_7 + VAR_8)
  goto fail;

 if (FUNC_3(VAR_6->pdev, VAR_9, VAR_9, VAR_1) < 0)
  goto fail;

 VAR_6->wq_count = VAR_7;
 VAR_6->cq_count = VAR_7 + VAR_8;
 VAR_6->intr_count = VAR_9;
 VAR_6->err_intr_offset = VAR_3;

 FUNC_2(VAR_6->shost, "Using MSI-X Interrupts\n");
 FUNC_4(VAR_6->vdev, VAR_4);
 return 0;
fail:
 FUNC_4(VAR_6->vdev, VAR_5);
 return -VAR_0;
}
