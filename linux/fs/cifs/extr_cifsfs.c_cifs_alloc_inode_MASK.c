
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_blkbits; } ;
struct cifsInodeInfo {int cifsAttrs; struct inode vfs_inode; int llist; int openFileList; int lease_key; int open_file_lock; scalar_t__ epoch; scalar_t__ createtime; scalar_t__ uniqueid; scalar_t__ server_eof; scalar_t__ writers; int writers_lock; scalar_t__ flags; scalar_t__ time; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct cifsInodeInfo*,int ) ;
 int FUNC_2 (int ) ;
 struct cifsInodeInfo* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct inode *
FUNC_5(struct super_block *VAR_2)
{
 struct cifsInodeInfo *VAR_3;
 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->cifsAttrs = 0x20;
 VAR_3->time = 0;




 FUNC_1(VAR_3, 0);
 VAR_3->flags = 0;
 FUNC_4(&VAR_3->writers_lock);
 VAR_3->writers = 0;
 VAR_3->vfs_inode.i_blkbits = 14;
 VAR_3->server_eof = 0;
 VAR_3->uniqueid = 0;
 VAR_3->createtime = 0;
 VAR_3->epoch = 0;
 FUNC_4(&VAR_3->open_file_lock);
 FUNC_2(VAR_3->lease_key);






 FUNC_0(&VAR_3->openFileList);
 FUNC_0(&VAR_3->llist);
 return &VAR_3->vfs_inode;
}
