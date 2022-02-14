
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps; TYPE_1__* ops; int f_init; struct mmc_card* card; } ;
struct mmc_card {int ocr; } ;
struct TYPE_2__ {int (* hw_reset ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_host*,int ,struct mmc_card*) ;
 int FUNC_3 (struct mmc_host*,int ) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*,int ) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_8(struct mmc_host *VAR_1)
{
 struct mmc_card *VAR_2 = VAR_1->card;





 FUNC_1(VAR_1->card);

 if ((VAR_1->caps & VAR_0) && VAR_1->ops->hw_reset &&
      FUNC_0(VAR_2)) {

  FUNC_5(VAR_1, VAR_1->f_init);
  VAR_1->ops->hw_reset(VAR_1);

  FUNC_6(VAR_1);
 } else {

  FUNC_3(VAR_1, VAR_2->ocr);
  FUNC_4(VAR_1);
 }
 return FUNC_2(VAR_1, VAR_2->ocr, VAR_2);
}
