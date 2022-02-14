
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct v4l2_ctrl_handler {int error; int * lock; } ;
struct v4l2_ctrl {int flags; } ;
struct ov2685_mode {int hts_def; int width; int vts_def; int height; int exp_def; } ;
struct TYPE_6__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct ov2685 {TYPE_3__ subdev; TYPE_2__* client; int test_pattern; void* anal_gain; void* exposure; void* vblank; TYPE_1__* hblank; int mutex; struct ov2685_mode* cur_mode; struct v4l2_ctrl_handler ctrl_handler; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *,char*,int) ;
 int* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 struct v4l2_ctrl* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int*) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ov2685 *VAR_20)
{
 const struct ov2685_mode *VAR_21;
 struct v4l2_ctrl_handler *VAR_22;
 struct v4l2_ctrl *VAR_23;
 u64 VAR_24;
 u32 VAR_25, VAR_26;
 int VAR_27;

 VAR_22 = &VAR_20->ctrl_handler;
 VAR_21 = VAR_20->cur_mode;
 VAR_27 = FUNC_3(VAR_22, 8);
 if (VAR_27)
  return VAR_27;
 VAR_22->lock = &VAR_20->mutex;

 VAR_23 = FUNC_4(VAR_22, ((void*)0), VAR_12,
          0, 0, VAR_17);
 if (VAR_23)
  VAR_23->flags |= VAR_16;

 VAR_25 = (VAR_17[0] * 2 * VAR_7) /
       VAR_0;
 FUNC_5(VAR_22, ((void*)0), VAR_13,
     0, VAR_25, 1, VAR_25);

 VAR_26 = VAR_21->hts_def - VAR_21->width;
 VAR_20->hblank = FUNC_5(VAR_22, ((void*)0), VAR_11,
    VAR_26, VAR_26, 1, VAR_26);
 if (VAR_20->hblank)
  VAR_20->hblank->flags |= VAR_16;

 VAR_20->vblank = FUNC_5(VAR_22, &VAR_18,
    VAR_15, VAR_21->vts_def - VAR_21->height,
    VAR_8 - VAR_21->height, 1,
    VAR_21->vts_def - VAR_21->height);

 VAR_24 = VAR_21->vts_def - 4;
 VAR_20->exposure = FUNC_5(VAR_22, &VAR_18,
    VAR_10, VAR_1,
    VAR_24, VAR_2,
    VAR_21->exp_def);

 VAR_20->anal_gain = FUNC_5(VAR_22, &VAR_18,
    VAR_9, VAR_5,
    VAR_4, VAR_6,
    VAR_3);

 VAR_20->test_pattern = FUNC_6(VAR_22,
    &VAR_18, VAR_14,
    FUNC_0(VAR_19) - 1,
    0, 0, VAR_19);

 if (VAR_22->error) {
  VAR_27 = VAR_22->error;
  FUNC_1(&VAR_20->client->dev,
   "Failed to init controls(%d)\n", VAR_27);
  goto err_free_handler;
 }

 VAR_20->subdev.ctrl_handler = VAR_22;

 return 0;

err_free_handler:
 FUNC_2(VAR_22);

 return VAR_27;
}
