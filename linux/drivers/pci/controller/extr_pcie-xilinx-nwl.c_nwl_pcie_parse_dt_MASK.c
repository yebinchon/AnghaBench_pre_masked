
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct nwl_pcie {int irq_intx; int phys_ecam_base; void* ecam_base; int phys_pcie_reg_base; void* pcireg_base; int phys_breg_base; void* breg_base; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,struct resource*) ;
 void* FUNC_4 (struct device*,struct resource*) ;
 int FUNC_5 (int,int ,struct nwl_pcie*) ;
 int VAR_1 ;
 int FUNC_6 (struct platform_device*,char*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_8(struct nwl_pcie *VAR_2,
        struct platform_device *VAR_3)
{
 struct device *VAR_4 = VAR_2->dev;
 struct resource *VAR_5;

 VAR_5 = FUNC_7(VAR_3, VAR_0, "breg");
 VAR_2->breg_base = FUNC_3(VAR_4, VAR_5);
 if (FUNC_0(VAR_2->breg_base))
  return FUNC_1(VAR_2->breg_base);
 VAR_2->phys_breg_base = VAR_5->start;

 VAR_5 = FUNC_7(VAR_3, VAR_0, "pcireg");
 VAR_2->pcireg_base = FUNC_3(VAR_4, VAR_5);
 if (FUNC_0(VAR_2->pcireg_base))
  return FUNC_1(VAR_2->pcireg_base);
 VAR_2->phys_pcie_reg_base = VAR_5->start;

 VAR_5 = FUNC_7(VAR_3, VAR_0, "cfg");
 VAR_2->ecam_base = FUNC_4(VAR_4, VAR_5);
 if (FUNC_0(VAR_2->ecam_base))
  return FUNC_1(VAR_2->ecam_base);
 VAR_2->phys_ecam_base = VAR_5->start;


 VAR_2->irq_intx = FUNC_6(VAR_3, "intx");
 if (VAR_2->irq_intx < 0) {
  FUNC_2(VAR_4, "failed to get intx IRQ %d\n", VAR_2->irq_intx);
  return VAR_2->irq_intx;
 }

 FUNC_5(VAR_2->irq_intx,
      VAR_1, VAR_2);

 return 0;
}
