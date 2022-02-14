
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct via_crdr_mmc_host {int lock; scalar_t__ sdhc_mmiobase; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct via_crdr_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_2)
{
 struct via_crdr_mmc_host *VAR_3;
 unsigned long VAR_4;
 u16 VAR_5;

 VAR_3 = FUNC_0(VAR_2);

 FUNC_2(&VAR_3->lock, VAR_4);

 VAR_5 = FUNC_1(VAR_3->sdhc_mmiobase + VAR_0);

 FUNC_3(&VAR_3->lock, VAR_4);

 return !(VAR_5 & VAR_1);
}
