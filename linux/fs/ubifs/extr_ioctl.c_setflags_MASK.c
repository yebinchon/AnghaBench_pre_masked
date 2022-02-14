
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {int dirty; int ui_mutex; int flags; int data_len; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int dirtied_ino; int dirtied_ino_d; } ;
struct inode {int i_ino; int i_ctime; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_8 (struct ubifs_info*,char*,int ) ;
 struct ubifs_inode* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,int,int) ;
 int FUNC_13 (struct inode*,int) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 struct ubifs_inode *VAR_5 = FUNC_9(VAR_0);
 struct ubifs_info *VAR_6 = VAR_0->i_sb->s_fs_info;
 struct ubifs_budget_req VAR_7 = { .dirtied_ino = 1,
     .dirtied_ino_d = VAR_5->data_len };

 VAR_3 = FUNC_7(VAR_6, &VAR_7);
 if (VAR_3)
  return VAR_3;

 FUNC_4(&VAR_5->ui_mutex);
 VAR_2 = FUNC_6(VAR_5->flags);
 VAR_3 = FUNC_12(VAR_0, VAR_2, VAR_1);
 if (VAR_3)
  goto out_unlock;

 VAR_5->flags = FUNC_2(VAR_1);
 FUNC_11(VAR_0);
 VAR_0->i_ctime = FUNC_1(VAR_0);
 VAR_4 = VAR_5->dirty;
 FUNC_3(VAR_0);
 FUNC_5(&VAR_5->ui_mutex);

 if (VAR_4)
  FUNC_10(VAR_6, &VAR_7);
 if (FUNC_0(VAR_0))
  VAR_3 = FUNC_13(VAR_0, 1);
 return VAR_3;

out_unlock:
 FUNC_8(VAR_6, "can't modify inode %lu attributes", VAR_0->i_ino);
 FUNC_5(&VAR_5->ui_mutex);
 FUNC_10(VAR_6, &VAR_7);
 return VAR_3;
}
