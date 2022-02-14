
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpbe_layer {int video_dev; } ;
struct vpbe_display {struct vpbe_layer** dev; struct vpbe_device* vpbe_dev; } ;
struct TYPE_2__ {int (* deinitialize ) (int *,struct vpbe_device*) ;} ;
struct vpbe_device {TYPE_1__ ops; int v4l2_dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vpbe_layer*) ;
 struct vpbe_display* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,struct vpbe_device*) ;
 int FUNC_3 (int,int ,int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct vpbe_layer *VAR_3;
 struct vpbe_display *VAR_4 = FUNC_1(VAR_2);
 struct vpbe_device *VAR_5 = VAR_4->vpbe_dev;
 int VAR_6;

 FUNC_3(1, VAR_1, &VAR_5->v4l2_dev, "vpbe_display_remove\n");


 if (VAR_5->ops.deinitialize)
  VAR_5->ops.deinitialize(&VAR_2->dev, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {

  VAR_3 = VAR_4->dev[VAR_6];

  FUNC_4(&VAR_3->video_dev);

 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(VAR_4->dev[VAR_6]);
  VAR_4->dev[VAR_6] = ((void*)0);
 }

 return 0;
}
