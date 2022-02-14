
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct smiapp_sensor {int* limits; int scaling_mode; int scale_m; int mutex; TYPE_9__* hwcfg; TYPE_7__* src; TYPE_5__* scaler; TYPE_3__* pixel_array; TYPE_1__* csi_format; } ;
struct i2c_client {int dev; } ;
struct TYPE_18__ {TYPE_8__* strobe_setup; } ;
struct TYPE_17__ {scalar_t__ trigger; } ;
struct TYPE_16__ {TYPE_6__* crop; int sd; } ;
struct TYPE_15__ {int width; int height; } ;
struct TYPE_14__ {TYPE_4__* crop; } ;
struct TYPE_13__ {int left; int top; int width; int height; } ;
struct TYPE_12__ {TYPE_2__* crop; } ;
struct TYPE_11__ {int left; int top; int width; int height; } ;
struct TYPE_10__ {int width; int compressed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_25 ;
 int FUNC_3 (struct smiapp_sensor*,int ) ;
 int FUNC_4 (struct smiapp_sensor*) ;
 int FUNC_5 (struct smiapp_sensor*) ;
 int FUNC_6 (struct smiapp_sensor*,int ,int) ;
 struct i2c_client* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct smiapp_sensor *VAR_26)
{
 struct i2c_client *VAR_27 = FUNC_7(&VAR_26->src->sd);
 int VAR_28;

 FUNC_1(&VAR_26->mutex);

 VAR_28 = FUNC_6(VAR_26, VAR_10,
       (VAR_26->csi_format->width << 8) |
       VAR_26->csi_format->compressed);
 if (VAR_28)
  goto out;

 VAR_28 = FUNC_4(VAR_26);
 if (VAR_28)
  goto out;


 VAR_28 = FUNC_6(VAR_26, VAR_18,
       VAR_26->pixel_array->crop[VAR_9].left);
 if (VAR_28 < 0)
  goto out;

 VAR_28 = FUNC_6(VAR_26, VAR_21,
       VAR_26->pixel_array->crop[VAR_9].top);
 if (VAR_28 < 0)
  goto out;


 VAR_28 = FUNC_6(
  VAR_26, VAR_17,
  VAR_26->pixel_array->crop[VAR_9].left
  + VAR_26->pixel_array->crop[VAR_9].width - 1);
 if (VAR_28 < 0)
  goto out;

 VAR_28 = FUNC_6(
  VAR_26, VAR_20,
  VAR_26->pixel_array->crop[VAR_9].top
  + VAR_26->pixel_array->crop[VAR_9].height - 1);
 if (VAR_28 < 0)
  goto out;







 if (VAR_26->limits[VAR_3]
     == VAR_0) {
  VAR_28 = FUNC_6(
   VAR_26, VAR_13,
   VAR_26->scaler->crop[VAR_7].left);
  if (VAR_28 < 0)
   goto out;

  VAR_28 = FUNC_6(
   VAR_26, VAR_14,
   VAR_26->scaler->crop[VAR_7].top);
  if (VAR_28 < 0)
   goto out;

  VAR_28 = FUNC_6(
   VAR_26, VAR_12,
   VAR_26->scaler->crop[VAR_7].width);
  if (VAR_28 < 0)
   goto out;

  VAR_28 = FUNC_6(
   VAR_26, VAR_11,
   VAR_26->scaler->crop[VAR_7].height);
  if (VAR_28 < 0)
   goto out;
 }


 if (VAR_26->limits[VAR_5]
     != VAR_24) {
  VAR_28 = FUNC_6(VAR_26, VAR_16,
        VAR_26->scaling_mode);
  if (VAR_28 < 0)
   goto out;

  VAR_28 = FUNC_6(VAR_26, VAR_15,
        VAR_26->scale_m);
  if (VAR_28 < 0)
   goto out;
 }


 VAR_28 = FUNC_6(VAR_26, VAR_19,
       VAR_26->src->crop[VAR_8].width);
 if (VAR_28 < 0)
  goto out;
 VAR_28 = FUNC_6(VAR_26, VAR_22,
       VAR_26->src->crop[VAR_8].height);
 if (VAR_28 < 0)
  goto out;

 if ((VAR_26->limits[VAR_4] &
      (VAR_2 |
       VAR_1)) &&
     VAR_26->hwcfg->strobe_setup != ((void*)0) &&
     VAR_26->hwcfg->strobe_setup->trigger != 0) {
  VAR_28 = FUNC_5(VAR_26);
  if (VAR_28)
   goto out;
 }

 VAR_28 = FUNC_3(VAR_26, VAR_25);
 if (VAR_28) {
  FUNC_0(&VAR_27->dev, "pre_streamon quirks failed\n");
  goto out;
 }

 VAR_28 = FUNC_6(VAR_26, VAR_23,
       VAR_6);

out:
 FUNC_2(&VAR_26->mutex);

 return VAR_28;
}
