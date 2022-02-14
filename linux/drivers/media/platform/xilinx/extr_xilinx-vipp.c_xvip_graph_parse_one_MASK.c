
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xvip_graph_entity {int dummy; } ;
struct xvip_composite_device {int notifier; TYPE_1__* dev; } ;
struct v4l2_async_subdev {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_async_subdev*) ;
 int FUNC_1 (struct v4l2_async_subdev*) ;
 int FUNC_2 (TYPE_1__*,char*,struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_3 (struct fwnode_handle*,struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_4 (struct fwnode_handle*) ;
 int FUNC_5 (struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_6 (int ) ;
 struct v4l2_async_subdev* FUNC_7 (int *,struct fwnode_handle*,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct xvip_composite_device*,struct fwnode_handle*) ;

__attribute__((used)) static int FUNC_10(struct xvip_composite_device *VAR_1,
    struct fwnode_handle *VAR_2)
{
 struct fwnode_handle *VAR_3;
 struct fwnode_handle *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 FUNC_2(VAR_1->dev, "parsing node %p\n", VAR_2);

 while (1) {
  struct v4l2_async_subdev *VAR_6;

  VAR_4 = FUNC_3(VAR_2, VAR_4);
  if (VAR_4 == ((void*)0))
   break;

  FUNC_2(VAR_1->dev, "handling endpoint %p\n", VAR_4);

  VAR_3 = FUNC_4(VAR_4);
  if (VAR_3 == ((void*)0)) {
   VAR_5 = -VAR_0;
   goto err_notifier_cleanup;
  }

  FUNC_5(VAR_4);


  if (VAR_3 == FUNC_6(VAR_1->dev->of_node) ||
      FUNC_9(VAR_1, VAR_3)) {
   FUNC_5(VAR_3);
   continue;
  }

  VAR_6 = FUNC_7(
   &VAR_1->notifier, VAR_3,
   sizeof(struct xvip_graph_entity));
  FUNC_5(VAR_3);
  if (FUNC_0(VAR_6)) {
   VAR_5 = FUNC_1(VAR_6);
   goto err_notifier_cleanup;
  }
 }

 return 0;

err_notifier_cleanup:
 FUNC_8(&VAR_1->notifier);
 FUNC_5(VAR_4);
 return VAR_5;
}
