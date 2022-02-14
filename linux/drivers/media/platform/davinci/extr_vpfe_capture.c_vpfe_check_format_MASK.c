
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


typedef scalar_t__ u32 ;
struct vpfe_pixel_format {scalar_t__ pixelformat; scalar_t__ bpp; } ;
struct TYPE_11__ {scalar_t__ active_pixels; scalar_t__ active_lines; int frame_format; } ;
struct TYPE_8__ {scalar_t__ pixelformat; int field; } ;
struct TYPE_9__ {TYPE_2__ pix; } ;
struct TYPE_10__ {TYPE_3__ fmt; } ;
struct vpfe_device {int v4l2_dev; TYPE_5__ std_info; TYPE_4__ fmt; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; int field; int width; int height; int bytesperline; int sizeimage; } ;
struct TYPE_7__ {scalar_t__ (* enum_pix ) (scalar_t__*,int) ;} ;
struct TYPE_12__ {TYPE_1__ hw_ops; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 TYPE_6__* VAR_2 ;
 void* FUNC_0 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int *,char*,int,int,int,...) ;
 struct vpfe_pixel_format* FUNC_3 (scalar_t__) ;

__attribute__((used)) static const struct vpfe_pixel_format *
 FUNC_4(struct vpfe_device *VAR_3,
     struct v4l2_pix_format *VAR_4)
{
 u32 VAR_5 = 1, VAR_6 = 32, VAR_7, VAR_8;
 const struct vpfe_pixel_format *VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_3(VAR_4->pixelformat);
 if (!VAR_9) {




  VAR_4->pixelformat = VAR_3->fmt.fmt.pix.pixelformat;
  VAR_9 = FUNC_3(VAR_4->pixelformat);
 }


 VAR_11 = 0;
 VAR_12 = 0;
 while (VAR_2->hw_ops.enum_pix(&VAR_10, VAR_11) >= 0) {
  if (VAR_9->pixelformat == VAR_10) {
   VAR_12 = 1;
   break;
  }
  VAR_11++;
 }

 if (!VAR_12) {

  VAR_4->pixelformat = VAR_3->fmt.fmt.pix.pixelformat;




  VAR_9 = FUNC_3(VAR_4->pixelformat);
 }


 if (VAR_4->field == VAR_0) {

  VAR_4->field = VAR_3->fmt.fmt.pix.field;
 }





 if (VAR_3->fmt.fmt.pix.field != VAR_4->field) {




  switch (VAR_4->field) {
  case 130:
  case 128:

   if (!VAR_3->std_info.frame_format)
    VAR_4->field = 129;
   break;
  case 129:
   if (VAR_3->std_info.frame_format)
    VAR_4->field = 130;
   break;

  default:

   VAR_4->field = VAR_3->fmt.fmt.pix.field;
   break;
  }
 }


 if (VAR_4->field == 130 ||
     VAR_4->field == 128)
  VAR_5 = 2;

 VAR_7 = VAR_3->std_info.active_pixels;
 VAR_8 = VAR_3->std_info.active_lines;
 VAR_6 /= VAR_9->bpp;

 FUNC_2(&VAR_3->v4l2_dev, "width = %d, height = %d, bpp = %d\n",
    VAR_4->width, VAR_4->height, VAR_9->bpp);

 VAR_4->width = FUNC_0((VAR_4->width), VAR_6, VAR_7);
 VAR_4->height = FUNC_0((VAR_4->height), VAR_5, VAR_8);


 if (VAR_4->field == 130)
  VAR_4->height &= (~1);




 VAR_4->bytesperline = (((VAR_4->width * VAR_9->bpp) + 31)
    & ~31);
 if (VAR_4->pixelformat == VAR_1)
  VAR_4->sizeimage =
   VAR_4->bytesperline * VAR_4->height +
   ((VAR_4->bytesperline * VAR_4->height) >> 1);
 else
  VAR_4->sizeimage = VAR_4->bytesperline * VAR_4->height;

 FUNC_2(&VAR_3->v4l2_dev, "adjusted width = %d, height = %d, bpp = %d, bytesperline = %d, sizeimage = %d\n",
   VAR_4->width, VAR_4->height, VAR_9->bpp,
   VAR_4->bytesperline, VAR_4->sizeimage);
 return VAR_9;
}
