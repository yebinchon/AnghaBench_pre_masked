
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct mmc_command {int opcode; int flags; int resp; int arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct mmc_host*,struct mmc_command*,int ) ;

__attribute__((used)) static int
FUNC_2(struct mmc_host *VAR_3, u32 VAR_4, u32 *VAR_5, int VAR_6)
{
 int VAR_7;
 struct mmc_command VAR_8 = {};

 VAR_8.opcode = VAR_6;
 VAR_8.arg = VAR_4;
 VAR_8.flags = VAR_2 | VAR_0;

 VAR_7 = FUNC_1(VAR_3, &VAR_8, VAR_1);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_5, VAR_8.resp, sizeof(u32) * 4);

 return 0;
}
