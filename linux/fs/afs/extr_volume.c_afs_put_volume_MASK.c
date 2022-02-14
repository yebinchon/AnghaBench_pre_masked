
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_volume {int usage; int name; } ;
struct afs_cell {int net; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,struct afs_volume*) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct afs_cell *VAR_0, struct afs_volume *VAR_1)
{
 if (VAR_1) {
  FUNC_0("%s", VAR_1->name);

  if (FUNC_2(&VAR_1->usage))
   FUNC_1(VAR_0->net, VAR_1);
 }
}
