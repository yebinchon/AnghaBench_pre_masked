
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps2; int card; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1)
{
 int VAR_2 = 0;





 if (FUNC_2(VAR_1->card) &&
  !(VAR_1->caps2 & VAR_0))
  VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_1, 0);

 return VAR_2;
}
