
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vpif_device {struct channel_obj** dev; } ;
struct TYPE_8__ {scalar_t__ field; } ;
struct TYPE_9__ {TYPE_3__ pix; } ;
struct TYPE_10__ {TYPE_4__ fmt; } ;
struct common_obj {scalar_t__ cur_frm; scalar_t__ next_frm; int irqlock; int dma_queue; TYPE_5__ fmt; } ;
struct TYPE_6__ {int frm_fmt; } ;
struct TYPE_7__ {TYPE_1__ std_info; } ;
struct channel_obj {int field_id; int channel_id; TYPE_2__ vpifparams; struct common_obj* common; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__** VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 struct vpif_device VAR_5 ;
 int FUNC_5 (struct common_obj*) ;
 int FUNC_6 (struct common_obj*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct vpif_device *VAR_8 = &VAR_5;
 struct common_obj *VAR_9;
 struct channel_obj *VAR_10;
 int VAR_11;
 int VAR_12 = -1, VAR_13;

 VAR_11 = *(int *)(VAR_7);
 if (!FUNC_4(VAR_11))
  return VAR_1;

 VAR_10 = VAR_8->dev[VAR_11];

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_9 = &VAR_10->common[VAR_13];


  if (1 == VAR_10->vpifparams.std_info.frm_fmt ||
      VAR_9->fmt.fmt.pix.field == VAR_2) {

   FUNC_1(&VAR_9->irqlock);
   if (FUNC_0(&VAR_9->dma_queue)) {
    FUNC_2(&VAR_9->irqlock);
    continue;
   }
   FUNC_2(&VAR_9->irqlock);

   if (!VAR_4[VAR_13][VAR_11])
    FUNC_5(VAR_9);

   VAR_4[VAR_13][VAR_11] = 0;

   FUNC_6(VAR_9);


   VAR_4[VAR_13][VAR_11] = 0;
  } else {




   if (VAR_4[VAR_13][VAR_11]) {
    VAR_4[VAR_13][VAR_11] = 0;
    continue;
   }
   if (0 == VAR_13) {
    VAR_10->field_id ^= 1;

    VAR_12 = FUNC_3(VAR_10->channel_id);
    if (VAR_12 != VAR_10->field_id) {




     if (0 == VAR_12)
      VAR_10->field_id = VAR_12;
     return VAR_0;
    }
   }

   if (0 == VAR_12) {

    if (VAR_9->cur_frm == VAR_9->next_frm)
     continue;


    FUNC_5(VAR_9);
   } else if (1 == VAR_12) {

    FUNC_1(&VAR_9->irqlock);
    if (FUNC_0(&VAR_9->dma_queue) ||
        (VAR_9->cur_frm != VAR_9->next_frm)) {
     FUNC_2(&VAR_9->irqlock);
     continue;
    }
    FUNC_2(&VAR_9->irqlock);

    FUNC_6(VAR_9);
   }
  }
 }
 return VAR_0;
}
