
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sdhci_host {unsigned int clock; int data_timeout; struct mmc_host* mmc; } ;
struct mmc_ios {int bus_width; } ;
struct mmc_host {scalar_t__ actual_clock; struct mmc_ios ios; } ;
struct mmc_data {unsigned int blksz; int blocks; } ;
struct mmc_command {struct mmc_data* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct sdhci_host*,struct mmc_command*,struct mmc_data*) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_3,
      struct mmc_command *VAR_4)
{
 struct mmc_data *VAR_5 = VAR_4->data;
 struct mmc_host *VAR_6 = VAR_3->mmc;
 struct mmc_ios *VAR_7 = &VAR_6->ios;
 unsigned char VAR_8 = 1 << VAR_7->bus_width;
 unsigned int VAR_9;
 unsigned int VAR_10;
 u64 VAR_11;
 u64 VAR_12;

 VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5);
 VAR_11 *= VAR_2;

 if (VAR_5) {
  VAR_9 = VAR_5->blksz;
  VAR_10 = VAR_3->mmc->actual_clock ? : VAR_3->clock;
  VAR_12 = (u64)VAR_9 * VAR_1 * (8 / VAR_8);
  FUNC_0(VAR_12, VAR_10);

  VAR_12 = VAR_12 * 2;

  VAR_3->data_timeout = VAR_5->blocks * VAR_11 +
         VAR_12;
 } else {
  VAR_3->data_timeout = VAR_11;
 }

 if (VAR_3->data_timeout)
  VAR_3->data_timeout += VAR_0;
}
