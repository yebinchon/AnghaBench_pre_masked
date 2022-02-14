
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int v4l2_dev; } ;
struct pxa_camera_dev {int mlock; int * sensor; int vdev; int * mclk_clk; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pxa_camera_dev*) ;
 int FUNC_5 (struct pxa_camera_dev*) ;
 int FUNC_6 (struct pxa_camera_dev*) ;
 int FUNC_7 (int *) ;
 struct pxa_camera_dev* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct v4l2_async_notifier *VAR_1,
       struct v4l2_subdev *VAR_2,
       struct v4l2_async_subdev *VAR_3)
{
 struct pxa_camera_dev *VAR_4 = FUNC_8(VAR_1->v4l2_dev);

 FUNC_2(&VAR_4->mlock);
 FUNC_1(FUNC_4(VAR_4),
   "PXA Camera driver detached from camera %s\n",
   VAR_2->name);


 FUNC_0(0x3ff, VAR_4->base + VAR_0);


 FUNC_6(VAR_4);

 FUNC_5(VAR_4);

 if (VAR_4->mclk_clk) {
  FUNC_7(VAR_4->mclk_clk);
  VAR_4->mclk_clk = ((void*)0);
 }

 FUNC_9(&VAR_4->vdev);
 VAR_4->sensor = ((void*)0);

 FUNC_3(&VAR_4->mlock);
}
