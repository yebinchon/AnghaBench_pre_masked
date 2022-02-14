
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct net_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 if (VAR_1->irq)
  FUNC_0(VAR_1->irq, VAR_1);
 FUNC_1(VAR_1->base_addr, VAR_0);
}
