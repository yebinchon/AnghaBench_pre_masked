
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* data_lanes; int* lane_polarities; int num_data_lanes; } ;
struct TYPE_5__ {TYPE_1__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; } ;
struct TYPE_6__ {int mode_reg1; } ;
struct mipid02_dev {TYPE_3__ r; struct v4l2_fwnode_endpoint rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct mipid02_dev*) ;
 int FUNC_1 (struct mipid02_dev*,int,int,int*) ;
 int FUNC_2 (struct mipid02_dev*,int,int,int*) ;
 int FUNC_3 (struct mipid02_dev*) ;

__attribute__((used)) static int FUNC_4(struct mipid02_dev *VAR_1)
{
 struct v4l2_fwnode_endpoint *VAR_2 = &VAR_1->rx;
 bool VAR_3 = VAR_2->bus.mipi_csi2.data_lanes[0] == 2;
 bool *VAR_4 = VAR_2->bus.mipi_csi2.lane_polarities;
 int VAR_5 = VAR_2->bus.mipi_csi2.num_data_lanes;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_3,
        VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_3,
        VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_1->r.mode_reg1 |= VAR_3 ? VAR_0 : 0;
 VAR_1->r.mode_reg1 |= (VAR_5 - 1) << 1;

 return FUNC_3(VAR_1);
}
