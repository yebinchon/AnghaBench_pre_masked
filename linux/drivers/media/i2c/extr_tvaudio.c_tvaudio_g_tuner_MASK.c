
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int capability; int rxsubchans; int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {int audmode; scalar_t__ radio; struct CHIPDESC* desc; } ;
struct CHIPDESC {int (* getrxsubchans ) (struct CHIPSTATE*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct CHIPSTATE*) ;
 struct CHIPSTATE* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3, struct v4l2_tuner *VAR_4)
{
 struct CHIPSTATE *VAR_5 = FUNC_1(VAR_3);
 struct CHIPDESC *VAR_6 = VAR_5->desc;

 if (!VAR_6->getrxsubchans)
  return 0;
 if (VAR_5->radio)
  return 0;

 VAR_4->audmode = VAR_5->audmode;
 VAR_4->rxsubchans = VAR_6->getrxsubchans(VAR_5);
 VAR_4->capability |= VAR_2 |
  VAR_0 | VAR_1;

 return 0;
}
