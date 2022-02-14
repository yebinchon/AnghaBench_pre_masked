
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshsd_host {int lock; } ;
struct mmc_ios {int dummy; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (struct mmc_host*,struct mmc_ios*) ;
 struct toshsd_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0, struct mmc_ios *VAR_1)
{
 struct toshsd_host *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_2->lock, VAR_3);
}
