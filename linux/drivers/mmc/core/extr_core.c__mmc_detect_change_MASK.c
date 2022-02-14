
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps; int detect_change; int detect; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_1, unsigned long VAR_2,
    bool VAR_3)
{




 if (VAR_3 && !(VAR_1->caps & VAR_0) &&
  FUNC_0(FUNC_1(VAR_1)))
  FUNC_3(FUNC_1(VAR_1), 5000);

 VAR_1->detect_change = 1;
 FUNC_2(&VAR_1->detect, VAR_2);
}
