
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {int sensor_sd; } ;


 struct s5c73m3* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct s5c73m3 *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->sensor_sd);
}
