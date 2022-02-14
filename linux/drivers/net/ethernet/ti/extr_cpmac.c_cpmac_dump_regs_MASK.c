
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct cpmac_priv {scalar_t__ regs; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 struct cpmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 int VAR_2;
 struct cpmac_priv *VAR_3 = FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2 += 4) {
  if (VAR_2 % 16 == 0) {
   if (VAR_2)
    FUNC_2("\n");
   FUNC_2("%s: reg[%p]:", VAR_1->name, VAR_3->regs + VAR_2);
  }
  FUNC_2(" %08x", FUNC_0(VAR_3->regs, VAR_2));
 }
 FUNC_2("\n");
}
