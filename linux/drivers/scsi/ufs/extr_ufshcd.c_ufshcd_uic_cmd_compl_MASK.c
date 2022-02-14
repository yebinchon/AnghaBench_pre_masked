
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ufs_hba {int * uic_async_done; TYPE_1__* active_uic_cmd; } ;
struct TYPE_2__ {int done; int argument3; int argument2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ufs_hba*) ;
 int FUNC_2 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_3(struct ufs_hba *VAR_2, u32 VAR_3)
{
 if ((VAR_3 & VAR_1) && VAR_2->active_uic_cmd) {
  VAR_2->active_uic_cmd->argument2 |=
   FUNC_2(VAR_2);
  VAR_2->active_uic_cmd->argument3 =
   FUNC_1(VAR_2);
  FUNC_0(&VAR_2->active_uic_cmd->done);
 }

 if ((VAR_3 & VAR_0) && VAR_2->uic_async_done)
  FUNC_0(VAR_2->uic_async_done);
}
