
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_volume {TYPE_1__* cell; int proc_link; int vid; int cache; } ;
struct TYPE_2__ {int proc_lock; int proc_volumes; int cache; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int,int *,int ,struct afs_volume*,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct afs_volume *VAR_1)
{
 FUNC_2(&VAR_1->cell->proc_lock);
 FUNC_1(&VAR_1->proc_link, &VAR_1->cell->proc_volumes);
 FUNC_3(&VAR_1->cell->proc_lock);
}
