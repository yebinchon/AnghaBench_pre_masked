
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int dummy; } ;
struct list_head {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct lpfc_hba *VAR_2, struct list_head *VAR_3, spinlock_t *VAR_4)
{
 int VAR_5 = 0;

 FUNC_3(VAR_4);
 while (!FUNC_0(VAR_3)) {
  FUNC_4(VAR_4);
  FUNC_2(20);
  if (VAR_5++ > 250) {
   FUNC_1(VAR_2, VAR_0, VAR_1,
     "0466 %s %s\n",
     "Outstanding IO when ",
     "bringing Adapter offline\n");
    return 0;
  }
  FUNC_3(VAR_4);
 }
 FUNC_4(VAR_4);
 return 1;
}
