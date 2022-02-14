
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dv_timings {scalar_t__ type; int bt; } ;
struct ths7303_state {scalar_t__ std_id; int bt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 struct ths7303_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
          struct v4l2_dv_timings *VAR_3)
{
 struct ths7303_state *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_3 || VAR_3->type != VAR_1)
  return -VAR_0;

 VAR_4->bt = VAR_3->bt;
 VAR_4->std_id = 0;

 return FUNC_0(VAR_2);
}
