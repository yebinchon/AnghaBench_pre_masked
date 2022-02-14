
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct exynos_pcie {TYPE_1__* mem_res; } ;
struct TYPE_2__ {int elbi_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct exynos_pcie *VAR_5)
{
 u32 VAR_6;


 VAR_6 = VAR_0 | VAR_1 |
  VAR_2 | VAR_3;
 FUNC_0(VAR_5->mem_res->elbi_base, VAR_6, VAR_4);
}
