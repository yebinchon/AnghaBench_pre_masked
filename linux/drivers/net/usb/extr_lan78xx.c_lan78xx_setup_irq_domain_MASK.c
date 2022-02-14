
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {unsigned int phyirq; struct irq_domain* irqdomain; int irq_handler; int * irqchip; int irqenable; int irq_lock; } ;
struct lan78xx_net {TYPE_4__ domain_data; TYPE_3__* udev; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {TYPE_1__* parent; } ;
struct TYPE_7__ {TYPE_2__ dev; } ;
struct TYPE_5__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct irq_domain*,int ) ;
 struct irq_domain* FUNC_1 (struct device_node*,int ,int ,int *,TYPE_4__*) ;
 int FUNC_2 (struct irq_domain*) ;
 int VAR_6 ;
 int FUNC_3 (struct lan78xx_net*,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct lan78xx_net *VAR_7)
{
 struct device_node *VAR_8;
 struct irq_domain *VAR_9;
 unsigned int VAR_10 = 0;
 u32 VAR_11;
 int VAR_12 = 0;

 VAR_8 = VAR_7->udev->dev.parent->of_node;

 FUNC_4(&VAR_7->domain_data.irq_lock);

 FUNC_3(VAR_7, VAR_1, &VAR_11);
 VAR_7->domain_data.irqenable = VAR_11;

 VAR_7->domain_data.irqchip = &VAR_6;
 VAR_7->domain_data.irq_handler = VAR_5;

 VAR_9 = FUNC_1(VAR_8, VAR_3, 0,
       &VAR_4, &VAR_7->domain_data);
 if (VAR_9) {

  VAR_10 = FUNC_0(VAR_9, VAR_2);
  if (!VAR_10) {
   FUNC_2(VAR_9);

   VAR_9 = ((void*)0);
   VAR_12 = -VAR_0;
  }
 } else {
  VAR_12 = -VAR_0;
 }

 VAR_7->domain_data.irqdomain = VAR_9;
 VAR_7->domain_data.phyirq = VAR_10;

 return VAR_12;
}
