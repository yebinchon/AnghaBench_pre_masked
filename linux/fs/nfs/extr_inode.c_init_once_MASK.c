
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rpcs_out; int ncommit; int list; } ;
struct nfs_inode {int commit_mutex; int rmdir_sem; TYPE_1__ commit_info; int nrequests; int access_cache_inode_lru; int access_cache_entry_lru; int open_files; int vfs_inode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfs_inode*) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
 struct nfs_inode *VAR_1 = (struct nfs_inode *) VAR_0;

 FUNC_4(&VAR_1->vfs_inode);
 FUNC_0(&VAR_1->open_files);
 FUNC_0(&VAR_1->access_cache_entry_lru);
 FUNC_0(&VAR_1->access_cache_inode_lru);
 FUNC_0(&VAR_1->commit_info.list);
 FUNC_1(&VAR_1->nrequests, 0);
 FUNC_1(&VAR_1->commit_info.ncommit, 0);
 FUNC_2(&VAR_1->commit_info.rpcs_out, 0);
 FUNC_3(&VAR_1->rmdir_sem);
 FUNC_5(&VAR_1->commit_mutex);
 FUNC_6(VAR_1);
}
