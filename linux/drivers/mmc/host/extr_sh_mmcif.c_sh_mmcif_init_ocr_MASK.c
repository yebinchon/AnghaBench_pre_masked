
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mmcif_plat_data {scalar_t__ ocr; } ;
struct sh_mmcif_host {struct mmc_host* mmc; } ;
struct mmc_host {scalar_t__ ocr_avail; } ;
struct device {struct sh_mmcif_plat_data* platform_data; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 struct device* FUNC_3 (struct sh_mmcif_host*) ;

__attribute__((used)) static void FUNC_4(struct sh_mmcif_host *VAR_0)
{
 struct device *VAR_1 = FUNC_3(VAR_0);
 struct sh_mmcif_plat_data *VAR_2 = VAR_1->platform_data;
 struct mmc_host *VAR_3 = VAR_0->mmc;

 FUNC_2(VAR_3);

 if (!VAR_2)
  return;

 if (!VAR_3->ocr_avail)
  VAR_3->ocr_avail = VAR_2->ocr;
 else if (VAR_2->ocr)
  FUNC_0(FUNC_1(VAR_3), "Platform OCR mask is ignored\n");
}
