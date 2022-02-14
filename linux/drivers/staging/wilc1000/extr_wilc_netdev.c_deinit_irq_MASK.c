
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {struct wilc* wilc; } ;
struct wilc {scalar_t__ dev_irq_num; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (scalar_t__,struct wilc*) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct wilc_vif *VAR_1 = FUNC_1(VAR_0);
 struct wilc *VAR_2 = VAR_1->wilc;


 if (VAR_2->dev_irq_num)
  FUNC_0(VAR_2->dev_irq_num, VAR_2);
}
