
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
typedef int subfmt ;
struct TYPE_4__ {int width; int height; void* colorspace; void* field; int code; } ;
struct v4l2_subdev_format {TYPE_1__ format; int which; } ;
struct TYPE_5__ {int width; int height; int bytesperline; int sizeimage; void* colorspace; void* field; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int width; int height; int cx25840; void* field_order; int videoqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct cxusb_medion_dev*) ;
 int FUNC_1 (struct v4l2_subdev_format*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct dvb_usb_device* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_8,
       struct v4l2_format *VAR_9,
       bool VAR_10)
{
 struct dvb_usb_device *VAR_11 = FUNC_5(VAR_8);
 struct cxusb_medion_dev *VAR_12 = VAR_11->priv;
 struct v4l2_subdev_format VAR_13;
 u32 VAR_14;
 int VAR_15;

 if (VAR_10 && FUNC_3(&VAR_12->videoqueue))
  return -VAR_0;

 VAR_14 = FUNC_4(&VAR_12->videoqueue) ?
  VAR_12->field_order : FUNC_0(VAR_12);

 FUNC_1(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.which = VAR_10 ? VAR_4 :
  VAR_5;
 VAR_13.format.width = VAR_9->fmt.pix.width & ~1;
 VAR_13.format.height = VAR_9->fmt.pix.height & ~1;
 VAR_13.format.code = VAR_1;
 VAR_13.format.field = VAR_14;
 VAR_13.format.colorspace = VAR_2;

 VAR_15 = FUNC_2(VAR_12->cx25840, VAR_6, VAR_7, ((void*)0), &VAR_13);
 if (VAR_15 != 0)
  return VAR_15;

 VAR_9->fmt.pix.width = VAR_13.format.width;
 VAR_9->fmt.pix.height = VAR_13.format.height;
 VAR_9->fmt.pix.pixelformat = VAR_3;
 VAR_9->fmt.pix.field = VAR_14;
 VAR_9->fmt.pix.bytesperline = VAR_9->fmt.pix.width * 2;
 VAR_9->fmt.pix.sizeimage = VAR_9->fmt.pix.bytesperline * VAR_9->fmt.pix.height;
 VAR_9->fmt.pix.colorspace = VAR_2;

 if (VAR_10) {
  VAR_12->width = VAR_9->fmt.pix.width;
  VAR_12->height = VAR_9->fmt.pix.height;
 }

 return 0;
}
