
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ width; scalar_t__ height; scalar_t__ interlaced; scalar_t__ polarities; unsigned int pixelclock; scalar_t__ hfrontporch; scalar_t__ hsync; scalar_t__ hbackporch; scalar_t__ vfrontporch; scalar_t__ vsync; scalar_t__ vbackporch; int flags; scalar_t__ il_vfrontporch; scalar_t__ il_vsync; scalar_t__ il_vbackporch; } ;
struct v4l2_dv_timings {scalar_t__ type; TYPE_1__ bt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

bool FUNC_0(const struct v4l2_dv_timings *VAR_2,
      const struct v4l2_dv_timings *VAR_3,
      unsigned VAR_4, bool VAR_5)
{
 if (VAR_2->type != VAR_3->type || VAR_2->type != VAR_0)
  return 0;
 if (VAR_2->bt.width == VAR_3->bt.width &&
     VAR_2->bt.height == VAR_3->bt.height &&
     VAR_2->bt.interlaced == VAR_3->bt.interlaced &&
     VAR_2->bt.polarities == VAR_3->bt.polarities &&
     VAR_2->bt.pixelclock >= VAR_3->bt.pixelclock - VAR_4 &&
     VAR_2->bt.pixelclock <= VAR_3->bt.pixelclock + VAR_4 &&
     VAR_2->bt.hfrontporch == VAR_3->bt.hfrontporch &&
     VAR_2->bt.hsync == VAR_3->bt.hsync &&
     VAR_2->bt.hbackporch == VAR_3->bt.hbackporch &&
     VAR_2->bt.vfrontporch == VAR_3->bt.vfrontporch &&
     VAR_2->bt.vsync == VAR_3->bt.vsync &&
     VAR_2->bt.vbackporch == VAR_3->bt.vbackporch &&
     (!VAR_5 ||
      (VAR_2->bt.flags & VAR_1) ==
  (VAR_3->bt.flags & VAR_1)) &&
     (!VAR_2->bt.interlaced ||
  (VAR_2->bt.il_vfrontporch == VAR_3->bt.il_vfrontporch &&
   VAR_2->bt.il_vsync == VAR_3->bt.il_vsync &&
   VAR_2->bt.il_vbackporch == VAR_3->bt.il_vbackporch)))
  return 1;
 return 0;
}
