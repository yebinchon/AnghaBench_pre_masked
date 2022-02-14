
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps2; int card; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (int ,unsigned int) ;
 int FUNC_10 (struct mmc_host*) ;
 int FUNC_11 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_12(struct mmc_host *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6 = VAR_4 ? VAR_1 :
     VAR_0;

 FUNC_4(VAR_3);

 if (FUNC_3(VAR_3->card))
  goto out;

 VAR_5 = FUNC_6(VAR_3->card);
 if (VAR_5)
  goto out;

 if (FUNC_0(VAR_3->card) &&
  ((VAR_3->caps2 & VAR_2) || !VAR_4))
  VAR_5 = FUNC_9(VAR_3->card, VAR_6);
 else if (FUNC_1(VAR_3->card))
  VAR_5 = FUNC_11(VAR_3);
 else if (!FUNC_7(VAR_3))
  VAR_5 = FUNC_5(VAR_3);

 if (!VAR_5) {
  FUNC_8(VAR_3);
  FUNC_2(VAR_3->card);
 }
out:
 FUNC_10(VAR_3);
 return VAR_5;
}
