
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alcor_sdmmc_host {int * cmd; int data; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct alcor_sdmmc_host*,int) ;
 int FUNC_1 (struct alcor_sdmmc_host*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct alcor_sdmmc_host *VAR_1, u32 VAR_2)
{
 VAR_2 &= VAR_0;

 if (!VAR_2)
  return;

 if (!VAR_1->cmd && VAR_2 & VAR_0) {
  FUNC_2(VAR_1->dev, "Got command interrupt 0x%08x even though no command operation was in progress.\n",
   VAR_2);
 }


 if (!VAR_1->data)
  FUNC_0(VAR_1, 1);
 else
  FUNC_1(VAR_1);
 VAR_1->cmd = ((void*)0);
}
