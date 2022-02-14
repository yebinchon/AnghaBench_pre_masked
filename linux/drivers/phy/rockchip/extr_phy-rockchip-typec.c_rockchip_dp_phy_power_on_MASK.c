
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_usb3phy_port_cfg {int uphy_dp_sel; } ;
struct rockchip_typec_phy {int mode; int lock; int dev; scalar_t__ base; struct rockchip_usb3phy_port_cfg* port_cfgs; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rockchip_typec_phy* FUNC_3 (struct phy*) ;
 int FUNC_4 (struct rockchip_typec_phy*,int *,int) ;
 int VAR_9 ;
 int FUNC_5 (int ,scalar_t__,int,int,int,int ) ;
 int FUNC_6 (struct rockchip_typec_phy*) ;
 int FUNC_7 (struct rockchip_typec_phy*) ;
 int FUNC_8 (struct rockchip_typec_phy*) ;
 int FUNC_9 (struct rockchip_typec_phy*,int) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct phy *VAR_10)
{
 struct rockchip_typec_phy *VAR_11 = FUNC_3(VAR_10);
 const struct rockchip_usb3phy_port_cfg *VAR_12 = VAR_11->port_cfgs;
 int VAR_13, VAR_14 = 0;
 u32 VAR_15;

 FUNC_1(&VAR_11->lock);

 VAR_13 = FUNC_7(VAR_11);
 if (VAR_13 < 0) {
  VAR_14 = VAR_13;
  goto unlock_ret;
 }

 if (!(VAR_13 & VAR_6)) {
  VAR_14 = -VAR_5;
  goto unlock_ret;
 }

 if (VAR_11->mode == VAR_13)
  goto unlock_ret;





 if (VAR_13 == VAR_6 && VAR_11->mode != VAR_7) {
  FUNC_8(VAR_11);
  VAR_14 = FUNC_9(VAR_11, VAR_13);
 } else if (VAR_11->mode == VAR_7) {
  VAR_14 = FUNC_9(VAR_11, VAR_13);
 }
 if (VAR_14)
  goto unlock_ret;

 FUNC_4(VAR_11, &VAR_12->uphy_dp_sel, 1);

 VAR_14 = FUNC_5(VAR_9, VAR_11->base + VAR_2,
     VAR_15, VAR_15 & VAR_1, 1000,
     VAR_8);
 if (VAR_14 < 0) {
  FUNC_0(VAR_11->dev, "failed to wait TCPHY enter A2\n");
  goto power_on_finish;
 }

 FUNC_6(VAR_11);

 FUNC_10(VAR_3, VAR_11->base + VAR_2);

 VAR_14 = FUNC_5(VAR_9, VAR_11->base + VAR_2,
     VAR_15, VAR_15 & VAR_0, 1000,
     VAR_8);
 if (VAR_14 < 0) {
  FUNC_10(VAR_4, VAR_11->base + VAR_2);
  FUNC_0(VAR_11->dev, "failed to wait TCPHY enter A0\n");
  goto power_on_finish;
 }

 VAR_11->mode |= VAR_6;

power_on_finish:
 if (VAR_11->mode == VAR_7)
  FUNC_8(VAR_11);
unlock_ret:
 FUNC_2(&VAR_11->lock);
 return VAR_14;
}
