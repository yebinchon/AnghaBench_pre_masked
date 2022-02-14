
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct fimc_source_info {int dummy; } ;
struct fimc_sensor_info {int host; } ;
struct fimc_md {int slock; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct fimc_sensor_info* FUNC_1 (struct fimc_source_info*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct fimc_source_info* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_6(struct fimc_md *VAR_0,
     struct v4l2_subdev *VAR_1,
     struct v4l2_subdev *VAR_2)
{
 struct fimc_source_info *VAR_3;
 struct fimc_sensor_info *VAR_4;
 unsigned long VAR_5;

 VAR_3 = FUNC_4(VAR_1);
 if (!VAR_3 || FUNC_0(VAR_0 == ((void*)0)))
  return;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_2(&VAR_0->slock, VAR_5);
 VAR_4->host = FUNC_5(VAR_2);
 FUNC_3(&VAR_0->slock, VAR_5);
}
