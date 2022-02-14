
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct smiapp_sensor {int* limits; TYPE_5__* src; void* pixel_rate_csi; int mutex; void* hflip; TYPE_4__* pixel_array; void* pixel_rate_parray; TYPE_2__* hblank; TYPE_1__* vblank; void* vflip; void* exposure; void* analog_gain; } ;
struct i2c_client {int dev; } ;
struct TYPE_16__ {int error; int * lock; } ;
struct TYPE_15__ {TYPE_7__* ctrl_handler; } ;
struct TYPE_14__ {TYPE_7__ ctrl_handler; TYPE_6__ sd; } ;
struct TYPE_12__ {TYPE_7__* ctrl_handler; } ;
struct TYPE_13__ {TYPE_7__ ctrl_handler; TYPE_3__ sd; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,unsigned int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int,void**) ;
 int FUNC_4 (TYPE_7__*,int) ;
 void* FUNC_5 (TYPE_7__*,int *,int ,int,int,int,int) ;
 int FUNC_6 (TYPE_7__*,int *,int ,scalar_t__,int ,int ,int ) ;
 struct i2c_client* FUNC_7 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_8(struct smiapp_sensor *VAR_15)
{
 struct i2c_client *VAR_16 = FUNC_7(&VAR_15->src->sd);
 int VAR_17;

 VAR_17 = FUNC_4(&VAR_15->pixel_array->ctrl_handler, 12);
 if (VAR_17)
  return VAR_17;

 VAR_15->pixel_array->ctrl_handler.lock = &VAR_15->mutex;

 VAR_15->analog_gain = FUNC_5(
  &VAR_15->pixel_array->ctrl_handler, &VAR_13,
  VAR_4,
  VAR_15->limits[VAR_2],
  VAR_15->limits[VAR_1],
  FUNC_2(VAR_15->limits[VAR_3], 1U),
  VAR_15->limits[VAR_2]);


 VAR_15->exposure = FUNC_5(
  &VAR_15->pixel_array->ctrl_handler, &VAR_13,
  VAR_5, 0, 0, 1, 0);

 VAR_15->hflip = FUNC_5(
  &VAR_15->pixel_array->ctrl_handler, &VAR_13,
  VAR_7, 0, 1, 1, 0);
 VAR_15->vflip = FUNC_5(
  &VAR_15->pixel_array->ctrl_handler, &VAR_13,
  VAR_11, 0, 1, 1, 0);

 VAR_15->vblank = FUNC_5(
  &VAR_15->pixel_array->ctrl_handler, &VAR_13,
  VAR_10, 0, 1, 1, 0);

 if (VAR_15->vblank)
  VAR_15->vblank->flags |= VAR_12;

 VAR_15->hblank = FUNC_5(
  &VAR_15->pixel_array->ctrl_handler, &VAR_13,
  VAR_6, 0, 1, 1, 0);

 if (VAR_15->hblank)
  VAR_15->hblank->flags |= VAR_12;

 VAR_15->pixel_rate_parray = FUNC_5(
  &VAR_15->pixel_array->ctrl_handler, &VAR_13,
  VAR_8, 1, VAR_0, 1, 1);

 FUNC_6(&VAR_15->pixel_array->ctrl_handler,
         &VAR_13, VAR_9,
         FUNC_0(VAR_14) - 1,
         0, 0, VAR_14);

 if (VAR_15->pixel_array->ctrl_handler.error) {
  FUNC_1(&VAR_16->dev,
   "pixel array controls initialization failed (%d)\n",
   VAR_15->pixel_array->ctrl_handler.error);
  return VAR_15->pixel_array->ctrl_handler.error;
 }

 VAR_15->pixel_array->sd.ctrl_handler =
  &VAR_15->pixel_array->ctrl_handler;

 FUNC_3(2, &VAR_15->hflip);

 VAR_17 = FUNC_4(&VAR_15->src->ctrl_handler, 0);
 if (VAR_17)
  return VAR_17;

 VAR_15->src->ctrl_handler.lock = &VAR_15->mutex;

 VAR_15->pixel_rate_csi = FUNC_5(
  &VAR_15->src->ctrl_handler, &VAR_13,
  VAR_8, 1, VAR_0, 1, 1);

 if (VAR_15->src->ctrl_handler.error) {
  FUNC_1(&VAR_16->dev,
   "src controls initialization failed (%d)\n",
   VAR_15->src->ctrl_handler.error);
  return VAR_15->src->ctrl_handler.error;
 }

 VAR_15->src->sd.ctrl_handler = &VAR_15->src->ctrl_handler;

 return 0;
}
