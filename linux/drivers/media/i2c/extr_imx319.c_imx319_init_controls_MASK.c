
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct v4l2_ctrl_handler {int error; int * lock; } ;
struct imx319_mode {int fll_def; int height; int fll_min; int llp; int width; } ;
struct TYPE_5__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct imx319 {int link_def_freq; TYPE_2__ sd; void* vflip; void* hflip; void* exposure; TYPE_1__* hblank; void* vblank; struct imx319_mode* cur_mode; void* pixel_rate; TYPE_3__* link_freq; int mutex; struct v4l2_ctrl_handler ctrl_handler; } ;
struct i2c_client {int dev; } ;
typedef int s64 ;
struct TYPE_6__ {int flags; } ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (struct v4l2_ctrl_handler*) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int) ;
 TYPE_3__* FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,int ,int ) ;
 void* FUNC_6 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,int ,int ,int ) ;
 struct i2c_client* FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct imx319 *VAR_26)
{
 struct i2c_client *VAR_27 = FUNC_8(&VAR_26->sd);
 struct v4l2_ctrl_handler *VAR_28;
 s64 VAR_29;
 s64 VAR_30;
 s64 VAR_31;
 s64 VAR_32;
 u64 VAR_33;
 const struct imx319_mode *VAR_34;
 u32 VAR_35;
 int VAR_36;

 VAR_28 = &VAR_26->ctrl_handler;
 VAR_36 = FUNC_4(VAR_28, 10);
 if (VAR_36)
  return VAR_36;

 VAR_28->lock = &VAR_26->mutex;
 VAR_35 = FUNC_0(VAR_25) - 1;
 VAR_26->link_freq = FUNC_5(VAR_28, &VAR_23,
         VAR_17, VAR_35, 0,
         VAR_25);
 if (VAR_26->link_freq)
  VAR_26->link_freq->flags |= VAR_22;


 VAR_33 = VAR_26->link_def_freq * 2 * 4;
 FUNC_2(VAR_33, 10);

 VAR_26->pixel_rate = FUNC_6(VAR_28, &VAR_23,
            VAR_18, VAR_33,
            VAR_33, 1, VAR_33);


 VAR_34 = VAR_26->cur_mode;
 VAR_30 = VAR_34->fll_def - VAR_34->height;
 VAR_31 = VAR_34->fll_min - VAR_34->height;
 VAR_26->vblank = FUNC_6(VAR_28, &VAR_23,
        VAR_20, VAR_31,
        VAR_11 - VAR_34->height,
        1, VAR_30);

 VAR_32 = VAR_34->llp - VAR_34->width;
 VAR_26->hblank = FUNC_6(VAR_28, &VAR_23,
        VAR_15, VAR_32, VAR_32,
        1, VAR_32);
 if (VAR_26->hblank)
  VAR_26->hblank->flags |= VAR_22;


 VAR_29 = VAR_34->fll_def - 18;
 VAR_26->exposure = FUNC_6(VAR_28, &VAR_23,
          VAR_14,
          VAR_9, VAR_29,
          VAR_10,
          VAR_8);

 VAR_26->hflip = FUNC_6(VAR_28, &VAR_23,
       VAR_16, 0, 1, 1, 0);
 VAR_26->vflip = FUNC_6(VAR_28, &VAR_23,
       VAR_21, 0, 1, 1, 0);

 FUNC_6(VAR_28, &VAR_23, VAR_12,
     VAR_2, VAR_1,
     VAR_3, VAR_0);


 FUNC_6(VAR_28, &VAR_23, VAR_13,
     VAR_6, VAR_5,
     VAR_7, VAR_4);

 FUNC_7(VAR_28, &VAR_23,
         VAR_19,
         FUNC_0(VAR_24) - 1,
         0, 0, VAR_24);
 if (VAR_28->error) {
  VAR_36 = VAR_28->error;
  FUNC_1(&VAR_27->dev, "control init failed: %d", VAR_36);
  goto error;
 }

 VAR_26->sd.ctrl_handler = VAR_28;

 return 0;

error:
 FUNC_3(VAR_28);

 return VAR_36;
}
