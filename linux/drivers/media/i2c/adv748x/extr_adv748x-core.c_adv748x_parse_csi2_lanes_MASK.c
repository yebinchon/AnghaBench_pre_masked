
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned int port; } ;
struct TYPE_6__ {unsigned int num_data_lanes; } ;
struct TYPE_7__ {TYPE_1__ mipi_csi2; } ;
struct v4l2_fwnode_endpoint {TYPE_4__ base; TYPE_2__ bus; int bus_type; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {unsigned int num_lanes; } ;
struct TYPE_8__ {unsigned int num_lanes; } ;
struct adv748x_state {TYPE_5__ txb; TYPE_3__ txa; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adv748x_state*,char*,unsigned int) ;
 int FUNC_1 (struct adv748x_state*,char*,unsigned int) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_4(struct adv748x_state *VAR_4,
        unsigned int VAR_5,
        struct device_node *VAR_6)
{
 struct v4l2_fwnode_endpoint VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_5 != VAR_0 && VAR_5 != VAR_1)
  return 0;

 VAR_7.bus_type = VAR_3;
 VAR_9 = FUNC_3(FUNC_2(VAR_6), &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_7.bus.mipi_csi2.num_data_lanes;

 if (VAR_7.base.port == VAR_0) {
  if (VAR_8 != 1 && VAR_8 != 2 && VAR_8 != 4) {
   FUNC_1(VAR_4, "TXA: Invalid number (%u) of lanes\n",
    VAR_8);
   return -VAR_2;
  }

  VAR_4->txa.num_lanes = VAR_8;
  FUNC_0(VAR_4, "TXA: using %u lanes\n", VAR_4->txa.num_lanes);
 }

 if (VAR_7.base.port == VAR_1) {
  if (VAR_8 != 1) {
   FUNC_1(VAR_4, "TXB: Invalid number (%u) of lanes\n",
    VAR_8);
   return -VAR_2;
  }

  VAR_4->txb.num_lanes = VAR_8;
  FUNC_0(VAR_4, "TXB: using %u lanes\n", VAR_4->txb.num_lanes);
 }

 return 0;
}
