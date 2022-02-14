
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_jpegcompression {int dummy; } ;
struct gspca_dev {TYPE_1__* sd_desc; scalar_t__ usb_err; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* set_jcomp ) (struct gspca_dev*,struct v4l2_jpegcompression const*) ;} ;


 int FUNC_0 (struct gspca_dev*,struct v4l2_jpegcompression const*) ;
 struct gspca_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
   const struct v4l2_jpegcompression *VAR_2)
{
 struct gspca_dev *VAR_3 = FUNC_1(VAR_0);

 VAR_3->usb_err = 0;
 return VAR_3->sd_desc->set_jcomp(VAR_3, VAR_2);
}
