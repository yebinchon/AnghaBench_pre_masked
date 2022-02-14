
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dir_lookup_result {struct buffer_head* dl_leaf_bh; struct ocfs2_dir_entry* dl_entry; } ;
struct ocfs2_dir_entry {int inode; } ;
struct inode {int i_mode; } ;
struct buffer_head {int dummy; } ;
typedef int (* ocfs2_journal_access_func ) (int *,int ,struct buffer_head*,int ) ;
typedef int handle_t ;
struct TYPE_2__ {int ip_dyn_features; int ip_blkno; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_5 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (struct ocfs2_dir_entry*,int ) ;

int FUNC_8(struct inode *VAR_2, handle_t *VAR_3,
         struct ocfs2_dir_lookup_result *VAR_4,
         struct inode *VAR_5)
{
 int VAR_6;
 ocfs2_journal_access_func VAR_7 = FUNC_4;
 struct ocfs2_dir_entry *VAR_8 = VAR_4->dl_entry;
 struct buffer_head *VAR_9 = VAR_4->dl_leaf_bh;







 if (FUNC_1(VAR_2)->ip_dyn_features & VAR_0)
  VAR_7 = FUNC_5;

 VAR_6 = VAR_7(VAR_3, FUNC_0(VAR_2), VAR_9,
       VAR_1);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 VAR_8->inode = FUNC_2(FUNC_1(VAR_5)->ip_blkno);
 FUNC_7(VAR_8, VAR_5->i_mode);

 FUNC_6(VAR_3, VAR_9);

out:
 return VAR_6;
}
