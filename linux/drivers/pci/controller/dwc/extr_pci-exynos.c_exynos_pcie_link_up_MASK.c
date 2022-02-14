
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct exynos_pcie {TYPE_1__* mem_res; } ;
struct dw_pcie {int dummy; } ;
struct TYPE_2__ {int elbi_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct exynos_pcie* FUNC_1 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_2(struct dw_pcie *VAR_2)
{
 struct exynos_pcie *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3->mem_res->elbi_base, VAR_1);
 if (VAR_4 == VAR_0)
  return 1;

 return 0;
}
