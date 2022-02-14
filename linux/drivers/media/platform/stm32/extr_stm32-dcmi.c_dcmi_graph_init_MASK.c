
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * ops; } ;
struct TYPE_7__ {int remote_node; int asd; } ;
struct stm32_dcmi {TYPE_2__ notifier; TYPE_6__* dev; int v4l2_dev; TYPE_1__ entity; } ;
struct TYPE_9__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct stm32_dcmi*,int ) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct stm32_dcmi *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(VAR_1, VAR_1->dev->of_node);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev, "Failed to parse graph\n");
  return VAR_2;
 }

 FUNC_5(&VAR_1->notifier);

 VAR_2 = FUNC_3(&VAR_1->notifier,
          &VAR_1->entity.asd);
 if (VAR_2) {
  FUNC_1(VAR_1->dev, "Failed to add subdev notifier\n");
  FUNC_2(VAR_1->entity.remote_node);
  return VAR_2;
 }

 VAR_1->notifier.ops = &VAR_0;

 VAR_2 = FUNC_6(&VAR_1->v4l2_dev, &VAR_1->notifier);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev, "Failed to register notifier\n");
  FUNC_4(&VAR_1->notifier);
  return VAR_2;
 }

 return 0;
}
