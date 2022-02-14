
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_device {int dev; } ;
struct isp_ccp2_device {int dummy; } ;
struct isp_ccp2_cfg {scalar_t__ phy_layer; scalar_t__ ccp2_mode; scalar_t__ strobe_clk_pol; scalar_t__ vp_clk_pol; } ;


 int FUNC_0 (int,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct isp_device*,int ,int ) ;
 int FUNC_3 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_4 (struct isp_ccp2_device*) ;

__attribute__((used)) static int FUNC_5(struct isp_ccp2_device *VAR_14,
        const struct isp_ccp2_cfg *VAR_15)
{
 struct isp_device *VAR_16 = FUNC_4(VAR_14);
 u32 VAR_17;

 VAR_17 = FUNC_2(VAR_16, VAR_13, VAR_1) |
       VAR_6;

 FUNC_0(VAR_17, VAR_8, VAR_7,
  VAR_15->phy_layer);
 FUNC_0(VAR_17, VAR_5,
  VAR_4, VAR_15->ccp2_mode);
 FUNC_0(VAR_17, VAR_3, VAR_2,
  VAR_15->strobe_clk_pol);
 FUNC_0(VAR_17, VAR_10,
  VAR_9, VAR_15->vp_clk_pol);
 FUNC_3(VAR_16, VAR_17, VAR_13, VAR_1);

 VAR_17 = FUNC_2(VAR_16, VAR_13, VAR_1);
 if (!(VAR_17 & VAR_6)) {
  if (VAR_15->ccp2_mode == VAR_11)
   FUNC_1(VAR_16->dev, "OMAP3 CCP2 bus not available\n");
  if (VAR_15->phy_layer == VAR_12)

   return -VAR_0;
 }

 return 0;
}
