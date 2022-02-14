
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alcor_sdmmc_host {int sg_count; scalar_t__ dma_on; int blocks; int dev; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct alcor_sdmmc_host*,int) ;
 int FUNC_1 (struct alcor_sdmmc_host*) ;
 int FUNC_2 (struct alcor_sdmmc_host*,int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct alcor_sdmmc_host *VAR_3, u32 VAR_4)
{
 VAR_4 &= VAR_1;

 if (!VAR_4)
  return;

 if (!VAR_3->data) {
  FUNC_3(VAR_3->dev, "Got data interrupt 0x%08x even though no data operation was in progress.\n",
   VAR_4);
  FUNC_2(VAR_3, VAR_2);
  return;
 }

 if (FUNC_0(VAR_3, VAR_4))
  return;

 if ((VAR_4 & VAR_0) || !VAR_3->blocks ||
     (VAR_3->dma_on && !VAR_3->sg_count))
  FUNC_1(VAR_3);
}
