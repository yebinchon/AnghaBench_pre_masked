
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ instance; scalar_t__ pin; } ;
struct tegra_wake_event {scalar_t__ id; scalar_t__ irq; TYPE_3__ gpio; } ;
struct tegra_pmc_soc {unsigned int num_wake_events; struct tegra_wake_event* wake_events; } ;
struct tegra_pmc {int irq; TYPE_2__* dev; struct tegra_pmc_soc* soc; } ;
struct irq_fwspec {int param_count; scalar_t__* param; int * fwnode; } ;
struct irq_domain {struct tegra_pmc* host_data; } ;
struct TYPE_5__ {TYPE_1__* of_node; } ;
struct TYPE_4__ {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,scalar_t__,int *,struct tegra_pmc*) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_3, unsigned int VAR_4,
          unsigned int VAR_5, void *VAR_6)
{
 struct tegra_pmc *VAR_7 = VAR_3->host_data;
 const struct tegra_pmc_soc *VAR_8 = VAR_7->soc;
 struct irq_fwspec *VAR_9 = VAR_6;
 unsigned int VAR_10;
 int VAR_11 = 0;

 if (FUNC_0(VAR_5 > 1))
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_8->num_wake_events; VAR_10++) {
  const struct tegra_wake_event *VAR_12 = &VAR_8->wake_events[VAR_10];

  if (VAR_9->param_count == 2) {
   struct irq_fwspec VAR_13;

   if (VAR_12->id != VAR_9->param[0])
    continue;

   VAR_11 = FUNC_2(VAR_3, VAR_4,
           VAR_12->id,
           &VAR_7->irq, VAR_7);
   if (VAR_11 < 0)
    break;

   VAR_13.fwnode = &VAR_7->dev->of_node->fwnode;
   VAR_13.param_count = 3;
   VAR_13.param[0] = VAR_1;
   VAR_13.param[1] = VAR_12->irq;
   VAR_13.param[2] = VAR_9->param[1];

   VAR_11 = FUNC_1(VAR_3, VAR_4,
          VAR_5, &VAR_13);

   break;
  }

  if (VAR_9->param_count == 3) {
   if (VAR_12->gpio.instance != VAR_9->param[0] ||
       VAR_12->gpio.pin != VAR_9->param[1])
    continue;

   VAR_11 = FUNC_2(VAR_3, VAR_4,
           VAR_12->id,
           &VAR_7->irq, VAR_7);

   break;
  }
 }






 if (VAR_10 == VAR_8->num_wake_events)
  VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_2,
          &VAR_7->irq, VAR_7);

 return VAR_11;
}
