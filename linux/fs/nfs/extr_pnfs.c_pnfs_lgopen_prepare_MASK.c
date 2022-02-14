
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {TYPE_1__* pnfs_curr_ld; } ;
struct nfs_open_context {int dummy; } ;
struct nfs4_opendata {scalar_t__ state; TYPE_2__* dir; } ;
struct TYPE_4__ {int d_inode; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct nfs4_opendata*,struct nfs_open_context*) ;
 int FUNC_2 (struct nfs4_opendata*,struct nfs_open_context*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct nfs_server*) ;

void FUNC_5(struct nfs4_opendata *VAR_2,
    struct nfs_open_context *VAR_3)
{
 struct nfs_server *VAR_4 = FUNC_0(VAR_2->dir->d_inode);

 if (!(FUNC_4(VAR_4) &&
       VAR_4->pnfs_curr_ld->flags & VAR_1))
  return;

 if (!FUNC_3(VAR_2->dir->d_inode, VAR_0))
  return;
 if (VAR_2->state)
  FUNC_1(VAR_2, VAR_3);
 else
  FUNC_2(VAR_2, VAR_3);
}
