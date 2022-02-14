
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int ocr_avail; } ;
struct mmc_card {int dummy; } ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_host*,int ) ;
 int FUNC_3 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0,
        struct mmc_card *VAR_1)
{
 FUNC_3(VAR_0);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_0->ocr_avail);
 FUNC_1(VAR_1);
}
