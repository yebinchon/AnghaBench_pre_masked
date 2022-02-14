
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; int * lock; } ;
struct TYPE_8__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct ov5670 {TYPE_3__ sd; void* exposure; TYPE_2__* cur_mode; TYPE_1__* hblank; void* vblank; void* pixel_rate; TYPE_4__* link_freq; int mutex; struct v4l2_ctrl_handler ctrl_handler; } ;
typedef scalar_t__ s64 ;
struct TYPE_10__ {scalar_t__ pixel_rate; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_7__ {scalar_t__ vts_def; scalar_t__ width; scalar_t__ height; scalar_t__ vts_min; } ;
struct TYPE_6__ {int flags; } ;


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
 TYPE_5__* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct v4l2_ctrl_handler*) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 TYPE_4__* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ov5670 *VAR_25)
{
 struct v4l2_ctrl_handler *VAR_26;
 s64 VAR_27;
 s64 VAR_28;
 s64 VAR_29;
 s64 VAR_30;
 int VAR_31;

 VAR_26 = &VAR_25->ctrl_handler;
 VAR_31 = FUNC_2(VAR_26, 8);
 if (VAR_31)
  return VAR_31;

 VAR_26->lock = &VAR_25->mutex;
 VAR_25->link_freq = FUNC_3(VAR_26,
         &VAR_23,
         VAR_16,
         0, 0, VAR_22);
 if (VAR_25->link_freq)
  VAR_25->link_freq->flags |= VAR_20;


 VAR_25->pixel_rate = FUNC_4(VAR_26, &VAR_23,
            VAR_17, 0,
            VAR_21[0].pixel_rate,
            1,
            VAR_21[0].pixel_rate);

 VAR_27 = VAR_11 - VAR_25->cur_mode->height;
 VAR_28 = VAR_25->cur_mode->vts_def - VAR_25->cur_mode->height;
 VAR_29 = VAR_25->cur_mode->vts_min - VAR_25->cur_mode->height;
 VAR_25->vblank = FUNC_4(VAR_26, &VAR_23,
        VAR_19, VAR_29,
        VAR_27, 1, VAR_28);

 VAR_25->hblank = FUNC_4(
    VAR_26, &VAR_23, VAR_15,
    VAR_10 - VAR_25->cur_mode->width,
    VAR_10 - VAR_25->cur_mode->width, 1,
    VAR_10 - VAR_25->cur_mode->width);
 if (VAR_25->hblank)
  VAR_25->hblank->flags |= VAR_20;


 FUNC_4(VAR_26, &VAR_23, VAR_12,
     VAR_2, VAR_1, VAR_3,
     VAR_0);


 FUNC_4(VAR_26, &VAR_23, VAR_13,
     VAR_6, VAR_5,
     VAR_7, VAR_4);


 VAR_30 = VAR_25->cur_mode->vts_def - 8;
 VAR_25->exposure = FUNC_4(VAR_26, &VAR_23,
          VAR_14,
          VAR_8,
          VAR_30, VAR_9,
          VAR_30);

 FUNC_5(VAR_26, &VAR_23,
         VAR_18,
         FUNC_0(VAR_24) - 1,
         0, 0, VAR_24);

 if (VAR_26->error) {
  VAR_31 = VAR_26->error;
  goto error;
 }

 VAR_25->sd.ctrl_handler = VAR_26;

 return 0;

error:
 FUNC_1(VAR_26);

 return VAR_31;
}
