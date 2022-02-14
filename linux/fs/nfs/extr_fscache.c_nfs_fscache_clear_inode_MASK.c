
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_ctime; int i_mtime; } ;
struct nfs_inode {int * fscache; TYPE_1__ vfs_inode; } ;
struct nfs_fscache_inode_auxdata {void* ctime; void* mtime; } ;
struct inode {int dummy; } ;
struct fscache_cookie {int dummy; } ;
typedef int auxdata ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*,struct nfs_inode*,struct fscache_cookie*) ;
 int FUNC_2 (struct fscache_cookie*,struct nfs_fscache_inode_auxdata*,int) ;
 int FUNC_3 (struct nfs_fscache_inode_auxdata*,int ,int) ;
 struct fscache_cookie* FUNC_4 (struct inode*) ;
 void* FUNC_5 (int ) ;

void FUNC_6(struct inode *VAR_1)
{
 struct nfs_fscache_inode_auxdata VAR_2;
 struct nfs_inode *VAR_3 = FUNC_0(VAR_1);
 struct fscache_cookie *VAR_4 = FUNC_4(VAR_1);

 FUNC_1(VAR_0, "NFS: clear cookie (0x%p/0x%p)\n", VAR_3, VAR_4);

 FUNC_3(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.mtime = FUNC_5(VAR_3->vfs_inode.i_mtime);
 VAR_2.ctime = FUNC_5(VAR_3->vfs_inode.i_ctime);
 FUNC_2(VAR_4, &VAR_2, 0);
 VAR_3->fscache = ((void*)0);
}
