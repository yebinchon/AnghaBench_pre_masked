
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_command {int arg; int flags; int * resp; int opcode; } ;
struct mmc_card {int rca; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct mmc_command*,unsigned int) ;

int FUNC_2(struct mmc_card *VAR_4, u32 *VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 struct mmc_command VAR_8 = {};

 VAR_8.opcode = VAR_3;
 if (!FUNC_0(VAR_4->host))
  VAR_8.arg = VAR_4->rca << 16;
 VAR_8.flags = VAR_2 | VAR_1 | VAR_0;

 VAR_7 = FUNC_1(VAR_4->host, &VAR_8, VAR_6);
 if (VAR_7)
  return VAR_7;




 if (VAR_5)
  *VAR_5 = VAR_8.resp[0];

 return 0;
}
