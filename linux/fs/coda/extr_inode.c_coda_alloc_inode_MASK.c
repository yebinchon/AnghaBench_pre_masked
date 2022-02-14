
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct coda_inode_info {struct inode vfs_inode; int c_lock; scalar_t__ c_cached_perm; int c_uid; scalar_t__ c_flags; int c_fid; } ;
struct CodaFid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct coda_inode_info* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_3)
{
 struct coda_inode_info *VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_4)
  return ((void*)0);
 FUNC_1(&VAR_4->c_fid, 0, sizeof(struct CodaFid));
 VAR_4->c_flags = 0;
 VAR_4->c_uid = VAR_1;
 VAR_4->c_cached_perm = 0;
 FUNC_2(&VAR_4->c_lock);
 return &VAR_4->vfs_inode;
}
