
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alcor_sdmmc_host {scalar_t__ blocks; int dma_on; int dev; int sg_count; int data; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct alcor_sdmmc_host*) ;
 int FUNC_1 (struct alcor_sdmmc_host*,int) ;
 int FUNC_2 (struct alcor_sdmmc_host*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct alcor_sdmmc_host *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_3 &= VAR_1;


 if (!VAR_3)
  return 1;




 if (!VAR_2->data && VAR_3 == VAR_0)
  return 1;


 if (!VAR_2->data)
  return 0;

 VAR_4 = VAR_3 & (129 | 128
    | 130);
 switch (VAR_4) {
 case 0:
  break;
 case 129:
  FUNC_1(VAR_2, 1);
  return 1;
 case 128:
  FUNC_1(VAR_2, 0);
  return 1;
 case 130:
  if (!VAR_2->sg_count)
   break;

  FUNC_0(VAR_2);
  break;
 default:
  FUNC_3(VAR_2->dev, "Got READ_BUF_RDY and WRITE_BUF_RDY at same time\n");
  break;
 }

 if (VAR_3 & VAR_0) {
  if (!VAR_2->dma_on && VAR_2->blocks) {
   FUNC_2(VAR_2);
   return 1;
  } else {
   return 0;
  }
 }

 return 1;
}
