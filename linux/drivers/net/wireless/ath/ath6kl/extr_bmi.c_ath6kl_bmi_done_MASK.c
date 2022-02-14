
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int done_sent; } ;
struct ath6kl {TYPE_1__ bmi; } ;
typedef int cid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ath6kl*,int *,int) ;

int FUNC_3(struct ath6kl *VAR_2)
{
 int VAR_3;
 u32 VAR_4 = VAR_1;

 if (VAR_2->bmi.done_sent) {
  FUNC_0(VAR_0, "bmi done skipped\n");
  return 0;
 }

 VAR_2->bmi.done_sent = 1;

 VAR_3 = FUNC_2(VAR_2, (u8 *)&VAR_4, sizeof(VAR_4));
 if (VAR_3) {
  FUNC_1("Unable to send bmi done: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
