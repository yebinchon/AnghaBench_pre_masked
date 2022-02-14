
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct greth_private* priv; } ;
struct greth_private {TYPE_1__* regs; } ;
struct TYPE_2__ {int mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct greth_private*) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_2, int VAR_3, int VAR_4)
{
 struct greth_private *VAR_5 = VAR_2->priv;
 int VAR_6;

 if (!FUNC_2(VAR_5))
  return -VAR_0;

 FUNC_1(VAR_5->regs->mdio, ((VAR_3 & 0x1F) << 11) | ((VAR_4 & 0x1F) << 6) | 2);

 if (!FUNC_2(VAR_5))
  return -VAR_0;

 if (!(FUNC_0(VAR_5->regs->mdio) & VAR_1)) {
  VAR_6 = (FUNC_0(VAR_5->regs->mdio) >> 16) & 0xFFFF;
  return VAR_6;

 } else {
  return -1;
 }
}
