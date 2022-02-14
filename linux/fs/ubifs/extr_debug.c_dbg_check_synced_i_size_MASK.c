
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {scalar_t__ ui_size; scalar_t__ synced_i_size; int ui_mutex; int ui_lock; int dirty; } ;
struct ubifs_info {int dummy; } ;
struct inode {int i_mode; int i_ino; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ubifs_info const*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubifs_info const*,char*,scalar_t__,scalar_t__,...) ;
 struct ubifs_inode* FUNC_9 (struct inode*) ;

int FUNC_10(const struct ubifs_info *VAR_1, struct inode *VAR_2)
{
 int VAR_3 = 0;
 struct ubifs_inode *VAR_4 = FUNC_9(VAR_2);

 if (!FUNC_1(VAR_1))
  return 0;
 if (!FUNC_0(VAR_2->i_mode))
  return 0;

 FUNC_4(&VAR_4->ui_mutex);
 FUNC_6(&VAR_4->ui_lock);
 if (VAR_4->ui_size != VAR_4->synced_i_size && !VAR_4->dirty) {
  FUNC_8(VAR_1, "ui_size is %lld, synced_i_size is %lld, but inode is clean",
     VAR_4->ui_size, VAR_4->synced_i_size);
  FUNC_8(VAR_1, "i_ino %lu, i_mode %#x, i_size %lld", VAR_2->i_ino,
     VAR_2->i_mode, FUNC_3(VAR_2));
  FUNC_2();
  VAR_3 = -VAR_0;
 }
 FUNC_7(&VAR_4->ui_lock);
 FUNC_5(&VAR_4->ui_mutex);
 return VAR_3;
}
