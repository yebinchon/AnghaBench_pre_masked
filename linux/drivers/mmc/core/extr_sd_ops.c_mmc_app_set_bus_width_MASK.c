
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int flags; int arg; int opcode; } ;
struct mmc_card {int host; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct mmc_card*,struct mmc_command*) ;

int FUNC_1(struct mmc_card *VAR_6, int VAR_7)
{
 struct mmc_command VAR_8 = {};

 VAR_8.opcode = VAR_3;
 VAR_8.flags = VAR_2 | VAR_1;

 switch (VAR_7) {
 case 129:
  VAR_8.arg = VAR_4;
  break;
 case 128:
  VAR_8.arg = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_6->host, VAR_6, &VAR_8);
}
