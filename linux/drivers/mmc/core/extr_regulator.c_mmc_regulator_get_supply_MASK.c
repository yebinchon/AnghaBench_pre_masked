
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* vqmmc; void* vmmc; } ;
struct mmc_host {int ocr_avail; TYPE_1__ supply; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int) ;
 void* FUNC_4 (struct device*,char*) ;
 struct device* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (void*) ;

int FUNC_7(struct mmc_host *VAR_1)
{
 struct device *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 VAR_1->supply.vmmc = FUNC_4(VAR_2, "vmmc");
 VAR_1->supply.vqmmc = FUNC_4(VAR_2, "vqmmc");

 if (FUNC_0(VAR_1->supply.vmmc)) {
  if (FUNC_1(VAR_1->supply.vmmc) == -VAR_0)
   return -VAR_0;
  FUNC_2(VAR_2, "No vmmc regulator found\n");
 } else {
  VAR_3 = FUNC_6(VAR_1->supply.vmmc);
  if (VAR_3 > 0)
   VAR_1->ocr_avail = VAR_3;
  else
   FUNC_3(VAR_2, "Failed getting OCR mask: %d\n", VAR_3);
 }

 if (FUNC_0(VAR_1->supply.vqmmc)) {
  if (FUNC_1(VAR_1->supply.vqmmc) == -VAR_0)
   return -VAR_0;
  FUNC_2(VAR_2, "No vqmmc regulator found\n");
 }

 return 0;
}
