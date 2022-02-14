
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_server {TYPE_2__* nfs_client; scalar_t__ fscache; } ;
struct inode {int i_size; int i_sb; int i_ctime; int i_mtime; int i_mode; } ;
struct TYPE_7__ {int size; int data; } ;
struct nfs_inode {struct inode vfs_inode; TYPE_3__ fh; int * fscache; } ;
struct nfs_fscache_inode_auxdata {int change_attr; void* ctime; void* mtime; } ;
typedef int auxdata ;
struct TYPE_8__ {int fscache; } ;
struct TYPE_6__ {TYPE_1__* rpc_ops; } ;
struct TYPE_5__ {int version; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 TYPE_4__* FUNC_1 (int ) ;
 struct nfs_server* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ,int *,int ,int ,struct nfs_fscache_inode_auxdata*,int,struct nfs_inode*,int ,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct nfs_fscache_inode_auxdata*,int ,int) ;
 int VAR_0 ;
 void* FUNC_7 (int ) ;

void FUNC_8(struct inode *VAR_1)
{
 struct nfs_fscache_inode_auxdata VAR_2;
 struct nfs_server *VAR_3 = FUNC_2(VAR_1);
 struct nfs_inode *VAR_4 = FUNC_0(VAR_1);

 VAR_4->fscache = ((void*)0);
 if (!(VAR_3->fscache && FUNC_3(VAR_1->i_mode)))
  return;

 FUNC_6(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.mtime = FUNC_7(VAR_4->vfs_inode.i_mtime);
 VAR_2.ctime = FUNC_7(VAR_4->vfs_inode.i_ctime);

 if (FUNC_2(&VAR_4->vfs_inode)->nfs_client->rpc_ops->version == 4)
  VAR_2.change_attr = FUNC_5(&VAR_4->vfs_inode);

 VAR_4->fscache = FUNC_4(FUNC_1(VAR_1->i_sb)->fscache,
            &VAR_0,
            VAR_4->fh.data, VAR_4->fh.size,
            &VAR_2, sizeof(VAR_2),
            VAR_4, VAR_4->vfs_inode.i_size, 0);
}
