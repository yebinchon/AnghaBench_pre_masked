
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct airo_info {int flags; int bssListRidLen; int bssListNext; int bssListFirst; int * list_bss_task; int sem; } ;
typedef int cmd ;
struct TYPE_4__ {int cmd; } ;
typedef int Resp ;
typedef TYPE_1__ Cmd ;
typedef int BSSListRid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct airo_info*,int ,int *,int ,int) ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct airo_info*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct airo_info *VAR_6, int VAR_7,
        BSSListRid *VAR_8)
{
 Cmd VAR_9;
 Resp VAR_10;

 if (VAR_7 == 1) {
  if (VAR_6->flags & VAR_3) return -VAR_1;
  FUNC_3(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.cmd=VAR_0;
  if (FUNC_1(&VAR_6->sem))
   return -VAR_2;
  VAR_6->list_bss_task = VAR_5;
  FUNC_2(VAR_6, &VAR_9, &VAR_10);
  FUNC_5(&VAR_6->sem);

  FUNC_4(3 * VAR_4);
  VAR_6->list_bss_task = ((void*)0);
 }
 return FUNC_0(VAR_6, VAR_7 ? VAR_6->bssListFirst : VAR_6->bssListNext,
       VAR_8, VAR_6->bssListRidLen, 1);
}
