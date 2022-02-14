
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
struct common_obj {TYPE_4__* next_frm; TYPE_4__* cur_frm; int irqlock; int dma_queue; } ;
struct TYPE_6__ {int frm_fmt; } ;
struct TYPE_7__ {TYPE_1__ std_info; } ;
struct channel_obj {int field_id; scalar_t__ channel_id; TYPE_2__ vpifparams; struct common_obj* common; } ;
typedef int irqreturn_t ;
struct TYPE_10__ {int timestamp; } ;
struct TYPE_8__ {TYPE_5__ vb2_buf; } ;
struct TYPE_9__ {TYPE_3__ vb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__** VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,struct common_obj*) ;
 int FUNC_3 (struct common_obj*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 struct vpif_device VAR_5 ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct vpif_device *VAR_8 = &VAR_5;
 struct channel_obj *VAR_9;
 struct common_obj *VAR_10;
 int VAR_11 = -1, VAR_12;
 int VAR_13;

 VAR_13 = *(int *)(VAR_7);
 if (!FUNC_8(VAR_13 + 2))
  return VAR_1;

 VAR_9 = VAR_8->dev[VAR_13];
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_10 = &VAR_9->common[VAR_12];


  if (1 == VAR_9->vpifparams.std_info.frm_fmt) {
   FUNC_4(&VAR_10->irqlock);
   if (FUNC_1(&VAR_10->dma_queue)) {
    FUNC_5(&VAR_10->irqlock);
    continue;
   }
   FUNC_5(&VAR_10->irqlock);


   if (!VAR_4[VAR_12][VAR_13]) {


    VAR_10->cur_frm->vb.vb2_buf.timestamp =
      FUNC_0();
    FUNC_6(&VAR_10->cur_frm->vb.vb2_buf,
      VAR_2);

    VAR_10->cur_frm = VAR_10->next_frm;
   }

   VAR_4[VAR_12][VAR_13] = 0;
   FUNC_3(VAR_10);
  } else {



   if (VAR_4[VAR_12][VAR_13]) {
    VAR_4[VAR_12][VAR_13] = 0;
    continue;
   }

   if (0 == VAR_12) {
    VAR_9->field_id ^= 1;

    VAR_11 = FUNC_7(VAR_9->channel_id + 2);

    if (VAR_11 != VAR_9->field_id) {

     if (0 == VAR_11)
      VAR_9->field_id = VAR_11;

     return VAR_0;
    }
   }
   FUNC_2(VAR_11, VAR_10);
  }
 }

 return VAR_0;
}
