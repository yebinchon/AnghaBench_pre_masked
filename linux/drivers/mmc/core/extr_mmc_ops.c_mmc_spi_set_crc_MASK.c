
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int use_spi_crc; } ;
struct mmc_command {int arg; int flags; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_1(struct mmc_host *VAR_2, int VAR_3)
{
 struct mmc_command VAR_4 = {};
 int VAR_5;

 VAR_4.opcode = VAR_1;
 VAR_4.flags = VAR_0;
 VAR_4.arg = VAR_3;

 VAR_5 = FUNC_0(VAR_2, &VAR_4, 0);
 if (!VAR_5)
  VAR_2->use_spi_crc = VAR_3;
 return VAR_5;
}
