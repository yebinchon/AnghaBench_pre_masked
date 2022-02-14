
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ field; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct TYPE_7__ {TYPE_2__ fmt; } ;
struct vpfe_device {scalar_t__ cur_frm; scalar_t__ next_frm; TYPE_4__* cfg; int dma_queue_lock; int dma_queue; TYPE_3__ fmt; int started; int v4l2_dev; } ;
typedef int irqreturn_t ;
struct TYPE_8__ {int (* clr_intr ) (int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int *,char*) ;
 int FUNC_6 (struct vpfe_device*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct vpfe_device *VAR_5 = VAR_4;

 FUNC_5(1, VAR_2, &VAR_5->v4l2_dev, "\nInside vdint1_isr...\n");


 if (!VAR_5->started) {
  if (VAR_5->cfg->clr_intr)
   VAR_5->cfg->clr_intr(VAR_3);
  return VAR_0;
 }

 FUNC_1(&VAR_5->dma_queue_lock);
 if ((VAR_5->fmt.fmt.pix.field == VAR_1) &&
     !FUNC_0(&VAR_5->dma_queue) &&
     VAR_5->cur_frm == VAR_5->next_frm)
  FUNC_6(VAR_5);
 FUNC_2(&VAR_5->dma_queue_lock);

 if (VAR_5->cfg->clr_intr)
  VAR_5->cfg->clr_intr(VAR_3);

 return VAR_0;
}
