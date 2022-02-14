
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; int * lock; } ;
struct TYPE_7__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct ov8856 {TYPE_3__ sd; void* exposure; TYPE_2__* cur_mode; TYPE_1__* hblank; void* vblank; void* pixel_rate; TYPE_4__* link_freq; int mutex; struct v4l2_ctrl_handler ctrl_handler; } ;
typedef scalar_t__ s64 ;
struct TYPE_8__ {int flags; } ;
struct TYPE_6__ {scalar_t__ vts_def; scalar_t__ width; int link_freq_index; int hts; scalar_t__ height; scalar_t__ vts_min; } ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 TYPE_4__* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,int ,int ) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ov8856 *VAR_24)
{
 struct v4l2_ctrl_handler *VAR_25;
 s64 VAR_26, VAR_27;
 int VAR_28;

 VAR_25 = &VAR_24->ctrl_handler;
 VAR_28 = FUNC_3(VAR_25, 8);
 if (VAR_28)
  return VAR_28;

 VAR_25->lock = &VAR_24->mutex;
 VAR_24->link_freq = FUNC_4(VAR_25, &VAR_22,
        VAR_16,
        FUNC_0(VAR_21) - 1,
        0, VAR_21);
 if (VAR_24->link_freq)
  VAR_24->link_freq->flags |= VAR_20;

 VAR_24->pixel_rate = FUNC_5(VAR_25, &VAR_22,
           VAR_17, 0,
           FUNC_1(VAR_10),
           1,
           FUNC_1(VAR_10));
 VAR_24->vblank = FUNC_5(VAR_25, &VAR_22,
     VAR_19,
     VAR_24->cur_mode->vts_min - VAR_24->cur_mode->height,
     VAR_11 - VAR_24->cur_mode->height, 1,
     VAR_24->cur_mode->vts_def - VAR_24->cur_mode->height);
 VAR_27 = FUNC_2(VAR_24->cur_mode->hts,
    VAR_24->cur_mode->link_freq_index) - VAR_24->cur_mode->width;
 VAR_24->hblank = FUNC_5(VAR_25, &VAR_22,
        VAR_15, VAR_27, VAR_27, 1,
        VAR_27);
 if (VAR_24->hblank)
  VAR_24->hblank->flags |= VAR_20;

 FUNC_5(VAR_25, &VAR_22, VAR_12,
     VAR_1, VAR_0,
     VAR_2, VAR_1);
 FUNC_5(VAR_25, &VAR_22, VAR_13,
     VAR_5, VAR_4,
     VAR_6, VAR_3);
 VAR_26 = VAR_24->cur_mode->vts_def - VAR_7;
 VAR_24->exposure = FUNC_5(VAR_25, &VAR_22,
          VAR_14,
          VAR_8, VAR_26,
          VAR_9,
          VAR_26);
 FUNC_6(VAR_25, &VAR_22,
         VAR_18,
         FUNC_0(VAR_23) - 1,
         0, 0, VAR_23);
 if (VAR_25->error)
  return VAR_25->error;

 VAR_24->sd.ctrl_handler = VAR_25;

 return 0;
}
