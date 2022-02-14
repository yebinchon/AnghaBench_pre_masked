
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cxl_irq_info {int dsisr; int dar; int afu_err; int errstat; } ;
struct cxl_context {int pending_afu_err; int wq; int lock; int afu_err; int pe; TYPE_1__* afu; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* ack_irq ) (struct cxl_context*,int ,int ) ;int (* handle_psl_slice_error ) (struct cxl_context*,int,int ) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct cxl_context*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cxl_context*,int,int ) ;
 int FUNC_7 (struct cxl_context*,int ,int ) ;
 int FUNC_8 (struct cxl_context*,int,int,int) ;
 int FUNC_9 (int *) ;

irqreturn_t FUNC_10(int VAR_7, struct cxl_context *VAR_8, struct cxl_irq_info *VAR_9)
{
 u64 VAR_10, VAR_11;

 VAR_10 = VAR_9->dsisr;
 VAR_11 = VAR_9->dar;

 FUNC_8(VAR_8, VAR_7, VAR_10, VAR_11);

 FUNC_2("CXL interrupt %i for afu pe: %i DSISR: %#llx DAR: %#llx\n", VAR_7, VAR_8->pe, VAR_10, VAR_11);

 if (VAR_10 & VAR_3) {
  FUNC_2("CXL interrupt: Scheduling translation fault handling for later (pe: %i)\n", VAR_8->pe);
  return FUNC_3(VAR_8, VAR_10, VAR_11);
 }

 if (VAR_10 & VAR_2)
  return VAR_6->handle_psl_slice_error(VAR_8, VAR_10,
      VAR_9->errstat);
 if (VAR_10 & VAR_0) {
  FUNC_2("CXL interrupt: AFU Error 0x%016llx\n", VAR_9->afu_err);

  if (VAR_8->pending_afu_err) {







   FUNC_1(&VAR_8->afu->dev, "CXL AFU Error undelivered to pe %i: 0x%016llx\n",
         VAR_8->pe, VAR_9->afu_err);
  } else {
   FUNC_4(&VAR_8->lock);
   VAR_8->afu_err = VAR_9->afu_err;
   VAR_8->pending_afu_err = 1;
   FUNC_5(&VAR_8->lock);

   FUNC_9(&VAR_8->wq);
  }

  VAR_6->ack_irq(VAR_8, VAR_4, 0);
  return VAR_5;
 }
 if (VAR_10 & VAR_1)
  FUNC_2("CXL interrupt: OS Context Warning\n");

 FUNC_0(1, "Unhandled CXL PSL IRQ\n");
 return VAR_5;
}
