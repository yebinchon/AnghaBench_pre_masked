
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_control {int (* phy_power ) (struct phy_control*,int ,int,int) ;} ;
typedef enum usb_dr_mode { ____Placeholder_usb_dr_mode } usb_dr_mode ;


 int FUNC_0 (struct phy_control*,int ,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct phy_control *VAR_0, u32 VAR_1,
    enum usb_dr_mode VAR_2, bool VAR_3)
{
 VAR_0->phy_power(VAR_0, VAR_1, VAR_2, VAR_3);
}
