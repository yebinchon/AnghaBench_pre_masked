
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bgmac_dma_ring {int dma_base; int cpu_base; } ;
struct bgmac_dma_desc {int dummy; } ;
struct bgmac {struct device* dma_dev; } ;


 int FUNC_0 (struct device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bgmac *VAR_0,
         struct bgmac_dma_ring *VAR_1,
         int VAR_2)
{
 struct device *VAR_3 = VAR_0->dma_dev;
 int VAR_4;

 if (!VAR_1->cpu_base)
     return;


 VAR_4 = VAR_2 * sizeof(struct bgmac_dma_desc);
 FUNC_0(VAR_3, VAR_4, VAR_1->cpu_base,
     VAR_1->dma_base);
}
