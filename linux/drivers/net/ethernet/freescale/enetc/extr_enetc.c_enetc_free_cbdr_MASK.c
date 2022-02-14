
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_cbdr {int bd_count; int * bd_base; int bd_dma_base; } ;
struct enetc_cbd {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, struct enetc_cbdr *VAR_1)
{
 int VAR_2 = VAR_1->bd_count * sizeof(struct enetc_cbd);

 FUNC_0(VAR_0, VAR_2, VAR_1->bd_base, VAR_1->bd_dma_base);
 VAR_1->bd_base = ((void*)0);
}
