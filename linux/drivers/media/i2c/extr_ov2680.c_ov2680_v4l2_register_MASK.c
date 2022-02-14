
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; int * lock; } ;
struct TYPE_11__ {int function; } ;
struct TYPE_10__ {TYPE_5__ entity; struct v4l2_ctrl_handler* ctrl_handler; int flags; } ;
struct TYPE_12__ {int flags; } ;
struct ov2680_ctrls {void* auto_exp; void* auto_gain; TYPE_2__* exposure; TYPE_1__* gain; int test_pattern; void* hflip; void* vflip; struct v4l2_ctrl_handler handler; } ;
struct ov2680_dev {TYPE_3__ sd; int lock; TYPE_6__ pad; int i2c_client; struct ov2680_ctrls ctrls; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int flags; } ;


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
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int,TYPE_6__*) ;
 struct v4l2_ctrl_ops VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,void**,int,int) ;
 int FUNC_5 (struct v4l2_ctrl_handler*) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_7 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int,int,int) ;
 void* FUNC_8 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int ,int ) ;
 int FUNC_9 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops*,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int *) ;

__attribute__((used)) static int FUNC_11(struct ov2680_dev *VAR_16)
{
 const struct v4l2_ctrl_ops *VAR_17 = &VAR_13;
 struct ov2680_ctrls *VAR_18 = &VAR_16->ctrls;
 struct v4l2_ctrl_handler *VAR_19 = &VAR_18->handler;
 int VAR_20 = 0;

 FUNC_10(&VAR_16->sd, VAR_16->i2c_client,
        &VAR_14);




 VAR_16->pad.flags = VAR_1;
 VAR_16->sd.entity.function = VAR_0;

 VAR_20 = FUNC_2(&VAR_16->sd.entity, 1, &VAR_16->pad);
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_6(VAR_19, 7);

 VAR_19->lock = &VAR_16->lock;

 VAR_18->vflip = FUNC_7(VAR_19, VAR_17, VAR_8, 0, 1, 1, 0);
 VAR_18->hflip = FUNC_7(VAR_19, VAR_17, VAR_6, 0, 1, 1, 0);

 VAR_18->test_pattern = FUNC_9(VAR_19,
     &VAR_13, VAR_7,
     FUNC_0(VAR_15) - 1,
     0, 0, VAR_15);

 VAR_18->auto_exp = FUNC_8(VAR_19, VAR_17,
       VAR_4,
       VAR_11, 0,
       VAR_10);

 VAR_18->exposure = FUNC_7(VAR_19, VAR_17, VAR_3,
         0, 32767, 1, 0);

 VAR_18->auto_gain = FUNC_7(VAR_19, VAR_17, VAR_2,
          0, 1, 1, 1);
 VAR_18->gain = FUNC_7(VAR_19, VAR_17, VAR_5, 0, 2047, 1, 0);

 if (VAR_19->error) {
  VAR_20 = VAR_19->error;
  goto cleanup_entity;
 }

 VAR_18->gain->flags |= VAR_9;
 VAR_18->exposure->flags |= VAR_9;

 FUNC_4(2, &VAR_18->auto_gain, 0, 1);
 FUNC_4(2, &VAR_18->auto_exp, 1, 1);

 VAR_16->sd.ctrl_handler = VAR_19;

 VAR_20 = FUNC_3(&VAR_16->sd);
 if (VAR_20 < 0)
  goto cleanup_entity;

 return 0;

cleanup_entity:
 FUNC_1(&VAR_16->sd.entity);
 FUNC_5(VAR_19);

 return VAR_20;
}
