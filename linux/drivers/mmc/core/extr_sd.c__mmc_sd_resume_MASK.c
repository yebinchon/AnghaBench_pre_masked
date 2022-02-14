
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_host {TYPE_1__* card; } ;
struct TYPE_4__ {int ocr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,int ) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct mmc_host *VAR_0)
{
 int VAR_1 = 0;

 FUNC_2(VAR_0);

 if (!FUNC_1(VAR_0->card))
  goto out;

 FUNC_3(VAR_0, VAR_0->card->ocr);
 VAR_1 = FUNC_5(VAR_0, VAR_0->card->ocr, VAR_0->card);
 FUNC_0(VAR_0->card);

out:
 FUNC_4(VAR_0);
 return VAR_1;
}
