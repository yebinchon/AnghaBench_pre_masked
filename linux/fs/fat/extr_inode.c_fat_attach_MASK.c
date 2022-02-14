
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nfs; } ;
struct msdos_sb_info {int dir_hash_lock; struct hlist_head* dir_hashtable; TYPE_1__ options; int inode_hash_lock; struct hlist_head* inode_hashtable; } ;
struct inode {scalar_t__ i_ino; int i_mode; int i_sb; } ;
struct hlist_head {int dummy; } ;
typedef int loff_t ;
struct TYPE_4__ {int i_dir_hash; int i_logstart; int i_fat_hash; int i_pos; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 struct msdos_sb_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct hlist_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct inode *VAR_1, loff_t VAR_2)
{
 struct msdos_sb_info *VAR_3 = FUNC_1(VAR_1->i_sb);

 if (VAR_1->i_ino != VAR_0) {
  struct hlist_head *VAR_4 = VAR_3->inode_hashtable
       + FUNC_4(VAR_2);

  FUNC_6(&VAR_3->inode_hash_lock);
  FUNC_0(VAR_1)->i_pos = VAR_2;
  FUNC_5(&FUNC_0(VAR_1)->i_fat_hash, VAR_4);
  FUNC_7(&VAR_3->inode_hash_lock);
 }





 if (FUNC_2(VAR_1->i_mode) && VAR_3->options.nfs) {
  struct hlist_head *VAR_5 = VAR_3->dir_hashtable;
  VAR_5 += FUNC_3(FUNC_0(VAR_1)->i_logstart);

  FUNC_6(&VAR_3->dir_hash_lock);
  FUNC_5(&FUNC_0(VAR_1)->i_dir_hash, VAR_5);
  FUNC_7(&VAR_3->dir_hash_lock);
 }
}
