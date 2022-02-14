
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct ubifs_inode {int ui_mutex; scalar_t__ dirty; int ui_size; int xattr; } ;
struct ubifs_info {int dummy; } ;
struct inode {int i_ino; scalar_t__ i_nlink; scalar_t__ i_mode; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (struct ubifs_info*,struct inode*,int ) ;
 int FUNC_1 (char*,int ,int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*,int) ;
 int FUNC_6 (struct ubifs_info*,char*,int ,int) ;
 struct ubifs_inode* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct ubifs_info*,struct inode*) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_inode*) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_0, struct writeback_control *VAR_1)
{
 int VAR_2 = 0;
 struct ubifs_info *VAR_3 = VAR_0->i_sb->s_fs_info;
 struct ubifs_inode *VAR_4 = FUNC_7(VAR_0);

 FUNC_5(VAR_3, !VAR_4->xattr);
 if (FUNC_2(VAR_0))
  return 0;

 FUNC_3(&VAR_4->ui_mutex);







 if (!VAR_4->dirty) {
  FUNC_4(&VAR_4->ui_mutex);
  return 0;
 }





 FUNC_1("inode %lu, mode %#x, nlink %u",
  VAR_0->i_ino, (int)VAR_0->i_mode, VAR_0->i_nlink);
 if (VAR_0->i_nlink) {
  VAR_2 = FUNC_8(VAR_3, VAR_0);
  if (VAR_2)
   FUNC_6(VAR_3, "can't write inode %lu, error %d",
      VAR_0->i_ino, VAR_2);
  else
   VAR_2 = FUNC_0(VAR_3, VAR_0, VAR_4->ui_size);
 }

 VAR_4->dirty = 0;
 FUNC_4(&VAR_4->ui_mutex);
 FUNC_9(VAR_3, VAR_4);
 return VAR_2;
}
