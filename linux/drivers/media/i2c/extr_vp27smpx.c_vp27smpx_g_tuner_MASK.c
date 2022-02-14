
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vp27smpx_state {int audmode; scalar_t__ radio; } ;
struct v4l2_tuner {int capability; int rxsubchans; int audmode; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vp27smpx_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4, struct v4l2_tuner *VAR_5)
{
 struct vp27smpx_state *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->radio)
  return 0;
 VAR_5->audmode = VAR_6->audmode;
 VAR_5->capability = VAR_2 |
  VAR_0 | VAR_1;
 VAR_5->rxsubchans = VAR_3;
 return 0;
}
