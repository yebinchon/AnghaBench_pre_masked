
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tk_work; } ;
struct TYPE_4__ {TYPE_1__ u; int tk_status; } ;
struct nfs_pgio_header {TYPE_2__ task; int pnfs_error; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct nfs_pgio_header *VAR_2 = VAR_1;

 VAR_2->task.tk_status = VAR_2->pnfs_error;
 FUNC_0(&VAR_2->task.u.tk_work, VAR_0);
 FUNC_1(&VAR_2->task.u.tk_work);
}
