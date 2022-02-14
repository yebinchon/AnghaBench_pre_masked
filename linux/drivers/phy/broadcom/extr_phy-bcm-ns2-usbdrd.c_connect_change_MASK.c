
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ns2_phy_driver {scalar_t__ icfgdrd_regs; scalar_t__ usb2h_strap_reg; TYPE_1__* data; } ;
struct TYPE_2__ {int new_state; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ns2_phy_driver *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 VAR_7 = VAR_6->data->new_state;
 VAR_8 = FUNC_1(VAR_6->icfgdrd_regs + VAR_4);

 switch (VAR_7) {
 case 129:
  VAR_8 &= ~(VAR_1 | VAR_0);
  FUNC_2(VAR_8, VAR_6->icfgdrd_regs + VAR_4);

  VAR_8 = (VAR_8 & ~VAR_1) | VAR_0;
  FUNC_2(VAR_8, VAR_6->icfgdrd_regs + VAR_4);

  VAR_8 = FUNC_1(VAR_6->icfgdrd_regs + VAR_3);
  VAR_8 |= VAR_2;
  FUNC_2(VAR_8, VAR_6->icfgdrd_regs + VAR_3);
  break;

 case 128:
  VAR_8 &= ~(VAR_1 | VAR_0);
  FUNC_2(VAR_8, VAR_6->icfgdrd_regs + VAR_4);

  VAR_8 = (VAR_8 & ~VAR_0) | VAR_1;
  FUNC_2(VAR_8, VAR_6->icfgdrd_regs + VAR_4);

  VAR_8 = FUNC_1(VAR_6->usb2h_strap_reg);
  VAR_8 |= VAR_5;
  FUNC_2(VAR_8, VAR_6->usb2h_strap_reg);

  VAR_8 = FUNC_1(VAR_6->icfgdrd_regs + VAR_3);
  VAR_8 &= ~VAR_2;
  FUNC_2(VAR_8, VAR_6->icfgdrd_regs + VAR_3);
  break;

 default:
  FUNC_0("Invalid extcon event\n");
  break;
 }
}
