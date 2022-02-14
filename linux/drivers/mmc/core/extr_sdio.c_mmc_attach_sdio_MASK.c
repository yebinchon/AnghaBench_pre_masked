
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_host {int caps; struct mmc_card* card; scalar_t__ ocr_avail_sdio; scalar_t__ ocr_avail; int claimed; } ;
struct mmc_card {int dev; TYPE_1__** sdio_func; scalar_t__ sdio_funcs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_host*,int *) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*,int,int *) ;
 int VAR_2 ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (struct mmc_host*,int) ;
 int FUNC_10 (struct mmc_host*,int ,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int ,int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct mmc_card*,int) ;

int FUNC_18(struct mmc_host *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 struct mmc_card *VAR_9;

 FUNC_0(!VAR_3->claimed);

 VAR_4 = FUNC_10(VAR_3, 0, &VAR_7);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_3, &VAR_2);
 if (VAR_3->ocr_avail_sdio)
  VAR_3->ocr_avail = VAR_3->ocr_avail_sdio;


 VAR_8 = FUNC_9(VAR_3, VAR_7);




 if (!VAR_8) {
  VAR_4 = -VAR_0;
  goto err;
 }




 VAR_4 = FUNC_7(VAR_3, VAR_8, ((void*)0));
 if (VAR_4)
  goto err;

 VAR_9 = VAR_3->card;




 if (VAR_3->caps & VAR_1) {




  FUNC_12(&VAR_9->dev);




  VAR_4 = FUNC_14(&VAR_9->dev);
  if (VAR_4)
   goto remove;




  FUNC_11(&VAR_9->dev);
 }





 VAR_6 = (VAR_7 & 0x70000000) >> 28;
 VAR_9->sdio_funcs = 0;




 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++, VAR_9->sdio_funcs++) {
  VAR_4 = FUNC_17(VAR_3->card, VAR_5 + 1);
  if (VAR_4)
   goto remove;




  if (VAR_3->caps & VAR_1)
   FUNC_11(&VAR_9->sdio_func[VAR_5]->dev);
 }




 FUNC_6(VAR_3);
 VAR_4 = FUNC_1(VAR_3->card);
 if (VAR_4)
  goto remove_added;




 for (VAR_5 = 0;VAR_5 < VAR_6;VAR_5++) {
  VAR_4 = FUNC_16(VAR_3->card->sdio_func[VAR_5]);
  if (VAR_4)
   goto remove_added;
 }

 if (VAR_3->caps & VAR_1)
  FUNC_13(&VAR_9->dev);

 FUNC_3(VAR_3);
 return 0;


remove:
 FUNC_6(VAR_3);
remove_added:






 FUNC_8(VAR_3);
 FUNC_3(VAR_3);
err:
 FUNC_4(VAR_3);

 FUNC_15("%s: error %d whilst initialising SDIO card\n",
  FUNC_5(VAR_3), VAR_4);

 return VAR_4;
}
