
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct korina_private {int rx_irq; TYPE_1__* eth_regs; } ;
struct TYPE_2__ {int miimwtd; int miimcmd; int miimaddr; int miimcfg; } ;


 int VAR_0 ;
 struct korina_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct korina_private *VAR_5 = FUNC_0(VAR_1);

 VAR_2 = ((VAR_5->rx_irq == 0x2c ? 1 : 0) << 8);

 FUNC_1(0, &VAR_5->eth_regs->miimcfg);
 FUNC_1(1, &VAR_5->eth_regs->miimcmd);
 FUNC_1(VAR_2 | VAR_3, &VAR_5->eth_regs->miimaddr);
 FUNC_1(VAR_0, &VAR_5->eth_regs->miimcmd);
 FUNC_1(VAR_4, &VAR_5->eth_regs->miimwtd);
}
