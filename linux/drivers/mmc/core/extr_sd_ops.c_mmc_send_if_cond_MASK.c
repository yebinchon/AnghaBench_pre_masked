
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mmc_host {int dummy; } ;
struct mmc_command {int arg; int flags; int* resp; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_2(struct mmc_host *VAR_5, u32 VAR_6)
{
 struct mmc_command VAR_7 = {};
 int VAR_8;
 static const u8 VAR_9 = 0xAA;
 u8 VAR_10;






 VAR_7.opcode = VAR_4;
 VAR_7.arg = ((VAR_6 & 0xFF8000) != 0) << 8 | VAR_9;
 VAR_7.flags = VAR_3 | VAR_2 | VAR_1;

 VAR_8 = FUNC_1(VAR_5, &VAR_7, 0);
 if (VAR_8)
  return VAR_8;

 if (FUNC_0(VAR_5))
  VAR_10 = VAR_7.resp[1] & 0xFF;
 else
  VAR_10 = VAR_7.resp[0] & 0xFF;

 if (VAR_10 != VAR_9)
  return -VAR_0;

 return 0;
}
