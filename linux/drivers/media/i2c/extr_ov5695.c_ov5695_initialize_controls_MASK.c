
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_ctrl_handler {int error; int * lock; } ;
struct v4l2_ctrl {int flags; } ;
struct ov5695_mode {scalar_t__ exp_def; scalar_t__ vts_def; scalar_t__ height; scalar_t__ width; scalar_t__ hts_def; } ;
struct TYPE_6__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct ov5695 {TYPE_3__ subdev; TYPE_2__* client; int test_pattern; void* digi_gain; void* anal_gain; void* exposure; void* vblank; TYPE_1__* hblank; int mutex; struct ov5695_mode* cur_mode; struct v4l2_ctrl_handler ctrl_handler; } ;
typedef scalar_t__ s64 ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 struct v4l2_ctrl* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ov5695 *VAR_24)
{
 const struct ov5695_mode *VAR_25;
 struct v4l2_ctrl_handler *VAR_26;
 struct v4l2_ctrl *VAR_27;
 s64 VAR_28, VAR_29;
 u32 VAR_30;
 int VAR_31;

 VAR_26 = &VAR_24->ctrl_handler;
 VAR_25 = VAR_24->cur_mode;
 VAR_31 = FUNC_3(VAR_26, 8);
 if (VAR_31)
  return VAR_31;
 VAR_26->lock = &VAR_24->mutex;

 VAR_27 = FUNC_4(VAR_26, ((void*)0), VAR_16,
          0, 0, VAR_21);
 if (VAR_27)
  VAR_27->flags |= VAR_20;

 FUNC_5(VAR_26, ((void*)0), VAR_17,
     0, VAR_10, 1, VAR_10);

 VAR_30 = VAR_25->hts_def - VAR_25->width;
 VAR_24->hblank = FUNC_5(VAR_26, ((void*)0), VAR_15,
    VAR_30, VAR_30, 1, VAR_30);
 if (VAR_24->hblank)
  VAR_24->hblank->flags |= VAR_20;

 VAR_29 = VAR_25->vts_def - VAR_25->height;
 VAR_24->vblank = FUNC_5(VAR_26, &VAR_22,
    VAR_19, VAR_29,
    VAR_11 - VAR_25->height,
    1, VAR_29);

 VAR_28 = VAR_25->vts_def - 4;
 VAR_24->exposure = FUNC_5(VAR_26, &VAR_22,
    VAR_14, VAR_8,
    VAR_28, VAR_9,
    VAR_25->exp_def);

 VAR_24->anal_gain = FUNC_5(VAR_26, &VAR_22,
    VAR_12, VAR_2,
    VAR_1, VAR_3,
    VAR_0);


 VAR_24->digi_gain = FUNC_5(VAR_26, &VAR_22,
    VAR_13, VAR_6,
    VAR_5, VAR_7,
    VAR_4);

 VAR_24->test_pattern = FUNC_6(VAR_26,
    &VAR_22, VAR_18,
    FUNC_0(VAR_23) - 1,
    0, 0, VAR_23);

 if (VAR_26->error) {
  VAR_31 = VAR_26->error;
  FUNC_1(&VAR_24->client->dev,
   "Failed to init controls(%d)\n", VAR_31);
  goto err_free_handler;
 }

 VAR_24->subdev.ctrl_handler = VAR_26;

 return 0;

err_free_handler:
 FUNC_2(VAR_26);

 return VAR_31;
}
