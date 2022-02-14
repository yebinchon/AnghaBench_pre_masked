
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int function; int * ops; } ;
struct TYPE_6__ {int ctrl_handler; TYPE_3__ entity; int flags; int * internal_ops; } ;
struct TYPE_8__ {int flags; } ;
struct ov8856 {int mutex; TYPE_1__ sd; TYPE_4__ pad; int * cur_mode; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 struct ov8856* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ov8856*) ;
 int FUNC_8 (struct ov8856*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * VAR_8 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_9)
{
 struct ov8856 *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_6(&VAR_9->dev);
 if (VAR_11) {
  FUNC_0(&VAR_9->dev, "failed to check HW configuration: %d",
   VAR_11);
  return VAR_11;
 }

 VAR_10 = FUNC_1(&VAR_9->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_14(&VAR_10->sd, VAR_9, &VAR_7);
 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11) {
  FUNC_0(&VAR_9->dev, "failed to find sensor: %d", VAR_11);
  return VAR_11;
 }

 FUNC_5(&VAR_10->mutex);
 VAR_10->cur_mode = &VAR_8[0];
 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11) {
  FUNC_0(&VAR_9->dev, "failed to init controls: %d", VAR_11);
  goto probe_error_v4l2_ctrl_handler_free;
 }

 VAR_10->sd.internal_ops = &VAR_5;
 VAR_10->sd.flags |= VAR_4;
 VAR_10->sd.entity.ops = &VAR_6;
 VAR_10->sd.entity.function = VAR_2;
 VAR_10->pad.flags = VAR_3;
 VAR_11 = FUNC_3(&VAR_10->sd.entity, 1, &VAR_10->pad);
 if (VAR_11) {
  FUNC_0(&VAR_9->dev, "failed to init entity pads: %d", VAR_11);
  goto probe_error_v4l2_ctrl_handler_free;
 }

 VAR_11 = FUNC_12(&VAR_10->sd);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_9->dev, "failed to register V4L2 subdev: %d",
   VAR_11);
  goto probe_error_media_entity_cleanup;
 }





 FUNC_11(&VAR_9->dev);
 FUNC_9(&VAR_9->dev);
 FUNC_10(&VAR_9->dev);

 return 0;

probe_error_media_entity_cleanup:
 FUNC_2(&VAR_10->sd.entity);

probe_error_v4l2_ctrl_handler_free:
 FUNC_13(VAR_10->sd.ctrl_handler);
 FUNC_4(&VAR_10->mutex);

 return VAR_11;
}
