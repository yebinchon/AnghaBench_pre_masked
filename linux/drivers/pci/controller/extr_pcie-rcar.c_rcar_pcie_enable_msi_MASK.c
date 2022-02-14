
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int teardown_irq; int setup_irqs; int setup_irq; struct device* dev; } ;
struct rcar_msi {scalar_t__ pages; int irq2; int irq1; int domain; TYPE_2__ chip; int lock; } ;
struct rcar_pcie {struct rcar_msi msi; struct device* dev; } ;
struct device {int of_node; } ;
typedef int phys_addr_t ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,int ,int ,int,int ,struct rcar_pcie*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int *,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct rcar_pcie*,int,int ) ;
 int VAR_14 ;
 int FUNC_8 (struct rcar_pcie*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*) ;

__attribute__((used)) static int FUNC_11(struct rcar_pcie *VAR_15)
{
 struct device *VAR_16 = VAR_15->dev;
 struct rcar_msi *VAR_17 = &VAR_15->msi;
 phys_addr_t VAR_18;
 int VAR_19, VAR_20;

 FUNC_6(&VAR_17->lock);

 VAR_17->chip.dev = VAR_16;
 VAR_17->chip.setup_irq = VAR_11;
 VAR_17->chip.setup_irqs = VAR_12;
 VAR_17->chip.teardown_irq = VAR_13;

 VAR_17->domain = FUNC_4(VAR_16->of_node, VAR_2,
         &VAR_9, &VAR_17->chip);
 if (!VAR_17->domain) {
  FUNC_1(VAR_16, "failed to create IRQ domain\n");
  return -VAR_0;
 }

 for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++)
  FUNC_3(VAR_17->domain, VAR_20);


 VAR_19 = FUNC_2(VAR_16, VAR_17->irq1, VAR_14,
          VAR_4 | VAR_3,
          VAR_10.name, VAR_15);
 if (VAR_19 < 0) {
  FUNC_1(VAR_16, "failed to request IRQ: %d\n", VAR_19);
  goto err;
 }

 VAR_19 = FUNC_2(VAR_16, VAR_17->irq2, VAR_14,
          VAR_4 | VAR_3,
          VAR_10.name, VAR_15);
 if (VAR_19 < 0) {
  FUNC_1(VAR_16, "failed to request IRQ: %d\n", VAR_19);
  goto err;
 }


 VAR_17->pages = FUNC_0(VAR_1, 0);
 if (!VAR_17->pages) {
  VAR_19 = -VAR_0;
  goto err;
 }
 VAR_18 = FUNC_10((void *)VAR_17->pages);

 FUNC_7(VAR_15, FUNC_5(VAR_18) | VAR_5, VAR_6);
 FUNC_7(VAR_15, FUNC_9(VAR_18), VAR_7);


 FUNC_7(VAR_15, 0xffffffff, VAR_8);

 return 0;

err:
 FUNC_8(VAR_15);
 return VAR_19;
}
