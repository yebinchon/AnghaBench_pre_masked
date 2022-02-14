
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_rect {int left; int top; int width; int height; } ;
struct mt9t031 {int yskip; int xskip; int y_skip_top; int total_h; struct v4l2_rect rect; int autoexposure; } ;
struct i2c_client {int dev; } ;


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
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *,char*,int,int,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int const) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,int) ;
 struct mt9t031* FUNC_7 (struct i2c_client*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_13,
         struct v4l2_rect *VAR_14, u16 VAR_15, u16 VAR_16)
{
 struct mt9t031 *VAR_17 = FUNC_7(VAR_13);
 int VAR_18;
 u16 VAR_19, VAR_20;
 const u16 VAR_21 = VAR_3,
  VAR_22 = VAR_8;

 VAR_19 = FUNC_1(VAR_15, (u16)3);
 VAR_20 = FUNC_1(VAR_16, (u16)3);
 switch (VAR_19) {
 case 1:
  VAR_14->left &= ~1;
  break;
 case 2:
  VAR_14->left &= ~3;
  break;
 case 3:
  VAR_14->left = VAR_14->left > FUNC_5(VAR_1, 6) ?
   (VAR_14->left / 6) * 6 : FUNC_5(VAR_1, 6);
 }

 VAR_14->top &= ~1;

 FUNC_0(&VAR_13->dev, "skip %u:%u, rect %ux%u@%u:%u\n",
  VAR_15, VAR_16, VAR_14->width, VAR_14->height, VAR_14->left, VAR_14->top);


 VAR_18 = FUNC_3(VAR_13, VAR_5, 1);
 if (VAR_18 < 0)
  return VAR_18;


 VAR_18 = FUNC_4(VAR_13, VAR_4, VAR_21);
 if (VAR_18 >= 0)
  VAR_18 = FUNC_4(VAR_13, VAR_9, VAR_22);

 if (VAR_16 != VAR_17->yskip || VAR_15 != VAR_17->xskip) {

  if (VAR_18 >= 0)
   VAR_18 = FUNC_4(VAR_13, VAR_0,
     ((VAR_19 - 1) << 4) | (VAR_15 - 1));
  if (VAR_18 >= 0)
   VAR_18 = FUNC_4(VAR_13, VAR_6,
     ((VAR_20 - 1) << 4) | (VAR_16 - 1));
 }
 FUNC_0(&VAR_13->dev, "new physical left %u, top %u\n",
  VAR_14->left, VAR_14->top);





 if (VAR_18 >= 0)
  VAR_18 = FUNC_4(VAR_13, VAR_2, VAR_14->left);
 if (VAR_18 >= 0)
  VAR_18 = FUNC_4(VAR_13, VAR_7, VAR_14->top);
 if (VAR_18 >= 0)
  VAR_18 = FUNC_4(VAR_13, VAR_11, VAR_14->width - 1);
 if (VAR_18 >= 0)
  VAR_18 = FUNC_4(VAR_13, VAR_10,
    VAR_14->height + VAR_17->y_skip_top - 1);
 if (VAR_18 >= 0 && FUNC_8(VAR_17->autoexposure) == VAR_12) {
  VAR_17->total_h = VAR_14->height + VAR_17->y_skip_top + VAR_22;

  VAR_18 = FUNC_6(VAR_13, VAR_17->total_h);
 }


 if (VAR_18 >= 0)
  VAR_18 = FUNC_2(VAR_13, VAR_5, 1);

 if (VAR_18 >= 0) {
  VAR_17->rect = *VAR_14;
  VAR_17->xskip = VAR_15;
  VAR_17->yskip = VAR_16;
 }

 return VAR_18 < 0 ? VAR_18 : 0;
}
