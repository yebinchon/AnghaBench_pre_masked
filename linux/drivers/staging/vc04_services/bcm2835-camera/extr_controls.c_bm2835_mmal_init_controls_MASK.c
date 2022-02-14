
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct v4l2_ctrl_handler {int error; } ;
struct bm2835_mmal_v4l2_ctrl {int type; int def; int max; int min; int id; int imenu; int step; } ;
struct bm2835_mmal_dev {TYPE_1__** ctrls; } ;
struct TYPE_8__ {int v4l2_scene; } ;
struct TYPE_7__ {void* priv; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,int,int ) ;
 TYPE_5__* VAR_4 ;
 int FUNC_3 (int ,TYPE_1__**,int ,int ) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int) ;
 TYPE_1__* FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_6 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_7 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 struct bm2835_mmal_v4l2_ctrl* VAR_5 ;

int FUNC_8(struct bm2835_mmal_dev *VAR_6,
         struct v4l2_ctrl_handler *VAR_7)
{
 int VAR_8;
 const struct bm2835_mmal_v4l2_ctrl *VAR_9;

 FUNC_4(VAR_7, VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_9 = &VAR_5[VAR_8];

  switch (VAR_9->type) {
  case 129:
   VAR_6->ctrls[VAR_8] =
    FUNC_6(VAR_7,
        &VAR_3,
        VAR_9->id, VAR_9->min,
        VAR_9->max, VAR_9->step,
        VAR_9->def);
   break;

  case 128:
  {
   u64 VAR_10 = VAR_9->min;

   if (VAR_9->id == VAR_0) {





    int VAR_11;

    VAR_10 = FUNC_1(VAR_2);
    for (VAR_11 = 0;
         VAR_11 < FUNC_0(VAR_4);
         VAR_11++) {
     VAR_10 |= FUNC_1(VAR_4[VAR_11].v4l2_scene);
    }
    VAR_10 = ~VAR_10;
   }

   VAR_6->ctrls[VAR_8] =
    FUNC_7(VAR_7,
             &VAR_3,
             VAR_9->id, VAR_9->max,
             VAR_10, VAR_9->def);
   break;
  }

  case 130:
   VAR_6->ctrls[VAR_8] =
    FUNC_5(VAR_7,
             &VAR_3,
             VAR_9->id, VAR_9->max,
             VAR_9->def, VAR_9->imenu);
   break;

  case 131:

   continue;
  }

  if (VAR_7->error)
   break;

  VAR_6->ctrls[VAR_8]->priv = (void *)VAR_9;
 }

 if (VAR_7->error) {
  FUNC_2("error adding control %d/%d id 0x%x\n", VAR_8,
         VAR_1, VAR_9->id);
  return VAR_7->error;
 }

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_9 = &VAR_5[VAR_8];

  switch (VAR_9->type) {
  case 131:
   FUNC_3(VAR_9->min,
            &VAR_6->ctrls[VAR_8 + 1],
            VAR_9->max,
            VAR_9->def);
   break;

  case 129:
  case 128:
  case 130:
   break;
  }
 }

 return 0;
}
