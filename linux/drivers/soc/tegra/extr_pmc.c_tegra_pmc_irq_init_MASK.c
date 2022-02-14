
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int irq_set_wake; int irq_set_type; int irq_set_affinity; int irq_eoi; int irq_unmask; int irq_mask; int name; } ;
struct tegra_pmc {TYPE_2__* dev; int domain; TYPE_1__ irq; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct irq_domain*,int ,int,int ,int *,struct tegra_pmc*) ;
 struct irq_domain* FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ) ;
 int FUNC_5 (struct device_node*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct tegra_pmc *VAR_8)
{
 struct irq_domain *VAR_9 = ((void*)0);
 struct device_node *VAR_10;

 VAR_10 = FUNC_4(VAR_8->dev->of_node);
 if (VAR_10) {
  VAR_9 = FUNC_3(VAR_10);
  FUNC_5(VAR_10);
 }

 if (!VAR_9)
  return 0;

 VAR_8->irq.name = FUNC_1(VAR_8->dev);
 VAR_8->irq.irq_mask = VAR_2;
 VAR_8->irq.irq_unmask = VAR_4;
 VAR_8->irq.irq_eoi = VAR_1;
 VAR_8->irq.irq_set_affinity = VAR_3;
 VAR_8->irq.irq_set_type = VAR_6;
 VAR_8->irq.irq_set_wake = VAR_7;

 VAR_8->domain = FUNC_2(VAR_9, 0, 96, VAR_8->dev->of_node,
            &VAR_5, VAR_8);
 if (!VAR_8->domain) {
  FUNC_0(VAR_8->dev, "failed to allocate domain\n");
  return -VAR_0;
 }

 return 0;
}
