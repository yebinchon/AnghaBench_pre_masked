
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ops; int asd_list; } ;
struct xvip_composite_device {int dev; TYPE_1__ notifier; int v4l2_dev; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (struct xvip_composite_device*) ;
 int FUNC_4 (struct xvip_composite_device*) ;
 int VAR_0 ;
 int FUNC_5 (struct xvip_composite_device*) ;

__attribute__((used)) static int FUNC_6(struct xvip_composite_device *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "DMA initialization failed\n");
  goto done;
 }


 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "graph parsing failed\n");
  goto done;
 }

 if (FUNC_1(&VAR_1->notifier.asd_list)) {
  FUNC_0(VAR_1->dev, "no subdev found in graph\n");
  goto done;
 }


 VAR_1->notifier.ops = &VAR_0;

 VAR_2 = FUNC_2(&VAR_1->v4l2_dev, &VAR_1->notifier);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "notifier registration failed\n");
  goto done;
 }

 VAR_2 = 0;

done:
 if (VAR_2 < 0)
  FUNC_3(VAR_1);

 return VAR_2;
}
