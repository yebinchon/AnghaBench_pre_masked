
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct via_crdr_mmc_host {scalar_t__ power; int lock; scalar_t__ pcictrl_mmiobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct via_crdr_mmc_host*) ;
 int FUNC_4 (struct via_crdr_mmc_host*) ;
 int FUNC_5 (struct via_crdr_mmc_host*) ;
 int FUNC_6 (struct via_crdr_mmc_host*) ;
 int FUNC_7 (struct via_crdr_mmc_host*) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct via_crdr_mmc_host *VAR_5)
{
 unsigned long VAR_6;
 u8 VAR_7;

 FUNC_1(&VAR_5->lock, VAR_6);

 FUNC_6(VAR_5);
 FUNC_7(VAR_5);

 FUNC_2(&VAR_5->lock, VAR_6);

 VAR_7 = VAR_3;
 if (VAR_5->power == VAR_0)
  VAR_7 &= VAR_2;
 else
  VAR_7 |= VAR_2;
 FUNC_8(VAR_7, VAR_5->pcictrl_mmiobase + VAR_1);
 FUNC_3(VAR_5);
 VAR_7 |= VAR_4;
 FUNC_8(VAR_7, VAR_5->pcictrl_mmiobase + VAR_1);
 FUNC_0(3);

 FUNC_1(&VAR_5->lock, VAR_6);

 FUNC_4(VAR_5);
 FUNC_5(VAR_5);

 FUNC_2(&VAR_5->lock, VAR_6);
}
