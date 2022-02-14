
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int standards; int il_vbackporch; int il_vsync; int il_vfrontporch; int vbackporch; int vsync; int vfrontporch; int hbackporch; int hsync; int hfrontporch; int polarities; int height; int width; int pixelclock; int interlaced; } ;
struct v4l2_dv_timings {int type; TYPE_1__ bt; } ;



 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_dv_timings *VAR_2 = VAR_0;

 switch (VAR_2->type) {
 case 128:
  FUNC_0("type=bt-656/1120, interlaced=%u, pixelclock=%llu, width=%u, height=%u, polarities=0x%x, hfrontporch=%u, hsync=%u, hbackporch=%u, vfrontporch=%u, vsync=%u, vbackporch=%u, il_vfrontporch=%u, il_vsync=%u, il_vbackporch=%u, standards=0x%x, flags=0x%x\n",
    VAR_2->bt.interlaced, VAR_2->bt.pixelclock,
    VAR_2->bt.width, VAR_2->bt.height,
    VAR_2->bt.polarities, VAR_2->bt.hfrontporch,
    VAR_2->bt.hsync, VAR_2->bt.hbackporch,
    VAR_2->bt.vfrontporch, VAR_2->bt.vsync,
    VAR_2->bt.vbackporch, VAR_2->bt.il_vfrontporch,
    VAR_2->bt.il_vsync, VAR_2->bt.il_vbackporch,
    VAR_2->bt.standards, VAR_2->bt.flags);
  break;
 default:
  FUNC_0("type=%d\n", VAR_2->type);
  break;
 }
}
