
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int flags; unsigned int busy_timeout; int opcode; } ;
struct mmc_card {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct mmc_command*,int) ;

__attribute__((used)) static int FUNC_1(struct mmc_card *VAR_4, unsigned int VAR_5)
{
 struct mmc_command VAR_6 = {
  .opcode = VAR_3,
  .flags = VAR_2 | VAR_1 | VAR_0,

  .busy_timeout = VAR_5,
 };

 return FUNC_0(VAR_4->host, &VAR_6, 5);
}
