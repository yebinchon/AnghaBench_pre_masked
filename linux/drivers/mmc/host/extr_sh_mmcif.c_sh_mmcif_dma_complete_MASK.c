
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mmcif_host {int dma_complete; struct mmc_request* mrq; } ;
struct mmc_request {int data; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 struct device* FUNC_4 (struct sh_mmcif_host*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct sh_mmcif_host *VAR_1 = VAR_0;
 struct mmc_request *VAR_2 = VAR_1->mrq;
 struct device *VAR_3 = FUNC_4(VAR_1);

 FUNC_2(VAR_3, "Command completed\n");

 if (FUNC_0(!VAR_2 || !VAR_2->data, "%s: NULL data in DMA completion!\n",
   FUNC_3(VAR_3)))
  return;

 FUNC_1(&VAR_1->dma_complete);
}
