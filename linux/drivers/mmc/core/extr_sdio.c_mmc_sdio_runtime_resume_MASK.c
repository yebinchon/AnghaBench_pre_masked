
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {TYPE_1__* card; } ;
struct TYPE_2__ {int ocr; } ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_0)
{
 int VAR_1;


 FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_0->card->ocr);
 VAR_1 = FUNC_3(VAR_0);
 FUNC_2(VAR_0);

 return VAR_1;
}
