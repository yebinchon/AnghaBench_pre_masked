
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {unsigned int sdio_irq_mask; struct tmio_mmc_data* pdata; struct mmc_host* mmc; } ;
struct tmio_mmc_data {int flags; } ;
struct mmc_host {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct mmc_host*) ;
 unsigned int FUNC_1 (struct tmio_mmc_host*,int ) ;
 int FUNC_2 (struct tmio_mmc_host*,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct tmio_mmc_host *VAR_7)
{
 struct mmc_host *VAR_8 = VAR_7->mmc;
 struct tmio_mmc_data *VAR_9 = VAR_7->pdata;
 unsigned int VAR_10, VAR_11;
 unsigned int VAR_12;

 if (!(VAR_9->flags & VAR_2))
  return 0;

 VAR_11 = FUNC_1(VAR_7, VAR_0);
 VAR_10 = VAR_11 & VAR_4 & ~VAR_7->sdio_irq_mask;

 VAR_12 = VAR_11 & ~VAR_4;
 if (VAR_9->flags & VAR_3)
  VAR_12 |= VAR_5;

 FUNC_2(VAR_7, VAR_0, VAR_12);

 if (VAR_8->caps & VAR_1 && VAR_10 & VAR_6)
  FUNC_0(VAR_8);

 return VAR_10;
}
