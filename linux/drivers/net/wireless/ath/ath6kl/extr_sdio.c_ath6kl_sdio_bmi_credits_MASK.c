
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int cmd_credits; } ;
struct ath6kl {TYPE_1__ bmi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct ath6kl*,scalar_t__,int *,int,int ) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ath6kl *VAR_7)
{
 u32 VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_7->bmi.cmd_credits = 0;


 VAR_8 = VAR_1 + (VAR_5 + VAR_2) * 4;

 VAR_9 = VAR_6 + FUNC_2(VAR_0);
 while (FUNC_3(VAR_6, VAR_9) && !VAR_7->bmi.cmd_credits) {






  VAR_10 = FUNC_1(VAR_7, VAR_8,
      (u8 *)&VAR_7->bmi.cmd_credits, 4,
      VAR_4);
  if (VAR_10) {
   FUNC_0("Unable to decrement the command credit count register: %d\n",
       VAR_10);
   return VAR_10;
  }




  VAR_7->bmi.cmd_credits &= 0xFF;
 }

 if (!VAR_7->bmi.cmd_credits) {
  FUNC_0("bmi communication timeout\n");
  return -VAR_3;
 }

 return 0;
}
