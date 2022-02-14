
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_net {int proc_cells_lock; } ;
struct afs_cell {int * cache; int proc_link; int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct afs_net*,struct afs_cell*) ;
 int FUNC_3 (struct afs_cell*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct afs_net *VAR_0, struct afs_cell *VAR_1)
{
 FUNC_0("%s", VAR_1->name);

 FUNC_3(VAR_1);

 FUNC_6(&VAR_0->proc_cells_lock);
 FUNC_5(&VAR_1->proc_link);
 FUNC_2(VAR_0, VAR_1);
 FUNC_7(&VAR_0->proc_cells_lock);






 FUNC_1("");
}
