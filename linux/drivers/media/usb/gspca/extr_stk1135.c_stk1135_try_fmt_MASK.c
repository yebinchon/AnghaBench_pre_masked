
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int bytesperline; int sizeimage; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct gspca_dev {int dummy; } ;


 void* FUNC_0 (int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, struct v4l2_format *VAR_1)
{
 VAR_1->fmt.pix.width = FUNC_0(VAR_1->fmt.pix.width, 32U, 1280U);
 VAR_1->fmt.pix.height = FUNC_0(VAR_1->fmt.pix.height, 32U, 1024U);

 VAR_1->fmt.pix.width += (VAR_1->fmt.pix.width & 1);
 VAR_1->fmt.pix.height += (VAR_1->fmt.pix.height & 1);

 VAR_1->fmt.pix.bytesperline = VAR_1->fmt.pix.width;
 VAR_1->fmt.pix.sizeimage = VAR_1->fmt.pix.width * VAR_1->fmt.pix.height;
}
