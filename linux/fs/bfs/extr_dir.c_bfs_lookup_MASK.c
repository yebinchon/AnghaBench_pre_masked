
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
struct bfs_sb_info {int bfs_lock; } ;
struct bfs_dirent {int ino; } ;


 scalar_t__ VAR_0 ;
 struct bfs_sb_info* FUNC_0 (int ) ;
 int VAR_1 ;
 struct dentry* FUNC_1 (int ) ;
 struct buffer_head* FUNC_2 (struct inode*,TYPE_1__*,struct bfs_dirent**) ;
 struct inode* FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct buffer_head*) ;
 struct dentry* FUNC_5 (struct inode*,struct dentry*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct dentry *FUNC_9(struct inode *VAR_2, struct dentry *VAR_3,
      unsigned int VAR_4)
{
 struct inode *VAR_5 = ((void*)0);
 struct buffer_head *VAR_6;
 struct bfs_dirent *VAR_7;
 struct bfs_sb_info *VAR_8 = FUNC_0(VAR_2->i_sb);

 if (VAR_3->d_name.len > VAR_0)
  return FUNC_1(-VAR_1);

 FUNC_7(&VAR_8->bfs_lock);
 VAR_6 = FUNC_2(VAR_2, &VAR_3->d_name, &VAR_7);
 if (VAR_6) {
  unsigned long VAR_9 = (unsigned long)FUNC_6(VAR_7->ino);
  FUNC_4(VAR_6);
  VAR_5 = FUNC_3(VAR_2->i_sb, VAR_9);
 }
 FUNC_8(&VAR_8->bfs_lock);
 return FUNC_5(VAR_5, VAR_3);
}
