
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int * ops; } ;
struct TYPE_14__ {int * dev; int owner; int * internal_ops; TYPE_4__ entity; int flags; } ;
struct TYPE_11__ {int height; int width; } ;
struct TYPE_15__ {int height; int width; } ;
struct smiapp_subdev {unsigned short npads; unsigned short source_pad; size_t sink_pad; TYPE_5__ sd; TYPE_3__* pads; TYPE_2__ compose; TYPE_2__* crop; TYPE_9__ sink_fmt; struct smiapp_sensor* sensor; } ;
struct TYPE_10__ {int name; } ;
struct smiapp_sensor {struct smiapp_subdev* src; struct smiapp_subdev* pixel_array; TYPE_1__ minfo; } ;
struct i2c_client {int dev; } ;
struct TYPE_12__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct smiapp_subdev*,TYPE_9__*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct i2c_client* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,struct i2c_client*,int ,char const*) ;
 int FUNC_3 (TYPE_5__*,struct i2c_client*) ;
 int FUNC_4 (TYPE_5__*,int *) ;

__attribute__((used)) static void FUNC_5(struct smiapp_sensor *VAR_7,
     struct smiapp_subdev *VAR_8, const char *VAR_9,
     unsigned short VAR_10)
{
 struct i2c_client *VAR_11 = FUNC_1(&VAR_7->src->sd);

 if (!VAR_8)
  return;

 if (VAR_8 != VAR_7->src)
  FUNC_4(&VAR_8->sd, &VAR_6);

 VAR_8->sd.flags |= VAR_3;
 VAR_8->sensor = VAR_7;

 VAR_8->npads = VAR_10;
 VAR_8->source_pad = VAR_10 - 1;

 FUNC_2(&VAR_8->sd, VAR_11, VAR_7->minfo.name, VAR_9);

 FUNC_0(VAR_8, &VAR_8->sink_fmt);

 VAR_8->compose.width = VAR_8->sink_fmt.width;
 VAR_8->compose.height = VAR_8->sink_fmt.height;
 VAR_8->crop[VAR_8->source_pad] = VAR_8->compose;
 VAR_8->pads[VAR_8->source_pad].flags = VAR_1;
 if (VAR_8 != VAR_7->pixel_array) {
  VAR_8->crop[VAR_8->sink_pad] = VAR_8->compose;
  VAR_8->pads[VAR_8->sink_pad].flags = VAR_0;
 }

 VAR_8->sd.entity.ops = &VAR_4;

 if (VAR_8 == VAR_7->src)
  return;

 VAR_8->sd.internal_ops = &VAR_5;
 VAR_8->sd.owner = VAR_2;
 VAR_8->sd.dev = &VAR_11->dev;
 FUNC_3(&VAR_8->sd, VAR_11);
}
