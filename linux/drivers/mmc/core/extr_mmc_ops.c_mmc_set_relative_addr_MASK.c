
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int arg; int flags; int opcode; } ;
struct mmc_card {int rca; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct mmc_command*,int ) ;

int FUNC_1(struct mmc_card *VAR_4)
{
 struct mmc_command VAR_5 = {};

 VAR_5.opcode = VAR_3;
 VAR_5.arg = VAR_4->rca << 16;
 VAR_5.flags = VAR_2 | VAR_0;

 return FUNC_0(VAR_4->host, &VAR_5, VAR_1);
}
