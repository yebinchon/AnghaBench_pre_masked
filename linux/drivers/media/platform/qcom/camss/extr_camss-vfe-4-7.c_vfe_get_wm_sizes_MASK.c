
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct v4l2_pix_format_mplane {int pixelformat; int width; int height; TYPE_1__* plane_fmt; } ;
struct TYPE_2__ {int bytesperline; } ;
__attribute__((used)) static void FUNC_0(struct v4l2_pix_format_mplane *VAR_0, u8 VAR_1,
        u16 *VAR_2, u16 *VAR_3, u16 *VAR_4)
{
 switch (VAR_0->pixelformat) {
 case 135:
 case 133:
  *VAR_2 = VAR_0->width;
  *VAR_3 = VAR_0->height;
  *VAR_4 = VAR_0->plane_fmt[0].bytesperline;
  if (VAR_1 == 1)
   *VAR_3 /= 2;
  break;
 case 134:
 case 132:
  *VAR_2 = VAR_0->width;
  *VAR_3 = VAR_0->height;
  *VAR_4 = VAR_0->plane_fmt[0].bytesperline;
  break;
 case 129:
 case 128:
 case 130:
 case 131:
  *VAR_2 = VAR_0->width;
  *VAR_3 = VAR_0->height;
  *VAR_4 = VAR_0->plane_fmt[VAR_1].bytesperline;
  break;

 }
}
