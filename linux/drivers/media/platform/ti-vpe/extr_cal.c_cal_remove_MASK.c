
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct cal_dev {struct cal_ctx** ctx; } ;
struct cal_ctx {int vdev; int v4l2_dev; int ctrl_handler; int notifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct cal_dev*,char*,int ) ;
 int FUNC_1 (struct cal_dev*) ;
 int FUNC_2 (struct cal_dev*) ;
 int FUNC_3 (struct cal_ctx*) ;
 int FUNC_4 (int,struct cal_ctx*,char*,int ) ;
 scalar_t__ FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_2)
{
 struct cal_dev *VAR_3 =
  (struct cal_dev *)FUNC_5(VAR_2);
 struct cal_ctx *VAR_4;
 int VAR_5;

 FUNC_0(1, VAR_3, "Removing %s\n", VAR_0);

 FUNC_1(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = VAR_3->ctx[VAR_5];
  if (VAR_4) {
   FUNC_4(1, VAR_4, "unregistering %s\n",
    FUNC_11(&VAR_4->vdev));
   FUNC_3(VAR_4);
   FUNC_8(&VAR_4->notifier);
   FUNC_7(&VAR_4->notifier);
   FUNC_9(&VAR_4->ctrl_handler);
   FUNC_10(&VAR_4->v4l2_dev);
   FUNC_12(&VAR_4->vdev);
  }
 }

 FUNC_2(VAR_3);
 FUNC_6(&VAR_2->dev);

 return 0;
}
