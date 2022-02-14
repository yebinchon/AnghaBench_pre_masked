
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int entity; } ;
struct TYPE_11__ {int pol; int pos; } ;
struct iss_csiphy_lanes_cfg {TYPE_5__ clk; TYPE_4__* data; } ;
struct TYPE_8__ {struct iss_csiphy_lanes_cfg lanecfg; } ;
struct TYPE_9__ {TYPE_2__ csi2; } ;
struct iss_v4l2_subdevs_group {scalar_t__ interface; TYPE_3__ bus; } ;
struct iss_pipeline {int external_rate; int external_bpp; TYPE_1__* external; } ;
struct iss_device {int syscon; } ;
struct iss_csiphy_dphy_cfg {int tclk_settle; int tclk_miss; int tclk_term; void* ths_settle; void* ths_term; } ;
struct iss_csi2_device {TYPE_6__* phy; } ;
struct TYPE_12__ {int used_data_lanes; unsigned int max_data_lanes; int mutex; struct iss_csiphy_lanes_cfg lanes; struct iss_csiphy_dphy_cfg dphy; } ;
struct TYPE_10__ {int pos; int pol; } ;
struct TYPE_7__ {struct iss_v4l2_subdevs_group* host_priv; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,int) ;
 struct iss_pipeline* FUNC_5 (int *) ;
 struct iss_csi2_device* FUNC_6 (struct v4l2_subdev*) ;

int FUNC_7(struct iss_device *VAR_14,
      struct v4l2_subdev *VAR_15)
{
 struct iss_csi2_device *VAR_16 = FUNC_6(VAR_15);
 struct iss_pipeline *VAR_17 = FUNC_5(&VAR_15->entity);
 struct iss_v4l2_subdevs_group *VAR_18 = VAR_17->external->host_priv;
 struct iss_csiphy_dphy_cfg VAR_19;
 int VAR_20;
 struct iss_csiphy_lanes_cfg *VAR_21;
 unsigned int VAR_22 = 0;
 u32 VAR_23;
 unsigned int VAR_24;

 VAR_21 = &VAR_18->bus.csi2.lanecfg;
 FUNC_3(VAR_14->syscon, 0x68, &VAR_23);

 if (VAR_18->interface == VAR_1) {
  VAR_23 &= ~(VAR_5 |
    VAR_3);


  VAR_23 |=
   0x1f << VAR_6;

  VAR_23 |= VAR_4;
 }

 if (VAR_18->interface == VAR_2) {
  VAR_23 &= ~(VAR_9 |
    VAR_7);


  VAR_23 |=
   0x3 << VAR_10;

  VAR_23 |= VAR_8;
 }

 FUNC_4(VAR_14->syscon, 0x68, VAR_23);


 VAR_16->phy->used_data_lanes = 0;


 for (VAR_24 = 0; VAR_24 < VAR_16->phy->max_data_lanes; VAR_24++) {
  if (VAR_21->data[VAR_24].pos == 0)
   continue;

  if (VAR_21->data[VAR_24].pol > 1 ||
      VAR_21->data[VAR_24].pos > (VAR_16->phy->max_data_lanes + 1))
   return -VAR_0;

  if (VAR_22 & (1 << VAR_21->data[VAR_24].pos))
   return -VAR_0;

  VAR_22 |= 1 << VAR_21->data[VAR_24].pos;
  VAR_16->phy->used_data_lanes++;
 }

 if (VAR_21->clk.pol > 1 ||
     VAR_21->clk.pos > (VAR_16->phy->max_data_lanes + 1))
  return -VAR_0;

 if (VAR_21->clk.pos == 0 || VAR_22 & (1 << VAR_21->clk.pos))
  return -VAR_0;

 VAR_20 = VAR_17->external_rate / 1000
  / (2 * VAR_16->phy->used_data_lanes)
  * VAR_17->external_bpp;





 VAR_19.ths_term = FUNC_0(25 * VAR_20, 2000000) - 1;
 VAR_19.ths_settle = FUNC_0(90 * VAR_20, 1000000) + 3;
 VAR_19.tclk_term = VAR_13;
 VAR_19.tclk_miss = VAR_11;
 VAR_19.tclk_settle = VAR_12;

 FUNC_1(&VAR_16->phy->mutex);
 VAR_16->phy->dphy = VAR_19;
 VAR_16->phy->lanes = *VAR_21;
 FUNC_2(&VAR_16->phy->mutex);

 return 0;
}
