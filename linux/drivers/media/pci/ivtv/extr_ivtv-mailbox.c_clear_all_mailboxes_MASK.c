
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv_mailbox_data {int max_mbox; int busy; TYPE_1__* mbox; } ;
struct ivtv {int dummy; } ;
struct TYPE_2__ {int flags; int cmd; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ivtv *VAR_0, struct ivtv_mailbox_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 <= VAR_1->max_mbox; VAR_2++) {
  FUNC_0("Clearing mailbox %d: cmd 0x%08x flags 0x%08x\n",
   VAR_2, FUNC_2(&VAR_1->mbox[VAR_2].cmd), FUNC_2(&VAR_1->mbox[VAR_2].flags));
  FUNC_3(0, &VAR_1->mbox[VAR_2].flags);
  FUNC_1(VAR_2, &VAR_1->busy);
 }
}
