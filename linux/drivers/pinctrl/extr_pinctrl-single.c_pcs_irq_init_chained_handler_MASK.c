
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcs_soc_data {int irq; int irq_status_mask; int irq_enable_mask; } ;
struct TYPE_2__ {char const* name; int irq_set_wake; int irq_unmask; void* irq_mask; void* irq_ack; } ;
struct pcs_device {int size; int domain; TYPE_1__ chip; int irqs; struct pcs_soc_data socdata; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct device_node*,int,int ,int *,struct pcs_soc_data*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int ,struct pcs_soc_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int,int ,int,char const*,struct pcs_soc_data*) ;

__attribute__((used)) static int FUNC_5(struct pcs_device *VAR_11,
     struct device_node *VAR_12)
{
 struct pcs_soc_data *VAR_13 = &VAR_11->socdata;
 const char *VAR_14 = "pinctrl";
 int VAR_15;

 if (!VAR_13->irq_enable_mask ||
     !VAR_13->irq_status_mask) {
  VAR_13->irq = -1;
  return -VAR_0;
 }

 FUNC_0(&VAR_11->irqs);
 VAR_11->chip.name = VAR_14;
 VAR_11->chip.irq_ack = VAR_7;
 VAR_11->chip.irq_mask = VAR_7;
 VAR_11->chip.irq_unmask = VAR_9;
 VAR_11->chip.irq_set_wake = VAR_8;

 if (VAR_4) {
  int VAR_16;

  VAR_16 = FUNC_4(VAR_13->irq, VAR_6,
      VAR_3 | VAR_1 |
      VAR_2,
      VAR_14, VAR_13);
  if (VAR_16) {
   VAR_13->irq = -1;
   return VAR_16;
  }
 } else {
  FUNC_3(VAR_13->irq,
       VAR_5,
       VAR_13);
 }







 VAR_15 = VAR_11->size;

 VAR_11->domain = FUNC_1(VAR_12, VAR_15, 0,
         &VAR_10,
         VAR_13);
 if (!VAR_11->domain) {
  FUNC_2(VAR_13->irq, ((void*)0));
  return -VAR_0;
 }

 return 0;
}
