
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vdic_priv {int active_input_pad; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int height; int width; int code; } ;
struct v4l2_subdev_format {int pad; struct v4l2_mbus_framefmt format; int which; } ;
struct imx_media_pixfmt {int * codes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct vdic_priv*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 struct imx_media_pixfmt* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct v4l2_mbus_framefmt*,int) ;
 int FUNC_5 (int *,int ,int ,int ,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct vdic_priv *VAR_10,
    struct v4l2_subdev_pad_config *VAR_11,
    struct v4l2_subdev_format *VAR_12,
    const struct imx_media_pixfmt **VAR_13)
{
 struct v4l2_mbus_framefmt *VAR_14;

 *VAR_13 = FUNC_3(VAR_12->format.code, VAR_0);
 if (!*VAR_13) {
  u32 VAR_15;

  FUNC_2(&VAR_15, 0, VAR_0);
  *VAR_13 = FUNC_3(VAR_15, VAR_0);
  VAR_12->format.code = (*VAR_13)->codes[0];
 }

 VAR_14 = FUNC_1(VAR_10, VAR_11, VAR_10->active_input_pad,
          VAR_12->which);

 switch (VAR_12->pad) {
 case 128:
  VAR_12->format = *VAR_14;

  VAR_12->format.field = VAR_7;
  break;
 case 130:
 case 129:
  FUNC_5(&VAR_12->format.width,
          VAR_5, VAR_3, VAR_9,
          &VAR_12->format.height,
          VAR_4, VAR_2, VAR_1, VAR_6);


  if (!FUNC_0(VAR_12->format.field))
   VAR_12->format.field = VAR_8;
  break;
 }

 FUNC_4(&VAR_12->format, 1);
}
