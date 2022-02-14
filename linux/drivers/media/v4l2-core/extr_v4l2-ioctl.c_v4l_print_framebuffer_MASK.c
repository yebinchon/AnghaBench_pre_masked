
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pixelformat; int colorspace; int sizeimage; int bytesperline; int height; int width; } ;
struct v4l2_framebuffer {TYPE_1__ fmt; int base; int flags; int capability; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int,int,int,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_framebuffer *VAR_2 = VAR_0;

 FUNC_0("capability=0x%x, flags=0x%x, base=0x%p, width=%u, height=%u, pixelformat=%c%c%c%c, bytesperline=%u, sizeimage=%u, colorspace=%d\n",
   VAR_2->capability, VAR_2->flags, VAR_2->base,
   VAR_2->fmt.width, VAR_2->fmt.height,
   (VAR_2->fmt.pixelformat & 0xff),
   (VAR_2->fmt.pixelformat >> 8) & 0xff,
   (VAR_2->fmt.pixelformat >> 16) & 0xff,
   (VAR_2->fmt.pixelformat >> 24) & 0xff,
   VAR_2->fmt.bytesperline, VAR_2->fmt.sizeimage,
   VAR_2->fmt.colorspace);
}
