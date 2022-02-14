
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixelformat; int height; int width; int field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx25821_channel {int pixel_formats; int height; int width; int field; int fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 struct cx25821_channel* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
    struct v4l2_format *VAR_5)
{
 struct cx25821_channel *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);

 if (0 != VAR_7)
  return VAR_7;

 VAR_6->fmt = FUNC_0(VAR_5->fmt.pix.pixelformat);
 VAR_6->field = VAR_5->fmt.pix.field;
 VAR_6->width = VAR_5->fmt.pix.width;
 VAR_6->height = VAR_5->fmt.pix.height;
 if (VAR_5->fmt.pix.pixelformat == VAR_2)
  VAR_6->pixel_formats = VAR_0;
 else
  VAR_6->pixel_formats = VAR_1;
 return 0;
}
