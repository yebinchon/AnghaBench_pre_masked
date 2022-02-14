
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb3phy_reg {int write_enable; int enable_bit; int offset; } ;
struct rockchip_typec_phy {int grf_regs; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct rockchip_typec_phy *VAR_0,
      const struct usb3phy_reg *VAR_1, bool VAR_2)
{
 u32 VAR_3 = 1 << VAR_1->write_enable;
 u32 VAR_4 = VAR_2 << VAR_1->enable_bit;

 return FUNC_0(VAR_0->grf_regs, VAR_1->offset, VAR_4 | VAR_3);
}
