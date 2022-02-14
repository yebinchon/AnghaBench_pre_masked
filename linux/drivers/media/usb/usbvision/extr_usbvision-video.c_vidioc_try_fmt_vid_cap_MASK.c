
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pixelformat; int width; int height; int bytesperline; int sizeimage; int field; int colorspace; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct TYPE_6__ {scalar_t__ format; int bytes_per_pixel; } ;
struct usb_usbvision {TYPE_3__ palette; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_9, void *VAR_10,
          struct v4l2_format *VAR_11)
{
 struct usb_usbvision *VAR_12 = FUNC_1(VAR_9);
 int VAR_13;


 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  if (VAR_11->fmt.pix.pixelformat ==
     VAR_8[VAR_13].format) {
   VAR_12->palette = VAR_8[VAR_13];
   break;
  }
 }

 if (VAR_13 == VAR_5)
  return -VAR_0;
 FUNC_0(VAR_11->fmt.pix.width, VAR_4, VAR_2);
 FUNC_0(VAR_11->fmt.pix.height, VAR_3, VAR_1);

 VAR_11->fmt.pix.bytesperline = VAR_11->fmt.pix.width*
  VAR_12->palette.bytes_per_pixel;
 VAR_11->fmt.pix.sizeimage = VAR_11->fmt.pix.bytesperline*VAR_11->fmt.pix.height;
 VAR_11->fmt.pix.colorspace = VAR_6;
 VAR_11->fmt.pix.field = VAR_7;

 return 0;
}
