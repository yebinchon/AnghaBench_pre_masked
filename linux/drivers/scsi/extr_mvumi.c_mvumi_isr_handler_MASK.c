
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mvumi_hba {int global_isr; int isr_status; scalar_t__ fw_state; TYPE_4__* shost; TYPE_3__* regs; TYPE_2__* pdev; TYPE_1__* instancet; } ;
typedef int irqreturn_t ;
struct TYPE_8__ {int host_lock; } ;
struct TYPE_7__ {int int_dl_cpu2pciea; int int_comaout; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ (* clear_intr ) (struct mvumi_hba*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mvumi_hba*) ;
 int FUNC_2 (struct mvumi_hba*) ;
 int FUNC_3 (struct mvumi_hba*,int) ;
 int FUNC_4 (struct mvumi_hba*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 scalar_t__ FUNC_7 (struct mvumi_hba*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct mvumi_hba *VAR_8 = (struct mvumi_hba *) VAR_7;
 unsigned long VAR_9;

 FUNC_5(VAR_8->shost->host_lock, VAR_9);
 if (FUNC_8(VAR_8->instancet->clear_intr(VAR_8) || !VAR_8->global_isr)) {
  FUNC_6(VAR_8->shost->host_lock, VAR_9);
  return VAR_5;
 }

 if (VAR_8->global_isr & VAR_8->regs->int_dl_cpu2pciea) {
  if (VAR_8->isr_status & (VAR_0 | VAR_1))
   FUNC_3(VAR_8, VAR_8->isr_status);
  if (VAR_8->isr_status & VAR_2) {
   FUNC_0(&VAR_8->pdev->dev, "enter handshake again!\n");
   FUNC_2(VAR_8);
  }

 }

 if (VAR_8->global_isr & VAR_8->regs->int_comaout)
  FUNC_4(VAR_8);

 VAR_8->global_isr = 0;
 VAR_8->isr_status = 0;
 if (VAR_8->fw_state == VAR_3)
  FUNC_1(VAR_8);
 FUNC_6(VAR_8->shost->host_lock, VAR_9);
 return VAR_4;
}
