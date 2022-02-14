
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* lane_polarities; scalar_t__ clock_lane; } ;
struct TYPE_5__ {TYPE_3__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; } ;
struct TYPE_4__ {int clk_lane_reg1; } ;
struct mipid02_dev {TYPE_1__ r; struct v4l2_fwnode_endpoint rx; struct i2c_client* i2c_client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct mipid02_dev *VAR_2)
{
 struct i2c_client *VAR_3 = VAR_2->i2c_client;
 struct v4l2_fwnode_endpoint *VAR_4 = &VAR_2->rx;
 bool *VAR_5 = VAR_4->bus.mipi_csi2.lane_polarities;


 if (VAR_4->bus.mipi_csi2.clock_lane != 0) {
  FUNC_0(&VAR_3->dev, "clk lane must be map to lane 0\n");
  return -VAR_1;
 }
 VAR_2->r.clk_lane_reg1 |= (VAR_5[0] << 1) | VAR_0;

 return 0;
}
