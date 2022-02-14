
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int ctrl_handler; } ;
struct TYPE_6__ {int num_data_lanes; } ;
struct TYPE_5__ {TYPE_3__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; } ;
struct v4l2_ctrl {int dummy; } ;
struct TYPE_4__ {int code; } ;
struct mipid02_dev {TYPE_1__ fmt; struct v4l2_fwnode_endpoint rx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct v4l2_ctrl* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct v4l2_ctrl*) ;

__attribute__((used)) static u32 FUNC_3(struct mipid02_dev *VAR_1,
           struct v4l2_subdev *VAR_2)
{
 struct v4l2_fwnode_endpoint *VAR_3 = &VAR_1->rx;
 struct v4l2_ctrl *VAR_4;
 u32 VAR_5;
 u32 VAR_6 = FUNC_0(VAR_1->fmt.code);

 VAR_4 = FUNC_1(VAR_2->ctrl_handler, VAR_0);
 if (!VAR_4)
  return 0;
 VAR_5 = FUNC_2(VAR_4);

 return VAR_5 * VAR_6 / (2 * VAR_3->bus.mipi_csi2.num_data_lanes);
}
