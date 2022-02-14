
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_ino; void* i_ctime; void* i_mtime; int i_sb; int i_mode; } ;
struct dentry {int d_name; } ;
struct buffer_head {int dummy; } ;
struct bfs_sb_info {int bfs_lock; } ;
struct bfs_dirent {scalar_t__ ino; } ;


 struct bfs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int *,scalar_t__) ;
 struct buffer_head* FUNC_3 (struct inode*,int *,struct bfs_dirent**) ;
 int FUNC_4 (struct buffer_head*) ;
 void* FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct buffer_head*,struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4, struct dentry *VAR_5,
        struct inode *VAR_6, struct dentry *VAR_7,
        unsigned int VAR_8)
{
 struct inode *VAR_9, *VAR_10;
 struct buffer_head *VAR_11, *VAR_12;
 struct bfs_dirent *VAR_13, *VAR_14;
 struct bfs_sb_info *VAR_15;
 int VAR_16 = -VAR_1;

 if (VAR_8 & ~VAR_3)
  return -VAR_0;

 VAR_11 = VAR_12 = ((void*)0);
 VAR_9 = FUNC_6(VAR_5);
 if (FUNC_1(VAR_9->i_mode))
  return -VAR_0;

 VAR_15 = FUNC_0(VAR_9->i_sb);

 FUNC_11(&VAR_15->bfs_lock);
 VAR_11 = FUNC_3(VAR_4, &VAR_5->d_name, &VAR_13);

 if (!VAR_11 || (FUNC_8(VAR_13->ino) != VAR_9->i_ino))
  goto end_rename;

 VAR_16 = -VAR_2;
 VAR_10 = FUNC_6(VAR_7);
 VAR_12 = FUNC_3(VAR_6, &VAR_7->d_name, &VAR_14);

 if (VAR_12 && !VAR_10) {
  FUNC_4(VAR_12);
  VAR_12 = ((void*)0);
 }
 if (!VAR_12) {
  VAR_16 = FUNC_2(VAR_6, &VAR_7->d_name,
     VAR_9->i_ino);
  if (VAR_16)
   goto end_rename;
 }
 VAR_13->ino = 0;
 VAR_4->i_ctime = VAR_4->i_mtime = FUNC_5(VAR_4);
 FUNC_10(VAR_4);
 if (VAR_10) {
  VAR_10->i_ctime = FUNC_5(VAR_10);
  FUNC_7(VAR_10);
 }
 FUNC_9(VAR_11, VAR_4);
 VAR_16 = 0;

end_rename:
 FUNC_12(&VAR_15->bfs_lock);
 FUNC_4(VAR_11);
 FUNC_4(VAR_12);
 return VAR_16;
}
