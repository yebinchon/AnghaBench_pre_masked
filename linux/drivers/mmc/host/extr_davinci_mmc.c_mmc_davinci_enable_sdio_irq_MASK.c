
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct mmc_davinci_host {int sdio_int; scalar_t__ base; int mmc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mmc_davinci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_6, int VAR_7)
{
 struct mmc_davinci_host *VAR_8 = FUNC_0(VAR_6);

 if (VAR_7) {
  if (!(FUNC_2(VAR_8->base + VAR_2) & VAR_5)) {
   FUNC_3(VAR_4, VAR_8->base + VAR_1);
   FUNC_1(VAR_8->mmc);
  } else {
   VAR_8->sdio_int = 1;
   FUNC_3(FUNC_2(VAR_8->base + VAR_0) |
          VAR_3, VAR_8->base + VAR_0);
  }
 } else {
  VAR_8->sdio_int = 0;
  FUNC_3(FUNC_2(VAR_8->base + VAR_0) & ~VAR_3,
         VAR_8->base + VAR_0);
 }
}
