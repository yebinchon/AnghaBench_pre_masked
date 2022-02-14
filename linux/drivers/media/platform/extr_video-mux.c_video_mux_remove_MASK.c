
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct video_mux {struct v4l2_subdev subdev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct video_mux* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct video_mux *VAR_1 = FUNC_1(VAR_0);
 struct v4l2_subdev *VAR_2 = &VAR_1->subdev;

 FUNC_2(VAR_2);
 FUNC_0(&VAR_2->entity);

 return 0;
}
