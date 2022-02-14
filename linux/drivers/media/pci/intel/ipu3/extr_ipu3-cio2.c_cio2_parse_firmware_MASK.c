
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int num_data_lanes; } ;
struct TYPE_11__ {TYPE_3__ mipi_csi2; } ;
struct TYPE_8__ {int port; } ;
struct v4l2_fwnode_endpoint {TYPE_4__ bus; TYPE_1__ base; int bus_type; } ;
struct TYPE_9__ {int lanes; int port; } ;
struct sensor_async_subdev {int asd; TYPE_2__ csi2; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_13__ {int * ops; } ;
struct cio2_device {TYPE_5__* pci_dev; TYPE_6__ notifier; int v4l2_dev; } ;
struct TYPE_12__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 struct fwnode_handle* FUNC_2 (int ,unsigned int,int ,int ) ;
 int FUNC_3 (struct fwnode_handle*) ;
 int FUNC_4 (struct sensor_async_subdev*) ;
 struct sensor_async_subdev* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_6__*,struct fwnode_handle*,int *) ;
 int FUNC_7 (int *,TYPE_6__*) ;
 int FUNC_8 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_9(struct cio2_device *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct v4l2_fwnode_endpoint VAR_9 = {
   .bus_type = VAR_4
  };
  struct sensor_async_subdev *VAR_10 = ((void*)0);
  struct fwnode_handle *VAR_11;

  VAR_11 = FUNC_2(
   FUNC_1(&VAR_6->pci_dev->dev), VAR_7, 0,
   VAR_2);

  if (!VAR_11)
   continue;

  VAR_8 = FUNC_8(VAR_11, &VAR_9);
  if (VAR_8)
   goto err_parse;

  VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_3);
  if (!VAR_10) {
   VAR_8 = -VAR_1;
   goto err_parse;
  }

  VAR_10->csi2.port = VAR_9.base.port;
  VAR_10->csi2.lanes = VAR_9.bus.mipi_csi2.num_data_lanes;

  VAR_8 = FUNC_6(
   &VAR_6->notifier, VAR_11, &VAR_10->asd);
  if (VAR_8)
   goto err_parse;

  FUNC_3(VAR_11);

  continue;

err_parse:
  FUNC_3(VAR_11);
  FUNC_4(VAR_10);
  return VAR_8;
 }





 VAR_6->notifier.ops = &VAR_5;
 VAR_8 = FUNC_7(&VAR_6->v4l2_dev, &VAR_6->notifier);
 if (VAR_8)
  FUNC_0(&VAR_6->pci_dev->dev,
   "failed to register async notifier : %d\n", VAR_8);

 return VAR_8;
}
