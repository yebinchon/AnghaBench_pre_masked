
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,char*) ;
 TYPE_2__* VAR_14 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct cxl_context*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cxl_context*,int,int ) ;
 int FUNC_7 (struct cxl_context*,int ,int ) ;
 int FUNC_8 (struct cxl_context*,int,int,int) ;
 int FUNC_9 (int *) ;

irqreturn_t FUNC_10(int VAR_15, struct cxl_context *VAR_16, struct cxl_irq_info *VAR_17)
{
 u64 VAR_18, VAR_19;

 VAR_18 = VAR_17->dsisr;
 VAR_19 = VAR_17->dar;

 FUNC_8(VAR_16, VAR_15, VAR_18, VAR_19);

 FUNC_2("CXL interrupt %i for afu pe: %i DSISR: %#llx DAR: %#llx\n", VAR_15, VAR_16->pe, VAR_18, VAR_19);

 if (VAR_18 & VAR_3) {
  FUNC_2("Scheduling segment miss handling for later pe: %i\n", VAR_16->pe);
  return FUNC_3(VAR_16, VAR_18, VAR_19);
 }

 if (VAR_18 & VAR_5)
  FUNC_2("CXL interrupt: PTE not found\n");
 if (VAR_18 & VAR_7)
  FUNC_2("CXL interrupt: Storage protection violation\n");
 if (VAR_18 & VAR_0)
  FUNC_2("CXL interrupt: AFU lock access to write through or cache inhibited storage\n");
 if (VAR_18 & VAR_9)
  FUNC_2("CXL interrupt: Access was afu_wr or afu_zero\n");
 if (VAR_18 & VAR_4)
  FUNC_2("CXL interrupt: Access not permitted by virtual page class key protection\n");

 if (VAR_18 & VAR_2) {





  FUNC_2("Scheduling page fault handling for later pe: %i\n", VAR_16->pe);
  return FUNC_3(VAR_16, VAR_18, VAR_19);
 }
 if (VAR_18 & VAR_10)
  FUNC_0(1, "CXL interrupt: Segment Table PTE not found\n");
 if (VAR_18 & VAR_11)
  FUNC_2("CXL interrupt: AURP PTE not found\n");
 if (VAR_18 & VAR_8)
  return VAR_14->handle_psl_slice_error(VAR_16, VAR_18,
      VAR_17->errstat);
 if (VAR_18 & VAR_1) {
  FUNC_2("CXL interrupt: AFU Error 0x%016llx\n", VAR_17->afu_err);

  if (VAR_16->pending_afu_err) {







   FUNC_1(&VAR_16->afu->dev, "CXL AFU Error "
         "undelivered to pe %i: 0x%016llx\n",
         VAR_16->pe, VAR_17->afu_err);
  } else {
   FUNC_4(&VAR_16->lock);
   VAR_16->afu_err = VAR_17->afu_err;
   VAR_16->pending_afu_err = 1;
   FUNC_5(&VAR_16->lock);

   FUNC_9(&VAR_16->wq);
  }

  VAR_14->ack_irq(VAR_16, VAR_12, 0);
  return VAR_13;
 }
 if (VAR_18 & VAR_6)
  FUNC_2("CXL interrupt: OS Context Warning\n");

 FUNC_0(1, "Unhandled CXL PSL IRQ\n");
 return VAR_13;
}
