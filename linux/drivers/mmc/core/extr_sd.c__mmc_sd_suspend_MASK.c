
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int card; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_7(struct mmc_host *VAR_0)
{
 int VAR_1 = 0;

 FUNC_2(VAR_0);

 if (FUNC_1(VAR_0->card))
  goto out;

 if (!FUNC_4(VAR_0))
  VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1) {
  FUNC_5(VAR_0);
  FUNC_0(VAR_0->card);
 }

out:
 FUNC_6(VAR_0);
 return VAR_1;
}
