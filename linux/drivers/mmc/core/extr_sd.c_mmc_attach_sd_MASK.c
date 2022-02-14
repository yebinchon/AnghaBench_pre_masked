
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int * card; scalar_t__ ocr_avail_sd; scalar_t__ ocr_avail; int claimed; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mmc_host*,int *) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 scalar_t__ FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mmc_host*,int,int *) ;
 int VAR_1 ;
 int FUNC_11 (struct mmc_host*,int) ;
 int FUNC_12 (struct mmc_host*,int ,int*) ;
 int FUNC_13 (struct mmc_host*,int ,int*) ;
 int FUNC_14 (char*,int ,int) ;

int FUNC_15(struct mmc_host *VAR_2)
{
 int VAR_3;
 u32 VAR_4, VAR_5;

 FUNC_0(!VAR_2->claimed);

 VAR_3 = FUNC_12(VAR_2, 0, &VAR_4);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2, &VAR_1);
 if (VAR_2->ocr_avail_sd)
  VAR_2->ocr_avail = VAR_2->ocr_avail_sd;




 if (FUNC_6(VAR_2)) {
  FUNC_5(VAR_2);

  VAR_3 = FUNC_13(VAR_2, 0, &VAR_4);
  if (VAR_3)
   goto err;
 }





 VAR_4 &= ~0x7FFF;

 VAR_5 = FUNC_11(VAR_2, VAR_4);




 if (!VAR_5) {
  VAR_3 = -VAR_0;
  goto err;
 }




 VAR_3 = FUNC_10(VAR_2, VAR_5, ((void*)0));
 if (VAR_3)
  goto err;

 FUNC_8(VAR_2);
 VAR_3 = FUNC_1(VAR_2->card);
 if (VAR_3)
  goto remove_card;

 FUNC_3(VAR_2);
 return 0;

remove_card:
 FUNC_9(VAR_2->card);
 VAR_2->card = ((void*)0);
 FUNC_3(VAR_2);
err:
 FUNC_4(VAR_2);

 FUNC_14("%s: error %d whilst initialising SD card\n",
  FUNC_7(VAR_2), VAR_3);

 return VAR_3;
}
