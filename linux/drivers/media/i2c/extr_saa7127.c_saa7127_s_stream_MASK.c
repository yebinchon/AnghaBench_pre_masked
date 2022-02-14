
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct saa7127_state {int video_enable; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;
 struct saa7127_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct saa7127_state *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->video_enable == VAR_1)
  return 0;
 return FUNC_0(VAR_0, VAR_1);
}
