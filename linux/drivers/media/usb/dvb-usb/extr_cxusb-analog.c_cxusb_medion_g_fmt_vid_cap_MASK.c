
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int width; int height; int field_order; int videoqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxusb_medion_dev*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct dvb_usb_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
          struct v4l2_format *VAR_4)
{
 struct dvb_usb_device *VAR_5 = FUNC_2(VAR_2);
 struct cxusb_medion_dev *VAR_6 = VAR_5->priv;

 VAR_4->fmt.pix.width = VAR_6->width;
 VAR_4->fmt.pix.height = VAR_6->height;
 VAR_4->fmt.pix.pixelformat = VAR_1;
 VAR_4->fmt.pix.field = FUNC_1(&VAR_6->videoqueue) ?
  VAR_6->field_order : FUNC_0(VAR_6);
 VAR_4->fmt.pix.bytesperline = VAR_6->width * 2;
 VAR_4->fmt.pix.colorspace = VAR_0;
 VAR_4->fmt.pix.sizeimage = VAR_4->fmt.pix.bytesperline * VAR_4->fmt.pix.height;

 return 0;
}
