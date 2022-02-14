
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct ath10k_snoc {TYPE_1__* ce_irqs; struct platform_device* dev; int mem_pa; int mem; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int irq_line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*,char*,...) ;
 struct ath10k_snoc* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *,int ,int ) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int) ;
 struct resource* FUNC_4 (struct platform_device*,int ,char*) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_5)
{
 struct ath10k_snoc *VAR_6 = FUNC_1(VAR_5);
 struct platform_device *VAR_7;
 struct resource *VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_7 = VAR_6->dev;
 VAR_8 = FUNC_4(VAR_7, VAR_4, "membase");
 if (!VAR_8) {
  FUNC_0(VAR_5, "Memory base not found in DT\n");
  return -VAR_1;
 }

 VAR_6->mem_pa = VAR_8->start;
 VAR_6->mem = FUNC_2(&VAR_7->dev, VAR_6->mem_pa,
        FUNC_5(VAR_8));
 if (!VAR_6->mem) {
  FUNC_0(VAR_5, "Memory base ioremap failed with physical address %pa\n",
      &VAR_6->mem_pa);
  return -VAR_1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_3(VAR_6->dev, VAR_3, VAR_9);
  if (!VAR_8) {
   FUNC_0(VAR_5, "failed to get IRQ%d\n", VAR_9);
   VAR_10 = -VAR_2;
   goto out;
  }
  VAR_6->ce_irqs[VAR_9].irq_line = VAR_8->start;
 }

out:
 return VAR_10;
}
