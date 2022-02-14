
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int * card; scalar_t__ ocr_avail_mmc; scalar_t__ ocr_avail; int claimed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mmc_host*,int *) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 scalar_t__ FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*,int ,int *) ;
 int VAR_2 ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mmc_host*,int ) ;
 int FUNC_11 (struct mmc_host*,int ,int *) ;
 int FUNC_12 (struct mmc_host*,int ) ;
 int FUNC_13 (struct mmc_host*,int,int *) ;
 int FUNC_14 (char*,int ,int) ;

int FUNC_15(struct mmc_host *VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_0(!VAR_3->claimed);


 if (!FUNC_5(VAR_3))
  FUNC_12(VAR_3, VAR_1);

 VAR_4 = FUNC_11(VAR_3, 0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_3, &VAR_2);
 if (VAR_3->ocr_avail_mmc)
  VAR_3->ocr_avail = VAR_3->ocr_avail_mmc;




 if (FUNC_5(VAR_3)) {
  VAR_4 = FUNC_13(VAR_3, 1, &VAR_5);
  if (VAR_4)
   goto err;
 }

 VAR_6 = FUNC_10(VAR_3, VAR_5);




 if (!VAR_6) {
  VAR_4 = -VAR_0;
  goto err;
 }




 VAR_4 = FUNC_7(VAR_3, VAR_6, ((void*)0));
 if (VAR_4)
  goto err;

 FUNC_8(VAR_3);
 VAR_4 = FUNC_1(VAR_3->card);
 if (VAR_4)
  goto remove_card;

 FUNC_3(VAR_3);
 return 0;

remove_card:
 FUNC_9(VAR_3->card);
 FUNC_3(VAR_3);
 VAR_3->card = ((void*)0);
err:
 FUNC_4(VAR_3);

 FUNC_14("%s: error %d whilst initialising MMC card\n",
  FUNC_6(VAR_3), VAR_4);

 return VAR_4;
}
