
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct mmc_command {int arg; int flags; int* resp; int opcode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_command*,int ) ;

int FUNC_4(struct mmc_host *VAR_7, u32 VAR_8, u32 *VAR_9)
{
 struct mmc_command VAR_10 = {};
 int VAR_11, VAR_12 = 0;

 VAR_10.opcode = VAR_5;
 VAR_10.arg = FUNC_2(VAR_7) ? 0 : VAR_8;
 VAR_10.flags = VAR_4 | VAR_3 | VAR_2;

 for (VAR_11 = 100; VAR_11; VAR_11--) {
  VAR_12 = FUNC_3(VAR_7, &VAR_10, 0);
  if (VAR_12)
   break;


  if (FUNC_2(VAR_7)) {
   if (!(VAR_10.resp[0] & VAR_6))
    break;
  } else {
   if (VAR_10.resp[0] & VAR_1)
    break;
  }

  VAR_12 = -VAR_0;

  FUNC_1(10);
  if (!VAR_8 && !FUNC_2(VAR_7))
   VAR_10.arg = VAR_10.resp[0] | FUNC_0(30);
 }

 if (VAR_9 && !FUNC_2(VAR_7))
  *VAR_9 = VAR_10.resp[0];

 return VAR_12;
}
