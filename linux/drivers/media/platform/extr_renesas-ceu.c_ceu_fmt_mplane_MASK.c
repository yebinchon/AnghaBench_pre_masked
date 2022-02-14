
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format_mplane {int pixelformat; } ;
__attribute__((used)) static bool FUNC_0(struct v4l2_pix_format_mplane *VAR_0)
{
 switch (VAR_0->pixelformat) {
 case 129:
 case 131:
 case 128:
 case 130:
  return 0;
 case 134:
 case 132:
 case 135:
 case 133:
  return 1;
 default:
  return 0;
 }
}
