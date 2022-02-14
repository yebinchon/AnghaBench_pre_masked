
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct airo_info {int sem; int flags; int dev; } ;
typedef int cmd ;
struct TYPE_4__ {int cmd; } ;
typedef int Resp ;
typedef TYPE_1__ Cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct airo_info*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( struct airo_info *VAR_2, int VAR_3 ) {
        Cmd VAR_4;
 Resp VAR_5;

 if (VAR_3 == 1 && FUNC_1(&VAR_2->sem))
  return;

 if (FUNC_5(VAR_0, &VAR_2->flags)) {
  if (VAR_3 != 2)
   FUNC_4(VAR_2->dev);
  FUNC_3(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.cmd = VAR_1;
  FUNC_2(VAR_2, &VAR_4, &VAR_5);
  FUNC_0(VAR_0, &VAR_2->flags);
 }
 if (VAR_3 == 1)
  FUNC_6(&VAR_2->sem);
}
