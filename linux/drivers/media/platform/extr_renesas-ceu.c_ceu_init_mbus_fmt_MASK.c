
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_mbus_code_enum {int code; int index; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct ceu_mbus_fmt {int mbus_code; int bps; int swapped; int bpp; void* fmt_order_swap; void* fmt_order; } ;
struct ceu_subdev {struct v4l2_subdev* v4l2_sd; struct ceu_mbus_fmt mbus_fmt; } ;
struct ceu_device {struct ceu_subdev* sd; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_mbus_code_enum*) ;

__attribute__((used)) static int FUNC_1(struct ceu_device *VAR_8)
{
 struct ceu_subdev *VAR_9 = VAR_8->sd;
 struct ceu_mbus_fmt *VAR_10 = &VAR_9->mbus_fmt;
 struct v4l2_subdev *VAR_11 = VAR_9->v4l2_sd;
 bool VAR_12 = 0;

 struct v4l2_subdev_mbus_code_enum VAR_13 = {
  .which = VAR_5,
  .index = 0,
 };


 while (!VAR_12 &&
        !FUNC_0(VAR_11, VAR_7, VAR_6,
     ((void*)0), &VAR_13)) {
  switch (VAR_13.code) {
  case 129:
  case 128:
  case 131:
  case 130:
   VAR_12 = 1;
   break;
  default:






   break;
  }

  VAR_13.index++;
 }

 if (!VAR_12)
  return -VAR_4;






 VAR_10->mbus_code = VAR_13.code;
 VAR_10->bps = 8;


 switch (VAR_13.code) {
 case 129:
  VAR_10->fmt_order = VAR_2;
  VAR_10->fmt_order_swap = VAR_3;
  VAR_10->swapped = 0;
  VAR_10->bpp = 16;
  break;

 case 128:
  VAR_10->fmt_order = VAR_3;
  VAR_10->fmt_order_swap = VAR_2;
  VAR_10->swapped = 1;
  VAR_10->bpp = 16;
  break;

 case 131:
  VAR_10->fmt_order = VAR_0;
  VAR_10->fmt_order_swap = VAR_1;
  VAR_10->swapped = 0;
  VAR_10->bpp = 16;
  break;

 case 130:
  VAR_10->fmt_order = VAR_1;
  VAR_10->fmt_order_swap = VAR_0;
  VAR_10->swapped = 1;
  VAR_10->bpp = 16;
  break;
 }

 return 0;
}
