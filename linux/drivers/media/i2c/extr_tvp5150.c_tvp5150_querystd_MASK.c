
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, v4l2_std_id *VAR_2)
{
 *VAR_2 = FUNC_0(VAR_1) ? FUNC_1(VAR_1) : VAR_0;

 return 0;
}
