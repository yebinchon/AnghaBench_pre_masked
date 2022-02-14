
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct greth_private {TYPE_1__* regs; } ;
struct TYPE_2__ {int mdio; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct greth_private *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + 4*VAR_1/100;
 while (FUNC_0(VAR_3->regs->mdio) & VAR_0) {
  if (FUNC_1(VAR_2, VAR_4))
   return 0;
 }
 return 1;
}
