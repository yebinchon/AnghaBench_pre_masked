
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fib {int event_wait; TYPE_3__* hw_fib_va; } ;
struct aac_dev {int adapter_shutdown; int max_msix; TYPE_4__* pdev; scalar_t__ msi; struct aac_dev* aac_msix; int * thread; struct fib* fibs; TYPE_1__* scsi_host_ptr; scalar_t__ aif_thread; int ioctl_mutex; } ;
struct TYPE_10__ {int irq; } ;
struct TYPE_8__ {int XferState; } ;
struct TYPE_9__ {TYPE_2__ header; } ;
struct TYPE_7__ {int can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aac_dev*) ;
 scalar_t__ FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (struct aac_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct aac_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_12(struct aac_dev * VAR_4)
{
 int VAR_5;

 FUNC_7(&VAR_4->ioctl_mutex);
 VAR_4->adapter_shutdown = 1;
 FUNC_8(&VAR_4->ioctl_mutex);

 if (VAR_4->aif_thread) {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < (VAR_4->scsi_host_ptr->can_queue + VAR_0); VAR_6++) {
   struct fib *VAR_7 = &VAR_4->fibs[VAR_6];
   if (!(VAR_7->hw_fib_va->header.XferState & FUNC_4(VAR_2 | VAR_1)) &&
       (VAR_7->hw_fib_va->header.XferState & FUNC_4(VAR_3)))
    FUNC_3(&VAR_7->event_wait);
  }
  FUNC_6(VAR_4->thread);
  VAR_4->thread = ((void*)0);
 }

 FUNC_2(VAR_4);

 FUNC_0(VAR_4);

 if (FUNC_1(VAR_4)) {
  if (VAR_4->max_msix > 1) {
   for (VAR_5 = 0; VAR_5 < VAR_4->max_msix; VAR_5++) {
    FUNC_5(FUNC_11(VAR_4->pdev, VAR_5),
      &(VAR_4->aac_msix[VAR_5]));
   }
  } else {
   FUNC_5(VAR_4->pdev->irq,
     &(VAR_4->aac_msix[0]));
  }
 } else {
  FUNC_5(VAR_4->pdev->irq, VAR_4);
 }
 if (VAR_4->msi)
  FUNC_9(VAR_4->pdev);
 else if (VAR_4->max_msix > 1)
  FUNC_10(VAR_4->pdev);
}
