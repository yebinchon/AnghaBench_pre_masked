
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format_mplane {int height; int width; int pixelformat; TYPE_1__* plane_fmt; } ;
struct ceu_mbus_fmt {int bpp; int fmt_order_swap; int fmt_order; int swapped; } ;
struct ceu_subdev {unsigned int mbus_flags; struct ceu_mbus_fmt mbus_fmt; } ;
struct ceu_device {struct ceu_subdev* sd; struct v4l2_pix_format_mplane v4l2_pix; } ;
struct TYPE_2__ {int bytesperline; } ;


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
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_0 (struct ceu_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ceu_device *VAR_18)
{
 u32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 struct v4l2_pix_format_mplane *VAR_24 = &VAR_18->v4l2_pix;
 struct ceu_subdev *VAR_25 = VAR_18->sd;
 struct ceu_mbus_fmt *VAR_26 = &VAR_25->mbus_fmt;
 unsigned int VAR_27 = VAR_25->mbus_flags;


 FUNC_0(VAR_18, VAR_0, 0);
 FUNC_0(VAR_18, VAR_12, 0);
 FUNC_0(VAR_18, VAR_14, 0);
 FUNC_0(VAR_18, VAR_13, 0);


 VAR_23 = (VAR_24->height << 16) | VAR_24->width * VAR_26->bpp / 8;
 VAR_20 = VAR_9;
 switch (VAR_24->pixelformat) {

 case 129:
 case 128:
 case 131:
 case 130:
  VAR_19 = VAR_2;
  VAR_20 |= VAR_8;
  VAR_21 = (VAR_24->height << 16) | VAR_24->width;
  VAR_22 = VAR_24->plane_fmt[0].bytesperline;
  break;


 case 134:
  VAR_20 |= VAR_8;

 case 135:
  if (VAR_26->swapped)
   VAR_19 = VAR_26->fmt_order_swap;
  else
   VAR_19 = VAR_26->fmt_order;

  VAR_21 = (VAR_24->height << 16) | VAR_24->width;
  VAR_22 = VAR_24->width;
  break;


 case 132:
  VAR_20 |= VAR_8;

 case 133:
  if (VAR_26->swapped)
   VAR_19 = VAR_26->fmt_order;
  else
   VAR_19 = VAR_26->fmt_order_swap;

  VAR_21 = (VAR_24->height << 16) | VAR_24->width;
  VAR_22 = VAR_24->width;
  break;

 default:
  return -VAR_15;
 }

 VAR_19 |= VAR_27 & VAR_17 ? 1 << 1 : 0;
 VAR_19 |= VAR_27 & VAR_16 ? 1 << 0 : 0;


 FUNC_0(VAR_18, VAR_1, VAR_19);
 FUNC_0(VAR_18, VAR_7, VAR_20);
 FUNC_0(VAR_18, VAR_4, VAR_5);






 FUNC_0(VAR_18, VAR_3, 0);


 FUNC_0(VAR_18, VAR_6, VAR_23);
 FUNC_0(VAR_18, VAR_11, VAR_21);
 FUNC_0(VAR_18, VAR_10, VAR_22);

 return 0;
}
