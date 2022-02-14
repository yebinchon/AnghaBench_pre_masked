
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_pix_format {scalar_t__ pixelformat; int bytesperline; int height; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct v4l2_pix_format *VAR_1)
{
 if (VAR_1->pixelformat == VAR_0)
  return VAR_1->bytesperline * VAR_1->height * 2;

 return VAR_1->bytesperline * VAR_1->height;
}
