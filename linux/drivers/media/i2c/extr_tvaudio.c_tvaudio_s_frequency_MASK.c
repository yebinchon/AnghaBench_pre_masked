
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {int dummy; } ;
struct CHIPSTATE {int prevmode; int wt; scalar_t__ thread; struct CHIPDESC* desc; } ;
struct CHIPDESC {int (* setaudmode ) (struct CHIPSTATE*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct CHIPSTATE*,int ) ;
 struct CHIPSTATE* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2, const struct v4l2_frequency *VAR_3)
{
 struct CHIPSTATE *VAR_4 = FUNC_3(VAR_2);
 struct CHIPDESC *VAR_5 = VAR_4->desc;
 if (VAR_4->thread) {
  VAR_5->setaudmode(VAR_4, VAR_0);
  VAR_4->prevmode = -1;
  FUNC_0(&VAR_4->wt, VAR_1+FUNC_1(2000));
 }
 return 0;
}
