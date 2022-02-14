
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int field; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct vpfe_device {scalar_t__ cur_frm; scalar_t__ next_frm; int field; int ccdc; int dma_queue_lock; int dma_queue; TYPE_3__ fmt; } ;
typedef int irqreturn_t ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct vpfe_device*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct vpfe_device*) ;
 int FUNC_8 (struct vpfe_device*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct vpfe_device *VAR_8 = (struct vpfe_device *)VAR_7;
 enum v4l2_field VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(&VAR_8->ccdc, VAR_3);

 if (VAR_10 & VAR_4) {
  VAR_9 = VAR_8->fmt.fmt.pix.field;

  if (VAR_9 == VAR_1) {

   if (VAR_8->cur_frm != VAR_8->next_frm)
    FUNC_5(VAR_8);
   goto next_intr;
  }



  VAR_11 = FUNC_3(&VAR_8->ccdc);


  VAR_8->field ^= 1;
  if (VAR_11 == VAR_8->field) {

   if (VAR_11 == 0) {





    if (VAR_8->cur_frm != VAR_8->next_frm)
     FUNC_5(VAR_8);





    if (VAR_9 == VAR_2)
     FUNC_7(VAR_8);

    goto next_intr;
   }






   FUNC_1(&VAR_8->dma_queue_lock);
   if (!FUNC_0(&VAR_8->dma_queue) &&
       VAR_8->cur_frm == VAR_8->next_frm)
    FUNC_8(VAR_8);
   FUNC_2(&VAR_8->dma_queue_lock);
  } else if (VAR_11 == 0) {




   VAR_8->field = VAR_11;
  }
 }

next_intr:
 if (VAR_10 & VAR_5) {
  FUNC_1(&VAR_8->dma_queue_lock);
  if (VAR_8->fmt.fmt.pix.field == VAR_1 &&
      !FUNC_0(&VAR_8->dma_queue) &&
      VAR_8->cur_frm == VAR_8->next_frm)
   FUNC_8(VAR_8);
  FUNC_2(&VAR_8->dma_queue_lock);
 }

 FUNC_4(&VAR_8->ccdc, VAR_10);

 return VAR_0;
}
