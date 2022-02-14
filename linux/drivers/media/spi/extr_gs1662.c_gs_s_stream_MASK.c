
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct gs {int enabled; int pdev; int current_timings; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 struct gs* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct gs *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (VAR_3->enabled == VAR_2)
  return 0;

 VAR_3->enabled = VAR_2;

 if (VAR_2) {

  VAR_4 = FUNC_0(&VAR_3->current_timings);
  return FUNC_1(VAR_3->pdev, VAR_0, VAR_4);
 }


 return FUNC_1(VAR_3->pdev, VAR_0, 0x0);
}
