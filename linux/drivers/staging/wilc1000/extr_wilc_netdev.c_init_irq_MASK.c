
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {struct wilc* wilc; } ;
struct wilc {int dev_irq_num; int gpio_irq; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,int,char*,struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 int VAR_5 = 0;
 struct wilc_vif *VAR_6 = FUNC_4(VAR_4);
 struct wilc *VAR_7 = VAR_6->wilc;

 VAR_5 = FUNC_0(VAR_7->gpio_irq);
 if (VAR_5) {
  FUNC_3(VAR_4, "could not obtain gpio for WILC_INTR\n");
  return VAR_5;
 }

 VAR_7->dev_irq_num = FUNC_1(VAR_7->gpio_irq);

 VAR_5 = FUNC_5(VAR_7->dev_irq_num, VAR_3,
       VAR_2,
       VAR_1 | VAR_0,
       "WILC_IRQ", VAR_4);
 if (VAR_5 < 0)
  FUNC_3(VAR_4, "Failed to request IRQ\n");
 else
  FUNC_2(VAR_4, "IRQ request succeeded IRQ-NUM= %d\n",
      VAR_7->dev_irq_num);

 return VAR_5;
}
