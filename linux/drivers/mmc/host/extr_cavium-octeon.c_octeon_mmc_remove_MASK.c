
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct platform_device {int dummy; } ;
struct cvm_mmc_host {scalar_t__ dma_base; scalar_t__* slot; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cvm_mmc_host*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct cvm_mmc_host*,int ) ;
 struct cvm_mmc_host* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct cvm_mmc_host *VAR_3 = FUNC_3(VAR_2);
 u64 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_3->slot[VAR_5])
   FUNC_1(VAR_3->slot[VAR_5]);

 VAR_4 = FUNC_4(VAR_3->dma_base + FUNC_0(VAR_3));
 VAR_4 &= ~VAR_1;
 FUNC_5(VAR_4, VAR_3->dma_base + FUNC_0(VAR_3));

 FUNC_2(VAR_3, 0);
 return 0;
}
