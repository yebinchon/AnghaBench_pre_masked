
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_dxe_desc {int dummy; } ;
struct wcn36xx_dxe_ch {int desc_num; int dma_addr; int cpu_addr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,size_t,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, struct wcn36xx_dxe_ch *VAR_1)
{
 size_t VAR_2;

 VAR_2 = VAR_1->desc_num * sizeof(struct wcn36xx_dxe_desc);
 FUNC_0(VAR_0, VAR_2,VAR_1->cpu_addr, VAR_1->dma_addr);
}
