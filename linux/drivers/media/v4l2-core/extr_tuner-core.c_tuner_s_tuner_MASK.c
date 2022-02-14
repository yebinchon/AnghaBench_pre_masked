
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ audmode; int type; } ;
struct v4l2_subdev {int dummy; } ;
struct tuner {scalar_t__ mode; scalar_t__ audmode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tuner*,int ) ;
 scalar_t__ FUNC_1 (struct tuner*,int ) ;
 struct tuner* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3, const struct v4l2_tuner *VAR_4)
{
 struct tuner *VAR_5 = FUNC_2(VAR_3);

 if (FUNC_1(VAR_5, VAR_4->type))
  return 0;

 if (VAR_5->mode == VAR_2) {
  VAR_5->audmode = VAR_4->audmode;






  if (VAR_5->audmode != VAR_0 &&
      VAR_5->audmode != VAR_1)
   VAR_5->audmode = VAR_1;
 }
 FUNC_0(VAR_5, 0);

 return 0;
}
