
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_vde {int iova; int domain; } ;
struct iova {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int *,struct iova*) ;
 int FUNC_1 (int ,int ,unsigned long) ;
 int FUNC_2 (int *,struct iova*) ;
 unsigned long FUNC_3 (int *) ;
 unsigned long FUNC_4 (struct iova*) ;

void FUNC_5(struct tegra_vde *VAR_0, struct iova *VAR_1)
{
 unsigned long VAR_2 = FUNC_3(&VAR_0->iova);
 unsigned long VAR_3 = FUNC_4(VAR_1) << VAR_2;
 dma_addr_t VAR_4 = FUNC_2(&VAR_0->iova, VAR_1);

 FUNC_1(VAR_0->domain, VAR_4, VAR_3);
 FUNC_0(&VAR_0->iova, VAR_1);
}
