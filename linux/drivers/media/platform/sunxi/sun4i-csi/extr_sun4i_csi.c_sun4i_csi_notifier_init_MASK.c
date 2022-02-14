
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parallel; } ;
struct v4l2_fwnode_endpoint {TYPE_1__ bus; int bus_type; } ;
struct TYPE_5__ {int * ops; } ;
struct sun4i_csi {TYPE_2__ notifier; int asd; int bus; int dev; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct fwnode_handle* FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct fwnode_handle*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,struct fwnode_handle*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_6(struct sun4i_csi *VAR_4)
{
 struct v4l2_fwnode_endpoint VAR_5 = {
  .bus_type = VAR_2,
 };
 struct fwnode_handle *VAR_6;
 int VAR_7;

 FUNC_4(&VAR_4->notifier);

 VAR_6 = FUNC_1(FUNC_0(VAR_4->dev), 0, 0,
          VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_6, &VAR_5);
 if (VAR_7)
  goto out;

 VAR_4->bus = VAR_5.bus.parallel;

 VAR_7 = FUNC_3(&VAR_4->notifier,
          VAR_6, &VAR_4->asd);
 if (VAR_7)
  goto out;

 VAR_4->notifier.ops = &VAR_3;

out:
 FUNC_2(VAR_6);
 return VAR_7;
}
