
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_lock_context {int io_count; int list; int lockowner; int count; } ;
struct TYPE_2__ {int files; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct nfs_lock_context *VAR_1)
{
 FUNC_2(&VAR_1->count, 1);
 VAR_1->lockowner = VAR_0->files;
 FUNC_0(&VAR_1->list);
 FUNC_1(&VAR_1->io_count, 0);
}
