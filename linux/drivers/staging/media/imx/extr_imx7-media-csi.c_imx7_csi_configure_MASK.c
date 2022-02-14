
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format {int width; scalar_t__ field; int pixelformat; int height; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
struct imx_media_video_dev {TYPE_2__ fmt; } ;
struct imx7_csi {int is_csi2; TYPE_3__* format_mbus; struct imx_media_video_dev* vdev; } ;
typedef int __u32 ;
struct TYPE_6__ {int code; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;




 int FUNC_0 (struct imx7_csi*,int) ;
 int FUNC_1 (struct imx7_csi*,int) ;
 int FUNC_2 (struct imx7_csi*,int ) ;
 int FUNC_3 (struct imx7_csi*,int,int ) ;
 int FUNC_4 (struct imx7_csi*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct imx7_csi *VAR_20)
{
 struct imx_media_video_dev *VAR_21 = VAR_20->vdev;
 struct v4l2_pix_format *VAR_22 = &VAR_21->fmt.fmt.pix;
 __u32 VAR_23 = VAR_20->format_mbus[VAR_15].code;
 u32 VAR_24, VAR_25;
 int VAR_26 = VAR_22->width;

 if (VAR_22->field == VAR_19) {
  FUNC_1(VAR_20, 1);
  FUNC_0(VAR_20, VAR_22->width);
 } else {
  FUNC_1(VAR_20, 0);
  FUNC_0(VAR_20, 0);
 }

 VAR_25 = FUNC_2(VAR_20, VAR_13);

 if (!VAR_20->is_csi2) {
  if (VAR_22->pixelformat == 129 ||
      VAR_22->pixelformat == 128)
   VAR_26 *= 2;

  FUNC_4(VAR_20, VAR_26, VAR_22->height);

  VAR_25 |= (VAR_1 | VAR_2 |
   VAR_0);
  FUNC_3(VAR_20, VAR_25, VAR_13);

  return 0;
 }

 FUNC_4(VAR_20, VAR_26, VAR_22->height);

 VAR_24 = FUNC_2(VAR_20, VAR_12);
 VAR_24 &= ~VAR_4;

 VAR_25 &= VAR_5;
 VAR_25 |= VAR_3;

 switch (VAR_22->pixelformat) {
 case 129:
 case 128:
  VAR_25 |= VAR_10;
  break;
 case 130:
  VAR_25 |= VAR_9;
  break;
 case 131:
  if (VAR_23 == VAR_16)
   VAR_25 |= VAR_6;
  else if (VAR_23 == VAR_17)
   VAR_25 |= VAR_7;
  else if (VAR_23 == VAR_18)
   VAR_25 |= VAR_8;
  VAR_24 |= VAR_11;
  break;
 default:
  return -VAR_14;
 }

 FUNC_3(VAR_20, VAR_24, VAR_12);
 FUNC_3(VAR_20, VAR_25, VAR_13);

 return 0;
}
