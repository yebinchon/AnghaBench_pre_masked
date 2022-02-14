
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {unsigned int flags; int bus_width; } ;
struct TYPE_7__ {TYPE_2__ parallel; } ;
struct v4l2_fwnode_endpoint {TYPE_3__ bus; int bus_type; } ;
struct tda1997x_platform_data {int vidout_inv_hs; int vidout_inv_vs; int vidout_inv_de; int* vidout_port_cfg; int audout_layoutauto; int audout_layout; int audout_width; int audout_mclk_fs; int audout_format; int vidout_bus_width; int vidout_bus_type; int vidout_sel_de; int vidout_sel_vs; int vidout_sel_hs; } ;
struct tda1997x_state {TYPE_4__* client; struct tda1997x_platform_data pdata; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,char const**) ;
 int FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (struct device_node*,char*,int,int*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ,struct v4l2_fwnode_endpoint*) ;
 int FUNC_9 (TYPE_4__*,char*) ;

__attribute__((used)) static int FUNC_10(struct tda1997x_state *VAR_10)
{
 struct tda1997x_platform_data *VAR_11 = &VAR_10->pdata;
 struct v4l2_fwnode_endpoint VAR_12 = { .bus_type = 0 };
 struct device_node *VAR_13;
 struct device_node *VAR_14;
 unsigned int VAR_15;
 const char *VAR_16;
 int VAR_17;
 u32 VAR_18;
 VAR_11->vidout_sel_hs = VAR_5;
 VAR_11->vidout_sel_vs = VAR_9;
 VAR_11->vidout_sel_de = VAR_3;

 VAR_14 = VAR_10->client->dev.of_node;
 VAR_13 = FUNC_1(VAR_14, ((void*)0));
 if (!VAR_13)
  return -VAR_4;

 VAR_17 = FUNC_8(FUNC_0(VAR_13), &VAR_12);
 if (VAR_17) {
  FUNC_2(VAR_13);
  return VAR_17;
 }
 FUNC_2(VAR_13);
 VAR_11->vidout_bus_type = VAR_12.bus_type;


 VAR_15 = VAR_12.bus.parallel.flags;
 if (VAR_15 & VAR_7)
  VAR_11->vidout_inv_hs = 1;
 if (VAR_15 & VAR_8)
  VAR_11->vidout_inv_vs = 1;
 if (VAR_15 & VAR_6)
  VAR_11->vidout_inv_de = 1;
 VAR_11->vidout_bus_width = VAR_12.bus.parallel.bus_width;


 VAR_17 = FUNC_3(VAR_14, "nxp,vidout-portcfg");
 if (VAR_17 > 0) {
  u32 VAR_19, VAR_20, VAR_21;

  for (VAR_21 = 0; VAR_21 < VAR_17 / 2 && VAR_21 < 9; VAR_21++) {
   FUNC_6(VAR_14, "nxp,vidout-portcfg",
         VAR_21 * 2, &VAR_19);
   FUNC_6(VAR_14, "nxp,vidout-portcfg",
         VAR_21 * 2 + 1, &VAR_20);
   if (VAR_19 < 9)
    VAR_11->vidout_port_cfg[VAR_19] = VAR_20;
  }
 } else {
  FUNC_9(VAR_10->client, "nxp,vidout-portcfg missing\n");
  return -VAR_4;
 }


 VAR_11->audout_layoutauto = 1;

 VAR_11->audout_format = VAR_0;
 if (!FUNC_4(VAR_14, "nxp,audout-format", &VAR_16)) {
  if (FUNC_7(VAR_16, "i2s") == 0)
   VAR_11->audout_format = VAR_1;
  else if (FUNC_7(VAR_16, "spdif") == 0)
   VAR_11->audout_format = VAR_2;
  else {
   FUNC_9(VAR_10->client, "nxp,audout-format invalid\n");
   return -VAR_4;
  }
  if (!FUNC_5(VAR_14, "nxp,audout-layout", &VAR_18)) {
   switch (VAR_18) {
   case 0:
   case 1:
    break;
   default:
    FUNC_9(VAR_10->client,
     "nxp,audout-layout invalid\n");
    return -VAR_4;
   }
   VAR_11->audout_layout = VAR_18;
  }
  if (!FUNC_5(VAR_14, "nxp,audout-width", &VAR_18)) {
   switch (VAR_18) {
   case 16:
   case 32:
    break;
   default:
    FUNC_9(VAR_10->client,
     "nxp,audout-width invalid\n");
    return -VAR_4;
   }
   VAR_11->audout_width = VAR_18;
  }
  if (!FUNC_5(VAR_14, "nxp,audout-mclk-fs", &VAR_18)) {
   switch (VAR_18) {
   case 512:
   case 256:
   case 128:
   case 64:
   case 32:
   case 16:
    break;
   default:
    FUNC_9(VAR_10->client,
     "nxp,audout-mclk-fs invalid\n");
    return -VAR_4;
   }
   VAR_11->audout_mclk_fs = VAR_18;
  }
 }

 return 0;
}
