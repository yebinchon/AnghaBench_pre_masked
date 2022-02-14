
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nfs; } ;
struct msdos_sb_info {int dir_hash_lock; TYPE_1__ options; int inode_hash_lock; } ;
struct inode {int i_mode; int i_sb; } ;
struct TYPE_4__ {int i_dir_hash; int i_fat_hash; scalar_t__ i_pos; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 struct msdos_sb_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_0)
{
 struct msdos_sb_info *VAR_1 = FUNC_1(VAR_0->i_sb);
 FUNC_4(&VAR_1->inode_hash_lock);
 FUNC_0(VAR_0)->i_pos = 0;
 FUNC_3(&FUNC_0(VAR_0)->i_fat_hash);
 FUNC_5(&VAR_1->inode_hash_lock);

 if (FUNC_2(VAR_0->i_mode) && VAR_1->options.nfs) {
  FUNC_4(&VAR_1->dir_hash_lock);
  FUNC_3(&FUNC_0(VAR_0)->i_dir_hash);
  FUNC_5(&VAR_1->dir_hash_lock);
 }
}
