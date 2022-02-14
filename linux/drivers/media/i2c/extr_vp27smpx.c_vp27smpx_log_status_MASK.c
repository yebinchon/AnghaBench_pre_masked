
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vp27smpx_state {scalar_t__ radio; int audmode; } ;
struct v4l2_subdev {int dummy; } ;


 struct vp27smpx_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct vp27smpx_state *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, "Audio Mode: %u%s\n", VAR_1->audmode,
   VAR_1->radio ? " (Radio)" : "");
 return 0;
}
