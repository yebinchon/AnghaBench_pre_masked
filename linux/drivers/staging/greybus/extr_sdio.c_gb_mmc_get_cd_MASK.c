
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct gb_sdio_host {int card_present; int lock; scalar_t__ removed; } ;


 int VAR_0 ;
 struct gb_sdio_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1)
{
 struct gb_sdio_host *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->lock);
 if (VAR_2->removed) {
  FUNC_2(&VAR_2->lock);
  return -VAR_0;
 }
 FUNC_2(&VAR_2->lock);

 return VAR_2->card_present;
}
