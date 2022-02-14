
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ pixelclock; } ;
struct ths7303_state {int std_id; TYPE_1__ bt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct ths7303_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4, v4l2_std_id VAR_5)
{
 struct ths7303_state *VAR_6 = FUNC_1(VAR_4);

 if (VAR_5 & (VAR_2 & ~VAR_3)) {
  VAR_6->std_id = 1;
  VAR_6->bt.pixelclock = 0;
  return FUNC_0(VAR_4, VAR_0);
 }

 return FUNC_0(VAR_4, VAR_1);
}
