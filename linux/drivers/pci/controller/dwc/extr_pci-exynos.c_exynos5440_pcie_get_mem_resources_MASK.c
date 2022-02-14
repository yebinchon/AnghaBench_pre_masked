
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct exynos_pcie {TYPE_1__* mem_res; struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int elbi_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct resource*) ;
 TYPE_1__* FUNC_3 (struct device*,int,int ) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3,
          struct exynos_pcie *VAR_4)
{
 struct dw_pcie *VAR_5 = VAR_4->pci;
 struct device *VAR_6 = VAR_5->dev;
 struct resource *VAR_7;

 VAR_4->mem_res = FUNC_3(VAR_6, sizeof(*VAR_4->mem_res), VAR_1);
 if (!VAR_4->mem_res)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_3, VAR_2, 0);
 VAR_4->mem_res->elbi_base = FUNC_2(VAR_6, VAR_7);
 if (FUNC_0(VAR_4->mem_res->elbi_base))
  return FUNC_1(VAR_4->mem_res->elbi_base);

 return 0;
}
