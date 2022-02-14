
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int field; } ;
struct TYPE_8__ {TYPE_1__ pix; } ;
struct TYPE_9__ {TYPE_2__ fmt; } ;
struct vpfe_device {scalar_t__ cur_frm; scalar_t__ next_frm; int field_id; TYPE_5__* cfg; int dma_queue_lock; int dma_queue; int v4l2_dev; int started; TYPE_3__ fmt; } ;
typedef int irqreturn_t ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_10__ {int (* getfid ) () ;int (* reset ) () ;} ;
struct TYPE_12__ {TYPE_4__ hw_ops; } ;
struct TYPE_11__ {int (* clr_intr ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int *,char*,...) ;
 int FUNC_7 (struct vpfe_device*) ;
 int FUNC_8 (struct vpfe_device*) ;
 int FUNC_9 (struct vpfe_device*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 struct vpfe_device *VAR_7 = VAR_6;
 enum v4l2_field VAR_8;
 int VAR_9;

 FUNC_6(1, VAR_4, &VAR_7->v4l2_dev, "\nStarting vpfe_isr...\n");
 VAR_8 = VAR_7->fmt.fmt.pix.field;


 if (!VAR_7->started)
  goto clear_intr;


 if (VAR_3->hw_ops.reset)
  VAR_3->hw_ops.reset();

 if (VAR_8 == VAR_1) {

  FUNC_6(1, VAR_4, &VAR_7->v4l2_dev,
   "frame format is progressive...\n");
  if (VAR_7->cur_frm != VAR_7->next_frm)
   FUNC_7(VAR_7);
  goto clear_intr;
 }


 VAR_9 = VAR_3->hw_ops.getfid();


 VAR_7->field_id ^= 1;
 FUNC_6(1, VAR_4, &VAR_7->v4l2_dev, "field id = %x:%x.\n",
  VAR_9, VAR_7->field_id);
 if (VAR_9 == VAR_7->field_id) {

  if (VAR_9 == 0) {




   if (VAR_7->cur_frm != VAR_7->next_frm)
    FUNC_7(VAR_7);





   if (VAR_8 == VAR_2)
    FUNC_8(VAR_7);
   goto clear_intr;
  }






  FUNC_1(&VAR_7->dma_queue_lock);
  if (!FUNC_0(&VAR_7->dma_queue) &&
      VAR_7->cur_frm == VAR_7->next_frm)
   FUNC_9(VAR_7);
  FUNC_2(&VAR_7->dma_queue_lock);
 } else if (VAR_9 == 0) {




  VAR_7->field_id = VAR_9;
 }
clear_intr:
 if (VAR_7->cfg->clr_intr)
  VAR_7->cfg->clr_intr(VAR_5);

 return VAR_0;
}
