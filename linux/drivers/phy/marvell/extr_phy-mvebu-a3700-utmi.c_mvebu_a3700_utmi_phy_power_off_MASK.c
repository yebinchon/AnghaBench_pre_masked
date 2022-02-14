
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct phy {int dummy; } ;
struct mvebu_a3700_utmi {scalar_t__ regs; TYPE_1__* caps; } ;
struct TYPE_2__ {int usb32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 struct mvebu_a3700_utmi* FUNC_2 (struct phy*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_3)
{
 struct mvebu_a3700_utmi *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = VAR_4->caps->usb32;
 u32 VAR_6;


 VAR_6 = FUNC_3(VAR_4->regs + FUNC_1(VAR_5));
 VAR_6 &= ~(VAR_1 | FUNC_0(VAR_5));
 FUNC_4(VAR_6, VAR_4->regs + FUNC_1(VAR_5));


 if (VAR_5) {
  VAR_6 = FUNC_3(VAR_4->regs + VAR_2);
  VAR_6 &= ~VAR_0;
  FUNC_4(VAR_6, VAR_4->regs + VAR_2);
 }

 return 0;
}
