
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int quirks; int timeout_clk; int quirks2; } ;
struct mmc_data {int dummy; } ;
struct mmc_command {int opcode; int busy_timeout; struct mmc_data* data; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct sdhci_host*,struct mmc_command*,struct mmc_data*) ;

__attribute__((used)) static u8 FUNC_2(struct sdhci_host *VAR_2, struct mmc_command *VAR_3,
        bool *VAR_4)
{
 u8 VAR_5;
 struct mmc_data *VAR_6;
 unsigned VAR_7, VAR_8;

 *VAR_4 = 1;







 if (VAR_2->quirks & VAR_1)
  return 0xE;


 if (VAR_3 == ((void*)0))
  return 0xE;

 VAR_6 = VAR_3->data;

 if (!VAR_6 && !VAR_3->busy_timeout)
  return 0xE;


 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_6);
 VAR_5 = 0;
 VAR_8 = (1 << 13) * 1000 / VAR_2->timeout_clk;
 while (VAR_8 < VAR_7) {
  VAR_5++;
  VAR_8 <<= 1;
  if (VAR_5 >= 0xF)
   break;
 }

 if (VAR_5 >= 0xF) {
  if (!(VAR_2->quirks2 & VAR_0))
   FUNC_0("Too large timeout 0x%x requested for CMD%d!\n",
       VAR_5, VAR_3->opcode);
  VAR_5 = 0xE;
 } else {
  *VAR_4 = 0;
 }

 return VAR_5;
}
