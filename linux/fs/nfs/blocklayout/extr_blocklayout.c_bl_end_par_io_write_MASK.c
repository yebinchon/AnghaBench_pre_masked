
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tk_work; } ;
struct TYPE_6__ {TYPE_2__ u; int tk_status; } ;
struct TYPE_4__ {int committed; } ;
struct nfs_pgio_header {TYPE_3__ task; TYPE_1__ verf; int pnfs_error; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct nfs_pgio_header *VAR_3 = VAR_2;

 VAR_3->task.tk_status = VAR_3->pnfs_error;
 VAR_3->verf.committed = VAR_0;
 FUNC_0(&VAR_3->task.u.tk_work, VAR_1);
 FUNC_1(&VAR_3->task.u.tk_work);
}
