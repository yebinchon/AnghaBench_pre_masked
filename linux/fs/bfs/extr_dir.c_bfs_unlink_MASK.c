
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; int i_ctime; int i_mtime; TYPE_1__* i_sb; int i_nlink; } ;
struct dentry {int d_name; } ;
struct buffer_head {int dummy; } ;
struct bfs_sb_info {int bfs_lock; } ;
struct bfs_dirent {scalar_t__ ino; } ;
struct TYPE_2__ {char* s_id; } ;


 struct bfs_sb_info* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (struct inode*,int *,struct bfs_dirent**) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct buffer_head*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*,scalar_t__,int ) ;
 int FUNC_12 (struct inode*,int) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_1, struct dentry *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct inode *VAR_4 = FUNC_4(VAR_2);
 struct buffer_head *VAR_5;
 struct bfs_dirent *VAR_6;
 struct bfs_sb_info *VAR_7 = FUNC_0(VAR_4->i_sb);

 FUNC_9(&VAR_7->bfs_lock);
 VAR_5 = FUNC_1(VAR_1, &VAR_2->d_name, &VAR_6);
 if (!VAR_5 || (FUNC_6(VAR_6->ino) != VAR_4->i_ino))
  goto out_brelse;

 if (!VAR_4->i_nlink) {
  FUNC_11("unlinking non-existent file %s:%lu (nlink=%d)\n",
     VAR_4->i_sb->s_id, VAR_4->i_ino,
     VAR_4->i_nlink);
  FUNC_12(VAR_4, 1);
 }
 VAR_6->ino = 0;
 FUNC_7(VAR_5, VAR_1);
 VAR_1->i_ctime = VAR_1->i_mtime = FUNC_3(VAR_1);
 FUNC_8(VAR_1);
 VAR_4->i_ctime = VAR_1->i_ctime;
 FUNC_5(VAR_4);
 VAR_3 = 0;

out_brelse:
 FUNC_2(VAR_5);
 FUNC_10(&VAR_7->bfs_lock);
 return VAR_3;
}
