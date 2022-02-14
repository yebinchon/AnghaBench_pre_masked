
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct ad9389b_state {TYPE_2__ dv_timings; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int,int,int) ;
 struct ad9389b_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_1)
{
 struct ad9389b_state *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->dv_timings.bt.flags & VAR_0) {

  FUNC_0(VAR_1, 0xcd, 0xbf, 0x00);
 } else {

  FUNC_0(VAR_1, 0xcd, 0xbf, 0x40);
 }
}
