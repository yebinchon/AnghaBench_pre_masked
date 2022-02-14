
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pixelformat; scalar_t__ width; int height; int bytesperline; int sizeimage; int colorspace; int field; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_7__ {scalar_t__ w; int h; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4,
  struct v4l2_format *VAR_5, int *VAR_6)
{
 int VAR_7;
 switch (VAR_5->fmt.pix.pixelformat) {
 case 132:
 case 131:
 case 129:
 case 128:
 case 130:
  break;
 default:
  return -VAR_0;
 }
 for (VAR_7 = 1; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  if (VAR_5->fmt.pix.width > VAR_3[VAR_7].w)
   break;
 }
 if (VAR_7 == FUNC_0(VAR_3)
  || (FUNC_1(VAR_5->fmt.pix.width - VAR_3[VAR_7-1].w)
   < FUNC_1(VAR_5->fmt.pix.width - VAR_3[VAR_7].w))) {
  VAR_5->fmt.pix.height = VAR_3[VAR_7-1].h;
  VAR_5->fmt.pix.width = VAR_3[VAR_7-1].w;
  if (VAR_6)
   *VAR_6 = VAR_7 - 1;
 } else {
  VAR_5->fmt.pix.height = VAR_3[VAR_7].h;
  VAR_5->fmt.pix.width = VAR_3[VAR_7].w;
  if (VAR_6)
   *VAR_6 = VAR_7;
 }

 VAR_5->fmt.pix.field = VAR_2;
 VAR_5->fmt.pix.colorspace = VAR_1;
 if (VAR_5->fmt.pix.pixelformat == 130)
  VAR_5->fmt.pix.bytesperline = VAR_5->fmt.pix.width;
 else
  VAR_5->fmt.pix.bytesperline = 2 * VAR_5->fmt.pix.width;
 VAR_5->fmt.pix.sizeimage = VAR_5->fmt.pix.bytesperline
  * VAR_5->fmt.pix.height;
 return 0;
}
