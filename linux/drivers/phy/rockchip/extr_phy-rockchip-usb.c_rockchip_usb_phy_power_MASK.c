
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_usb_phy {int reg_offset; TYPE_1__* base; } ;
struct TYPE_2__ {int reg_base; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rockchip_usb_phy *VAR_1,
        bool VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2 ? VAR_0 : 0, VAR_0);

 return FUNC_1(VAR_1->base->reg_base, VAR_1->reg_offset, VAR_3);
}
