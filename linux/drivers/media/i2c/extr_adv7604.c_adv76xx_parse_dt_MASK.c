
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {unsigned int flags; } ;
struct TYPE_9__ {TYPE_3__ parallel; } ;
struct v4l2_fwnode_endpoint {scalar_t__ bus_type; TYPE_4__ bus; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {int default_input; int inv_hs_pol; int inv_vs_pol; int inv_llc_pol; int insert_av_codes; int blank_data; void* dr_str_sync; void* dr_str_clk; void* dr_str_data; int bus_order; int op_format_mode_sel; scalar_t__ disable_cable_det_rst; scalar_t__ disable_pwrdnb; int int1_config; } ;
struct adv76xx_state {TYPE_5__ pdata; TYPE_2__** i2c_clients; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (int ,struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static int FUNC_5(struct adv76xx_state *VAR_10)
{
 struct v4l2_fwnode_endpoint VAR_11 = { .bus_type = 0 };
 struct device_node *VAR_12;
 struct device_node *VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 u32 VAR_16;

 VAR_13 = VAR_10->i2c_clients[VAR_4]->dev.of_node;


 VAR_12 = FUNC_1(VAR_13, ((void*)0));
 if (!VAR_12)
  return -VAR_5;

 VAR_15 = FUNC_4(FUNC_0(VAR_12), &VAR_11);
 FUNC_2(VAR_12);
 if (VAR_15)
  return VAR_15;

 if (!FUNC_3(VAR_13, "default-input", &VAR_16))
  VAR_10->pdata.default_input = VAR_16;
 else
  VAR_10->pdata.default_input = -1;

 VAR_14 = VAR_11.bus.parallel.flags;

 if (VAR_14 & VAR_7)
  VAR_10->pdata.inv_hs_pol = 1;

 if (VAR_14 & VAR_9)
  VAR_10->pdata.inv_vs_pol = 1;

 if (VAR_14 & VAR_8)
  VAR_10->pdata.inv_llc_pol = 1;

 if (VAR_11.bus_type == VAR_6)
  VAR_10->pdata.insert_av_codes = 1;


 VAR_10->pdata.int1_config = VAR_3;


 VAR_10->pdata.disable_pwrdnb = 0;
 VAR_10->pdata.disable_cable_det_rst = 0;
 VAR_10->pdata.blank_data = 1;
 VAR_10->pdata.op_format_mode_sel = VAR_1;
 VAR_10->pdata.bus_order = VAR_0;
 VAR_10->pdata.dr_str_data = VAR_2;
 VAR_10->pdata.dr_str_clk = VAR_2;
 VAR_10->pdata.dr_str_sync = VAR_2;

 return 0;
}
