
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; int width; int height; int bytesperline; int sizeimage; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct g2d_fmt {int depth; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct g2d_fmt* FUNC_0 (struct v4l2_format*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct g2d_fmt *VAR_8;
 enum v4l2_field *VAR_9;

 VAR_8 = FUNC_0(VAR_7);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = &VAR_7->fmt.pix.field;
 if (*VAR_9 == VAR_3)
  *VAR_9 = VAR_4;
 else if (*VAR_9 != VAR_4)
  return -VAR_0;

 if (VAR_7->fmt.pix.width > VAR_2)
  VAR_7->fmt.pix.width = VAR_2;
 if (VAR_7->fmt.pix.height > VAR_1)
  VAR_7->fmt.pix.height = VAR_1;

 if (VAR_7->fmt.pix.width < 1)
  VAR_7->fmt.pix.width = 1;
 if (VAR_7->fmt.pix.height < 1)
  VAR_7->fmt.pix.height = 1;

 VAR_7->fmt.pix.bytesperline = (VAR_7->fmt.pix.width * VAR_8->depth) >> 3;
 VAR_7->fmt.pix.sizeimage = VAR_7->fmt.pix.height * VAR_7->fmt.pix.bytesperline;
 return 0;
}
