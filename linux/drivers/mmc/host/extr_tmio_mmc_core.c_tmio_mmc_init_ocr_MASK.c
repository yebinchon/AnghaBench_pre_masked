
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {struct mmc_host* mmc; struct tmio_mmc_data* pdata; } ;
struct tmio_mmc_data {scalar_t__ ocr_mask; } ;
struct mmc_host {scalar_t__ ocr_avail; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_1(struct tmio_mmc_host *VAR_1)
{
 struct tmio_mmc_data *VAR_2 = VAR_1->pdata;
 struct mmc_host *VAR_3 = VAR_1->mmc;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;


 if (!VAR_3->ocr_avail)
  VAR_3->ocr_avail = VAR_2->ocr_mask;





 if (!VAR_3->ocr_avail)
  return -VAR_0;

 return 0;
}
