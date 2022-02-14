
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int entity; } ;
struct csis_state {TYPE_1__ sd; int * clock; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct v4l2_subdev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct csis_state*) ;
 int FUNC_6 (int *,int) ;
 struct csis_state* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_2(VAR_1);
 struct csis_state *VAR_3 = FUNC_7(VAR_2);

 FUNC_3(&VAR_1->dev);
 FUNC_6(&VAR_1->dev, 1);
 FUNC_0(VAR_3->clock[VAR_0]);
 FUNC_4(&VAR_1->dev);
 FUNC_5(VAR_3);

 FUNC_1(&VAR_3->sd.entity);

 return 0;
}
