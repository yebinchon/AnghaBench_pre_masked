
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int field; int height; int width; int code; } ;
struct v4l2_subdev_format {TYPE_3__ format; } ;
struct v4l2_rect {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_5__ {int field; int pixelformat; } ;
struct TYPE_4__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct imx_media_pixfmt {scalar_t__ cs; } ;
struct capture_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;


 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ) ;
 struct imx_media_pixfmt* FUNC_3 (int ,int ,int) ;
 struct imx_media_pixfmt* FUNC_4 (int ,int ) ;
 struct imx_media_pixfmt* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,struct imx_media_pixfmt const*) ;

__attribute__((used)) static int FUNC_7(struct capture_priv *VAR_7,
         struct v4l2_subdev_format *VAR_8,
         struct v4l2_format *VAR_9,
         const struct imx_media_pixfmt **VAR_10,
         struct v4l2_rect *VAR_11)
{
 const struct imx_media_pixfmt *VAR_12, *VAR_13;

 VAR_13 = FUNC_4(VAR_8->format.code, VAR_0);
 if (VAR_13) {
  u32 VAR_14, VAR_15;

  VAR_15 = (VAR_13->cs == VAR_4) ?
   VAR_2 : VAR_1;
  VAR_14 = VAR_9->fmt.pix.pixelformat;

  VAR_12 = FUNC_3(VAR_14, VAR_15, 0);
  if (!VAR_12) {
   FUNC_2(&VAR_14, 0, VAR_15);
   VAR_12 = FUNC_3(VAR_14, VAR_15, 0);
  }
 } else {
  VAR_13 = FUNC_5(VAR_8->format.code,
          VAR_0, 1);
  if (FUNC_1(!VAR_13))
   return -VAR_3;

  VAR_12 = VAR_13;
 }


 if (FUNC_0(VAR_9->fmt.pix.field)) {
  switch (VAR_8->format.field) {
  case 128:
   VAR_8->format.field = VAR_6;
   break;
  case 129:
   VAR_8->format.field = VAR_5;
   break;
  default:
   break;
  }
 }

 FUNC_6(&VAR_9->fmt.pix, &VAR_8->format, VAR_12);

 if (VAR_10)
  *VAR_10 = VAR_12;

 if (VAR_11) {
  VAR_11->left = 0;
  VAR_11->top = 0;
  VAR_11->width = VAR_8->format.width;
  VAR_11->height = VAR_8->format.height;
 }

 return 0;
}
