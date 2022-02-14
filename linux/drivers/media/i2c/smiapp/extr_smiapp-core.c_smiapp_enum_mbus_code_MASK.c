
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_mbus_code_enum {unsigned int pad; int index; int code; } ;
struct v4l2_subdev {int name; } ;
struct smiapp_sensor {int mbus_frame_fmts; int mutex; TYPE_2__* internal_csi_format; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_7__ {int code; } ;
struct TYPE_6__ {int code; } ;
struct TYPE_5__ {struct v4l2_subdev sd; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,char*,int,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* VAR_2 ;
 struct smiapp_sensor* FUNC_4 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_mbus_code_enum *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_3);
 struct smiapp_sensor *VAR_7 = FUNC_4(VAR_3);
 unsigned int VAR_8;
 int VAR_9 = -1;
 int VAR_10 = -VAR_0;

 FUNC_2(&VAR_7->mutex);

 FUNC_1(&VAR_6->dev, "subdev %s, pad %d, index %d\n",
  VAR_3->name, VAR_5->pad, VAR_5->index);

 if (VAR_3 != &VAR_7->src->sd || VAR_5->pad != VAR_1) {
  if (VAR_5->index)
   goto out;

  VAR_5->code = VAR_7->internal_csi_format->code;
  VAR_10 = 0;
  goto out;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  if (VAR_7->mbus_frame_fmts & (1 << VAR_8))
   VAR_9++;

  if (VAR_9 == VAR_5->index) {
   VAR_5->code = VAR_2[VAR_8].code;
   FUNC_1(&VAR_6->dev, "found index %d, i %d, code %x\n",
    VAR_5->index, VAR_8, VAR_5->code);
   VAR_10 = 0;
   break;
  }
 }

out:
 FUNC_3(&VAR_7->mutex);

 return VAR_10;
}
