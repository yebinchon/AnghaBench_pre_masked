
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int* dev_addr; } ;
struct ioc3_private {TYPE_1__* regs; } ;
struct TYPE_2__ {int emar_l; int emar_h; } ;


 struct ioc3_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct ioc3_private *VAR_1 = FUNC_0(VAR_0);

 FUNC_1((VAR_0->dev_addr[5] << 8) |
        VAR_0->dev_addr[4],
        &VAR_1->regs->emar_h);
 FUNC_1((VAR_0->dev_addr[3] << 24) |
        (VAR_0->dev_addr[2] << 16) |
        (VAR_0->dev_addr[1] << 8) |
        VAR_0->dev_addr[0],
        &VAR_1->regs->emar_l);
}
