
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_net {int cells_outstanding; int cells_timer; int cells_lock; int ws_cell; } ;
struct afs_cell {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct afs_net*,struct afs_cell*) ;
 int FUNC_5 (struct afs_net*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 struct afs_cell* FUNC_9 (int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct afs_net *VAR_0)
{
 struct afs_cell *VAR_1;

 FUNC_2("");

 FUNC_11(&VAR_0->cells_lock);
 VAR_1 = FUNC_9(VAR_0->ws_cell);
 FUNC_0(VAR_0->ws_cell, ((void*)0));
 FUNC_12(&VAR_0->cells_lock);
 FUNC_4(VAR_0, VAR_1);

 FUNC_1("del timer");
 if (FUNC_8(&VAR_0->cells_timer))
  FUNC_6(&VAR_0->cells_outstanding);

 FUNC_1("kick mgr");
 FUNC_5(VAR_0);

 FUNC_1("wait");
 FUNC_10(&VAR_0->cells_outstanding,
         !FUNC_7(&VAR_0->cells_outstanding));
 FUNC_3("");
}
