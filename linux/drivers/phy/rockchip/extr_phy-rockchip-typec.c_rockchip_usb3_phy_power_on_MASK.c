
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb3phy_reg {int enable_bit; int offset; } ;
struct rockchip_usb3phy_port_cfg {struct usb3phy_reg pipe_status; } ;
struct rockchip_typec_phy {int mode; int lock; int grf_regs; struct rockchip_usb3phy_port_cfg* port_cfgs; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rockchip_typec_phy* FUNC_3 (struct phy*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (struct rockchip_typec_phy*,int) ;
 int FUNC_6 (struct rockchip_typec_phy*) ;
 int FUNC_7 (struct rockchip_typec_phy*) ;
 int FUNC_8 (struct rockchip_typec_phy*,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct phy *VAR_4)
{
 struct rockchip_typec_phy *VAR_5 = FUNC_3(VAR_4);
 const struct rockchip_usb3phy_port_cfg *VAR_6 = VAR_5->port_cfgs;
 const struct usb3phy_reg *VAR_7 = &VAR_6->pipe_status;
 int VAR_8, VAR_9, VAR_10 = 0;
 u32 VAR_11;

 FUNC_1(&VAR_5->lock);

 VAR_9 = FUNC_6(VAR_5);
 if (VAR_9 < 0) {
  VAR_10 = VAR_9;
  goto unlock_ret;
 }


 if (!(VAR_9 & (VAR_1 | VAR_3))) {
  FUNC_5(VAR_5, 1);
  goto unlock_ret;
 }

 if (VAR_5->mode == VAR_9)
  goto unlock_ret;

 if (VAR_5->mode == VAR_2) {
  VAR_10 = FUNC_8(VAR_5, VAR_9);
  if (VAR_10)
   goto unlock_ret;
 }


 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  FUNC_4(VAR_5->grf_regs, VAR_7->offset, &VAR_11);
  if (!(VAR_11 & FUNC_0(VAR_7->enable_bit))) {
   VAR_5->mode |= VAR_9 & (VAR_1 | VAR_3);


   FUNC_5(VAR_5, 0);
   goto unlock_ret;
  }
  FUNC_9(10, 20);
 }

 if (VAR_5->mode == VAR_2)
  FUNC_7(VAR_5);

 VAR_10 = -VAR_0;

unlock_ret:
 FUNC_2(&VAR_5->lock);
 return VAR_10;
}
