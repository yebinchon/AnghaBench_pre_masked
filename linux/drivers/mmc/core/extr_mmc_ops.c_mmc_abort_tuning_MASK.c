
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mmc_host {int dummy; } ;
struct mmc_command {int flags; int busy_timeout; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_1(struct mmc_host *VAR_5, u32 VAR_6)
{
 struct mmc_command VAR_7 = {};






 if (VAR_6 != VAR_3)
  return 0;

 VAR_7.opcode = VAR_4;
 VAR_7.flags = VAR_2 | VAR_1 | VAR_0;





 VAR_7.busy_timeout = 150;

 return FUNC_0(VAR_5, &VAR_7, 0);
}
