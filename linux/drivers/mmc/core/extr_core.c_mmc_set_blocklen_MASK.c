
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {unsigned int arg; int flags; int opcode; } ;
struct mmc_card {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mmc_card*) ;
 scalar_t__ FUNC_1 (struct mmc_card*) ;
 scalar_t__ FUNC_2 (struct mmc_card*) ;
 scalar_t__ FUNC_3 (struct mmc_card*) ;
 int FUNC_4 (int ,struct mmc_command*,int) ;

int FUNC_5(struct mmc_card *VAR_4, unsigned int VAR_5)
{
 struct mmc_command VAR_6 = {};

 if (FUNC_0(VAR_4) || FUNC_1(VAR_4) ||
     FUNC_2(VAR_4) || FUNC_3(VAR_4))
  return 0;

 VAR_6.opcode = VAR_3;
 VAR_6.arg = VAR_5;
 VAR_6.flags = VAR_2 | VAR_1 | VAR_0;
 return FUNC_4(VAR_4->host, &VAR_6, 5);
}
