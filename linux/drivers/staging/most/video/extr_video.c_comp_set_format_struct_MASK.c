
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int sizeimage; scalar_t__ priv; int field; int colorspace; scalar_t__ bytesperline; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct v4l2_format *VAR_3)
{
 VAR_3->fmt.pix.width = 8;
 VAR_3->fmt.pix.height = 8;
 VAR_3->fmt.pix.pixelformat = VAR_2;
 VAR_3->fmt.pix.bytesperline = 0;
 VAR_3->fmt.pix.sizeimage = 188 * 2;
 VAR_3->fmt.pix.colorspace = VAR_0;
 VAR_3->fmt.pix.field = VAR_1;
 VAR_3->fmt.pix.priv = 0;
}
