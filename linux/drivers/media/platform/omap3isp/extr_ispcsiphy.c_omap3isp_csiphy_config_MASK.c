
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
struct isp_pipeline {int external_rate; int external_width; int external; } ;
struct TYPE_10__ {int pol; int pos; } ;
struct isp_csiphy_lanes_cfg {TYPE_5__ clk; TYPE_4__* data; } ;
struct isp_csiphy {unsigned int num_data_lanes; int cfg_regs; int isp; int phy_regs; int entity; } ;
struct TYPE_7__ {int phy_layer; struct isp_csiphy_lanes_cfg lanecfg; } ;
struct TYPE_6__ {unsigned int num_data_lanes; struct isp_csiphy_lanes_cfg lanecfg; } ;
struct TYPE_8__ {TYPE_2__ ccp2; TYPE_1__ csi2; } ;
struct isp_bus_cfg {scalar_t__ interface; TYPE_3__ bus; } ;
struct TYPE_9__ {int pol; int pos; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (struct isp_csiphy*,scalar_t__,int,int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int,int ,int ) ;
 struct isp_pipeline* FUNC_9 (int ) ;
 struct isp_bus_cfg* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct isp_csiphy *VAR_23)
{
 struct isp_pipeline *VAR_24 = FUNC_9(VAR_23->entity);
 struct isp_bus_cfg *VAR_25 = FUNC_10(VAR_24->external);
 struct isp_csiphy_lanes_cfg *VAR_26;
 int VAR_27;
 unsigned int VAR_28, VAR_29 = 0;
 unsigned int VAR_30;
 u32 VAR_31;

 if (VAR_25->interface == VAR_18
     || VAR_25->interface == VAR_19) {
  VAR_26 = &VAR_25->bus.ccp2.lanecfg;
  VAR_28 = 1;
 } else {
  VAR_26 = &VAR_25->bus.csi2.lanecfg;
  VAR_28 = VAR_25->bus.csi2.num_data_lanes;
 }

 if (VAR_28 > VAR_23->num_data_lanes)
  return -VAR_0;


 for (VAR_30 = 0; VAR_30 < VAR_28; VAR_30++) {
  if (VAR_26->data[VAR_30].pol > 1 || VAR_26->data[VAR_30].pos > 3)
   return -VAR_0;

  if (VAR_29 & (1 << VAR_26->data[VAR_30].pos))
   return -VAR_0;

  VAR_29 |= 1 << VAR_26->data[VAR_30].pos;
 }

 if (VAR_26->clk.pol > 1 || VAR_26->clk.pos > 3)
  return -VAR_0;

 if (VAR_26->clk.pos == 0 || VAR_29 & (1 << VAR_26->clk.pos))
  return -VAR_0;






 FUNC_5(VAR_23, VAR_25->interface, 1,
      VAR_25->bus.ccp2.phy_layer);



 VAR_27 = VAR_24->external_rate / 1000
  / (2 * FUNC_6(VAR_29)) * VAR_24->external_width;

 VAR_31 = FUNC_7(VAR_23->isp, VAR_23->phy_regs, VAR_6);

 VAR_31 &= ~(VAR_9 |
   VAR_7);

 VAR_31 |= (FUNC_0(25 * VAR_27, 2000000) - 1)
  << VAR_10;

 VAR_31 |= (FUNC_0(90 * VAR_27, 1000000) + 3)
  << VAR_8;

 FUNC_8(VAR_23->isp, VAR_31, VAR_23->phy_regs, VAR_6);

 VAR_31 = FUNC_7(VAR_23->isp, VAR_23->phy_regs, VAR_11);

 VAR_31 &= ~(VAR_16 |
   VAR_12 |
   VAR_14);
 VAR_31 |= VAR_22 << VAR_17;
 VAR_31 |= VAR_20 << VAR_13;
 VAR_31 |= VAR_21 << VAR_15;

 FUNC_8(VAR_23->isp, VAR_31, VAR_23->phy_regs, VAR_11);


 VAR_31 = FUNC_7(VAR_23->isp, VAR_23->cfg_regs, VAR_1);

 for (VAR_30 = 0; VAR_30 < VAR_28; VAR_30++) {
  VAR_31 &= ~(FUNC_1(VAR_30 + 1) |
    FUNC_3(VAR_30 + 1));
  VAR_31 |= (VAR_26->data[VAR_30].pol <<
   FUNC_2(VAR_30 + 1));
  VAR_31 |= (VAR_26->data[VAR_30].pos <<
   FUNC_4(VAR_30 + 1));
 }

 VAR_31 &= ~(VAR_2 |
   VAR_4);
 VAR_31 |= VAR_26->clk.pol << VAR_3;
 VAR_31 |= VAR_26->clk.pos << VAR_5;

 FUNC_8(VAR_23->isp, VAR_31, VAR_23->cfg_regs, VAR_1);

 return 0;
}
