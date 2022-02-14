
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_net {int proc_afs; } ;
struct afs_cell {int name; struct afs_net* net; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct afs_cell *VAR_0)
{
 struct afs_net *VAR_1 = VAR_0->net;

 FUNC_0("");
 FUNC_2(VAR_0->name, VAR_1->proc_afs);
 FUNC_1("");
}
