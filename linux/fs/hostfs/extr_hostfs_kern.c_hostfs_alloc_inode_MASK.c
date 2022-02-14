
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hostfs_inode_info {int fd; struct inode vfs_inode; int open_mutex; scalar_t__ mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct hostfs_inode_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_1)
{
 struct hostfs_inode_info *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2->fd = -1;
 VAR_2->mode = 0;
 FUNC_0(&VAR_2->vfs_inode);
 FUNC_2(&VAR_2->open_mutex);
 return &VAR_2->vfs_inode;
}
