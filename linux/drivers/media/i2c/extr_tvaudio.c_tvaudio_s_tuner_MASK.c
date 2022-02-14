
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {scalar_t__ thread; int audmode; scalar_t__ radio; struct CHIPDESC* desc; } ;
struct CHIPDESC {int (* setaudmode ) (struct CHIPSTATE*,int ) ;} ;


 int VAR_0 ;





 int FUNC_0 (struct CHIPSTATE*,int ) ;
 struct CHIPSTATE* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, const struct v4l2_tuner *VAR_2)
{
 struct CHIPSTATE *VAR_3 = FUNC_1(VAR_1);
 struct CHIPDESC *VAR_4 = VAR_3->desc;

 if (!VAR_4->setaudmode)
  return 0;
 if (VAR_3->radio)
  return 0;

 switch (VAR_2->audmode) {
 case 129:
 case 128:
 case 132:
 case 130:
 case 131:
  break;
 default:
  return -VAR_0;
 }
 VAR_3->audmode = VAR_2->audmode;

 if (VAR_3->thread)
  FUNC_2(VAR_3->thread);
 else
  VAR_4->setaudmode(VAR_3, VAR_2->audmode);

 return 0;
}
