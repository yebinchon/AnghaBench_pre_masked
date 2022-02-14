
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mii_bus {struct greth_private* priv; } ;
struct greth_private {TYPE_1__* regs; } ;
struct TYPE_2__ {int mdio; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct greth_private*) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_1, int VAR_2, int VAR_3, u16 VAR_4)
{
 struct greth_private *VAR_5 = VAR_1->priv;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 FUNC_0(VAR_5->regs->mdio,
        ((VAR_4 & 0xFFFF) << 16) | ((VAR_2 & 0x1F) << 11) | ((VAR_3 & 0x1F) << 6) | 1);

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 return 0;
}
