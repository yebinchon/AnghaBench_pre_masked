
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bdisp_frame {int field; TYPE_1__* fmt; } ;
struct TYPE_2__ {int pixelformat; } ;


 int VAR_0 ;







__attribute__((used)) static const char *FUNC_0(struct bdisp_frame VAR_1)
{
 switch (VAR_1.fmt->pixelformat) {
 case 128:
  return "YUV420P";
 case 132:
  if (VAR_1.field == VAR_0)
   return "NV12 interlaced";
  else
   return "NV12";
 case 130:
  return "RGB16";
 case 131:
  return "RGB24";
 case 129:
  return "XRGB";
 case 133:
  return "ARGB";
 default:
  return "????";
 }
}
