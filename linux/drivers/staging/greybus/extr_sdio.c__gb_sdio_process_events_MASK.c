
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct gb_sdio_host {int card_present; int read_only; TYPE_1__* mmc; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct gb_sdio_host *VAR_4, u8 VAR_5)
{
 u8 VAR_6 = 0;

 if (VAR_5 & VAR_0) {
  if (VAR_4->mmc->caps & VAR_3)
   return 0;
  if (VAR_4->card_present)
   return 0;
  VAR_4->card_present = 1;
  VAR_6 = 1;
 }

 if (VAR_5 & VAR_1) {
  if (VAR_4->mmc->caps & VAR_3)
   return 0;
  if (!(VAR_4->card_present))
   return 0;
  VAR_4->card_present = 0;
  VAR_6 = 1;
 }

 if (VAR_5 & VAR_2)
  VAR_4->read_only = 1;

 if (VAR_6) {
  FUNC_0(FUNC_2(VAR_4->mmc), "card %s now event\n",
    (VAR_4->card_present ? "inserted" : "removed"));
  FUNC_1(VAR_4->mmc, 0);
 }

 return 0;
}
