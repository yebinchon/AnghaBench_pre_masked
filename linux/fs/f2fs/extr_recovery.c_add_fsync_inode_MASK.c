
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct fsync_inode_entry {int list; struct inode* inode; } ;
struct f2fs_sb_info {int sb; } ;
typedef int nid_t ;


 struct fsync_inode_entry* FUNC_0 (struct inode*) ;
 struct fsync_inode_entry* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (int ,int ) ;
 struct fsync_inode_entry* FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *,struct list_head*) ;

__attribute__((used)) static struct fsync_inode_entry *FUNC_9(struct f2fs_sb_info *VAR_2,
   struct list_head *VAR_3, nid_t VAR_4, bool VAR_5)
{
 struct inode *VAR_6;
 struct fsync_inode_entry *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_2->sb, VAR_4);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8)
  goto err_out;

 if (VAR_5) {
  VAR_8 = FUNC_3(VAR_6);
  if (VAR_8)
   goto err_out;
 }

 VAR_7 = FUNC_6(VAR_1, VAR_0);
 VAR_7->inode = VAR_6;
 FUNC_8(&VAR_7->list, VAR_3);

 return VAR_7;
err_out:
 FUNC_7(VAR_6);
 return FUNC_1(VAR_8);
}
