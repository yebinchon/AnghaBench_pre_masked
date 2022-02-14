
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_ino; int i_sb; } ;
struct dentry {int d_name; } ;
struct bfs_sb_info {int bfs_lock; } ;


 struct bfs_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int *,int ) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_0, struct inode *VAR_1,
      struct dentry *VAR_2)
{
 struct inode *VAR_3 = FUNC_3(VAR_0);
 struct bfs_sb_info *VAR_4 = FUNC_0(VAR_3->i_sb);
 int VAR_5;

 FUNC_8(&VAR_4->bfs_lock);
 VAR_5 = FUNC_1(VAR_1, &VAR_2->d_name, VAR_3->i_ino);
 if (VAR_5) {
  FUNC_9(&VAR_4->bfs_lock);
  return VAR_5;
 }
 FUNC_6(VAR_3);
 VAR_3->i_ctime = FUNC_2(VAR_3);
 FUNC_7(VAR_3);
 FUNC_5(VAR_3);
 FUNC_4(VAR_2, VAR_3);
 FUNC_9(&VAR_4->bfs_lock);
 return 0;
}
