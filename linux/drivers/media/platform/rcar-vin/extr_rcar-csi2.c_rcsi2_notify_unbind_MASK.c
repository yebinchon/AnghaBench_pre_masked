
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct rcar_csi2 {int dev; int * remote; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct rcar_csi2* FUNC_1 (struct v4l2_async_notifier*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_async_notifier *VAR_0,
    struct v4l2_subdev *VAR_1,
    struct v4l2_async_subdev *VAR_2)
{
 struct rcar_csi2 *VAR_3 = FUNC_1(VAR_0);

 VAR_3->remote = ((void*)0);

 FUNC_0(VAR_3->dev, "Unbind %s\n", VAR_1->name);
}
