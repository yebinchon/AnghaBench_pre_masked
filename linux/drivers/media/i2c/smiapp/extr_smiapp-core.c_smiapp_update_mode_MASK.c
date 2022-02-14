
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_8__ {int pixel_rate_pixel_array; } ;
struct smiapp_sensor {int binning_horizontal; int binning_vertical; TYPE_6__* vblank; TYPE_5__* pixel_array; TYPE_3__* hblank; TYPE_2__ pll; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_12__ {int val; } ;
struct TYPE_11__ {TYPE_4__* crop; } ;
struct TYPE_10__ {int width; int height; } ;
struct TYPE_9__ {int val; } ;
struct TYPE_7__ {int sd; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct smiapp_sensor*) ;
 int FUNC_2 (struct smiapp_sensor*) ;
 int FUNC_3 (struct smiapp_sensor*) ;
 int FUNC_4 (struct smiapp_sensor*,int ,unsigned int) ;
 struct i2c_client* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct smiapp_sensor *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_5(&VAR_3->src->sd);
 unsigned int VAR_5;
 int VAR_6;


 if (VAR_3->binning_horizontal == 1 &&
     VAR_3->binning_vertical == 1) {
  VAR_5 = 0;
 } else {
  u8 VAR_7 =
   (VAR_3->binning_horizontal << 4)
   | VAR_3->binning_vertical;

  VAR_6 = FUNC_4(
   VAR_3, VAR_2, VAR_7);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_5 = 1;
 }
 VAR_6 = FUNC_4(VAR_3, VAR_1, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_3(VAR_3);

 FUNC_0(&VAR_4->dev, "vblank\t\t%d\n", VAR_3->vblank->val);
 FUNC_0(&VAR_4->dev, "hblank\t\t%d\n", VAR_3->hblank->val);

 FUNC_0(&VAR_4->dev, "real timeperframe\t100/%d\n",
  VAR_3->pll.pixel_rate_pixel_array /
  ((VAR_3->pixel_array->crop[VAR_0].width
    + VAR_3->hblank->val) *
   (VAR_3->pixel_array->crop[VAR_0].height
    + VAR_3->vblank->val) / 100));

 return 0;
}
