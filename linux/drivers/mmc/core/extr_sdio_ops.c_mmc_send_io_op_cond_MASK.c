
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mmc_host {int dummy; } ;
struct mmc_command {int flags; int* resp; scalar_t__ arg; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_3(struct mmc_host *VAR_7, u32 VAR_8, u32 *VAR_9)
{
 struct mmc_command VAR_10 = {};
 int VAR_11, VAR_12 = 0;

 VAR_10.opcode = VAR_6;
 VAR_10.arg = VAR_8;
 VAR_10.flags = VAR_5 | VAR_4 | VAR_2;

 for (VAR_11 = 100; VAR_11; VAR_11--) {
  VAR_12 = FUNC_2(VAR_7, &VAR_10, VAR_3);
  if (VAR_12)
   break;


  if (VAR_8 == 0)
   break;


  if (FUNC_1(VAR_7)) {






   if (VAR_10.resp[1] & VAR_1)
    break;
  } else {
   if (VAR_10.resp[0] & VAR_1)
    break;
  }

  VAR_12 = -VAR_0;

  FUNC_0(10);
 }

 if (VAR_9)
  *VAR_9 = VAR_10.resp[FUNC_1(VAR_7) ? 1 : 0];

 return VAR_12;
}
