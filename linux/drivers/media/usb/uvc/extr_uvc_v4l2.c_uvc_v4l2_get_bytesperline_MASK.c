
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uvc_frame {int wWidth; } ;
struct uvc_format {int fcc; int bpp; } ;







__attribute__((used)) static u32 FUNC_0(const struct uvc_format *VAR_0,
 const struct uvc_frame *VAR_1)
{
 switch (VAR_0->fcc) {
 case 130:
 case 128:
 case 129:
 case 131:
  return VAR_1->wWidth;

 default:
  return VAR_0->bpp * VAR_1->wWidth / 8;
 }
}
