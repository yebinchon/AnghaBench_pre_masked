
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct smiapp_sensor {int visible_pixel_start; int embedded_end; int image_start; int embedded_start; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int sd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;





 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct smiapp_sensor*,unsigned int,unsigned int*) ;
 struct i2c_client* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct smiapp_sensor *VAR_14)
{
 struct i2c_client *VAR_15 = FUNC_4(&VAR_14->src->sd);
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23;

 VAR_23 = FUNC_3(VAR_14, VAR_13,
      &VAR_16);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_3(VAR_14, VAR_12,
      &VAR_17);
 if (VAR_23)
  return VAR_23;

 VAR_18 = (VAR_17
       & VAR_7)
  >> VAR_8;
 VAR_19 = VAR_17
  & VAR_9;

 FUNC_2(&VAR_15->dev, "format_model_type %s\n",
  VAR_16 == VAR_10
  ? "2 byte" :
  VAR_16 == VAR_11
  ? "4 byte" : "is simply bad");

 for (VAR_20 = 0; VAR_20 < VAR_18 + VAR_19; VAR_20++) {
  u32 VAR_24;
  u32 VAR_25;
  u32 VAR_26;
  char *VAR_27;
  char *VAR_28;
  u32 VAR_29;

  if (VAR_16 == VAR_10) {
   VAR_29 = FUNC_0(VAR_20);
   VAR_23 = FUNC_3(VAR_14, VAR_29, &VAR_24);
   if (VAR_23)
    return VAR_23;

   VAR_25 =
    (VAR_24
     & VAR_1)
    >> VAR_2;
   VAR_26 = VAR_24 & VAR_3;
  } else if (VAR_16
      == VAR_11) {
   VAR_29 = FUNC_1(VAR_20);
   VAR_23 = FUNC_3(VAR_14, VAR_29, &VAR_24);
   if (VAR_23)
    return VAR_23;

   VAR_25 =
    (VAR_24
     & VAR_4)
    >> VAR_5;
   VAR_26 = VAR_24 & VAR_6;
  } else {
   FUNC_2(&VAR_15->dev,
    "invalid frame format model type %d\n",
    VAR_16);
   return -VAR_0;
  }

  if (VAR_20 < VAR_18)
   VAR_27 = "columns";
  else
   VAR_27 = "rows";

  switch (VAR_25) {
  case 129:
   VAR_28 = "embedded";
   break;
  case 130:
   VAR_28 = "dummy";
   break;
  case 132:
   VAR_28 = "black";
   break;
  case 131:
   VAR_28 = "dark";
   break;
  case 128:
   VAR_28 = "visible";
   break;
  default:
   VAR_28 = "invalid";
   break;
  }

  FUNC_2(&VAR_15->dev,
   "0x%8.8x %s pixels: %d %s (pixelcode %u)\n", VAR_29,
   VAR_28, VAR_26, VAR_27, VAR_25);

  if (VAR_20 < VAR_18) {
   if (VAR_25 ==
       128)
    VAR_14->visible_pixel_start = VAR_21;
   VAR_21 += VAR_26;
   continue;
  }


  switch (VAR_25) {
  case 129:
   if (VAR_14->embedded_end)
    break;
   VAR_14->embedded_start = VAR_22;
   VAR_14->embedded_end = VAR_22 + VAR_26;
   break;
  case 128:
   VAR_14->image_start = VAR_22;
   break;
  }
  VAR_22 += VAR_26;
 }

 if (VAR_14->embedded_end > VAR_14->image_start) {
  FUNC_2(&VAR_15->dev,
   "adjusting image start line to %u (was %u)\n",
   VAR_14->embedded_end, VAR_14->image_start);
  VAR_14->image_start = VAR_14->embedded_end;
 }

 FUNC_2(&VAR_15->dev, "embedded data from lines %d to %d\n",
  VAR_14->embedded_start, VAR_14->embedded_end);
 FUNC_2(&VAR_15->dev, "image data starts at line %d\n",
  VAR_14->image_start);

 return 0;
}
