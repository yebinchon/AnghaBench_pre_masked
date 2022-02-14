
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tk_status; } ;
struct nfs_pgio_header {TYPE_2__ task; int flags; int inode; int pnfs_error; } ;
struct TYPE_6__ {TYPE_1__* pnfs_curr_ld; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct nfs_pgio_header*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct nfs_pgio_header *VAR_2)
{
 FUNC_1("pnfs read error = %d\n", VAR_2->pnfs_error);
 if (FUNC_0(VAR_2->inode)->pnfs_curr_ld->flags &
     VAR_1) {
  FUNC_3(VAR_2->inode);
 }
 if (!FUNC_4(VAR_0, &VAR_2->flags))
  VAR_2->task.tk_status = FUNC_2(VAR_2);
}
