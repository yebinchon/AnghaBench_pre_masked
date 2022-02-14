
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fnic {unsigned int rq_count; unsigned int raw_wq_count; unsigned int wq_copy_count; unsigned int cq_count; unsigned int wq_count; int intr_count; int vdev; TYPE_1__* lport; scalar_t__ err_intr_offset; int pdev; int wq_copy; int wq; int rq; } ;
struct TYPE_2__ {int host; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct fnic *VAR_9)
{
 unsigned int VAR_10 = FUNC_0(VAR_9->rq);
 unsigned int VAR_11 = FUNC_0(VAR_9->wq);
 unsigned int VAR_12 = FUNC_0(VAR_9->wq_copy);
 if (VAR_9->rq_count >= VAR_10 &&
     VAR_9->raw_wq_count >= VAR_11 &&
     VAR_9->wq_copy_count >= VAR_12 &&
     VAR_9->cq_count >= VAR_10 + VAR_11 + VAR_12) {
  int VAR_13 = VAR_10 + VAR_11 + VAR_12 + 1;

  if (FUNC_2(VAR_9->pdev, VAR_13, VAR_13,
    VAR_4) == VAR_13) {
   VAR_9->rq_count = VAR_10;
   VAR_9->raw_wq_count = VAR_11;
   VAR_9->wq_copy_count = VAR_12;
   VAR_9->wq_count = VAR_11 + VAR_12;
   VAR_9->cq_count = VAR_10 + VAR_11 + VAR_12;
   VAR_9->intr_count = VAR_13;
   VAR_9->err_intr_offset = VAR_1;

   FUNC_1(VAR_2, VAR_9->lport->host,
         "Using MSI-X Interrupts\n");
   FUNC_3(VAR_9->vdev,
            VAR_7);
   return 0;
  }
 }





 if (VAR_9->rq_count >= 1 &&
     VAR_9->raw_wq_count >= 1 &&
     VAR_9->wq_copy_count >= 1 &&
     VAR_9->cq_count >= 3 &&
     VAR_9->intr_count >= 1 &&
     FUNC_2(VAR_9->pdev, 1, 1, VAR_3) == 1) {
  VAR_9->rq_count = 1;
  VAR_9->raw_wq_count = 1;
  VAR_9->wq_copy_count = 1;
  VAR_9->wq_count = 2;
  VAR_9->cq_count = 3;
  VAR_9->intr_count = 1;
  VAR_9->err_intr_offset = 0;

  FUNC_1(VAR_2, VAR_9->lport->host,
        "Using MSI Interrupts\n");
  FUNC_3(VAR_9->vdev, VAR_6);

  return 0;
 }
 if (VAR_9->rq_count >= 1 &&
     VAR_9->raw_wq_count >= 1 &&
     VAR_9->wq_copy_count >= 1 &&
     VAR_9->cq_count >= 3 &&
     VAR_9->intr_count >= 3) {

  VAR_9->rq_count = 1;
  VAR_9->raw_wq_count = 1;
  VAR_9->wq_copy_count = 1;
  VAR_9->cq_count = 3;
  VAR_9->intr_count = 3;

  FUNC_1(VAR_2, VAR_9->lport->host,
        "Using Legacy Interrupts\n");
  FUNC_3(VAR_9->vdev, VAR_5);

  return 0;
 }

 FUNC_3(VAR_9->vdev, VAR_8);

 return -VAR_0;
}
