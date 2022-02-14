
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {int dirty; int ui_mutex; } ;
struct ubifs_info {int dummy; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubifs_info*,int ) ;
 struct ubifs_inode* FUNC_3 (struct inode*) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0, int VAR_1)
{
 struct ubifs_info *VAR_2 = VAR_0->i_sb->s_fs_info;
 struct ubifs_inode *VAR_3 = FUNC_3(VAR_0);

 FUNC_2(VAR_2, FUNC_1(&VAR_3->ui_mutex));
 if (!VAR_3->dirty) {
  VAR_3->dirty = 1;
  FUNC_0("inode %lu", VAR_0->i_ino);
 }
}
