
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ full_duplex; } ;
struct korina_private {TYPE_1__* eth_regs; TYPE_2__ mii_if; } ;
struct TYPE_3__ {int ethmac2; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,unsigned int) ;
 struct korina_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, unsigned int VAR_2)
{
 struct korina_private *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(&VAR_3->mii_if, 0, VAR_2);

 if (VAR_3->mii_if.full_duplex)
  FUNC_3(FUNC_2(&VAR_3->eth_regs->ethmac2) | VAR_0,
      &VAR_3->eth_regs->ethmac2);
 else
  FUNC_3(FUNC_2(&VAR_3->eth_regs->ethmac2) & ~VAR_0,
      &VAR_3->eth_regs->ethmac2);
}
