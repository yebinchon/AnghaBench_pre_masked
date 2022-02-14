
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct keystone_pcie {int legacy_irq_domain; struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct keystone_pcie*,int ) ;
 int FUNC_6 (struct keystone_pcie*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct keystone_pcie *VAR_1,
          int VAR_2)
{
 struct dw_pcie *VAR_3 = VAR_1->pci;
 struct device *VAR_4 = VAR_3->dev;
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_1, FUNC_1(VAR_2));

 if (FUNC_0(0) & VAR_5) {
  VAR_6 = FUNC_4(VAR_1->legacy_irq_domain, VAR_2);
  FUNC_2(VAR_4, ": irq: irq_offset %d, virq %d\n", VAR_2, VAR_6);
  FUNC_3(VAR_6);
 }


 FUNC_6(VAR_1, VAR_0, VAR_2);
}
