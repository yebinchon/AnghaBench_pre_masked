
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_can_priv {TYPE_1__* regs; } ;
struct net_device {int dummy; } ;
struct can_berr_counter {int txerr; int rxerr; } ;
struct TYPE_2__ {int errc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct pch_can_priv* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static int FUNC_2(const struct net_device *VAR_2,
        struct can_berr_counter *VAR_3)
{
 struct pch_can_priv *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5 = FUNC_0(&VAR_4->regs->errc);

 VAR_3->txerr = VAR_5 & VAR_1;
 VAR_3->rxerr = (VAR_5 & VAR_0) >> 8;

 return 0;
}
