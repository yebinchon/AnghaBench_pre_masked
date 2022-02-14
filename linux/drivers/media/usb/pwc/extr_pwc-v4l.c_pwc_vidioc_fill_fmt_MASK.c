
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format {int dummy; } ;
struct TYPE_4__ {int width; int height; int pixelformat; int bytesperline; int sizeimage; int colorspace; int field; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct v4l2_format *VAR_2,
 int VAR_3, int VAR_4, u32 VAR_5)
{
 FUNC_1(&VAR_2->fmt.pix, 0, sizeof(struct v4l2_pix_format));
 VAR_2->fmt.pix.width = VAR_3;
 VAR_2->fmt.pix.height = VAR_4;
 VAR_2->fmt.pix.field = VAR_1;
 VAR_2->fmt.pix.pixelformat = VAR_5;
 VAR_2->fmt.pix.bytesperline = VAR_2->fmt.pix.width;
 VAR_2->fmt.pix.sizeimage = VAR_2->fmt.pix.height * VAR_2->fmt.pix.width * 3 / 2;
 VAR_2->fmt.pix.colorspace = VAR_0;
 FUNC_0("pwc_vidioc_fill_fmt() width=%d, height=%d, bytesperline=%d, sizeimage=%d, pixelformat=%c%c%c%c\n",
   VAR_2->fmt.pix.width,
   VAR_2->fmt.pix.height,
   VAR_2->fmt.pix.bytesperline,
   VAR_2->fmt.pix.sizeimage,
   (VAR_2->fmt.pix.pixelformat)&255,
   (VAR_2->fmt.pix.pixelformat>>8)&255,
   (VAR_2->fmt.pix.pixelformat>>16)&255,
   (VAR_2->fmt.pix.pixelformat>>24)&255);
}
