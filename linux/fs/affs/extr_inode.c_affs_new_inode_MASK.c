
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct inode {int i_ctime; int i_atime; int i_mtime; int i_ino; int i_gid; int i_uid; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int i_extcnt; int i_ext_last; scalar_t__ i_pa_cnt; scalar_t__ i_lastalloc; scalar_t__ i_protect; scalar_t__ mmu_private; int * i_ext_bh; int * i_ac; scalar_t__ i_lc_mask; scalar_t__ i_lc_shift; scalar_t__ i_lc_size; int * i_lc; scalar_t__ i_blkcnt; int i_opencnt; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct super_block*,int ) ;
 struct buffer_head* FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct buffer_head*,struct inode*) ;
 struct inode* FUNC_12 (struct super_block*) ;
 int FUNC_13 (struct inode*,int) ;

struct inode *
FUNC_14(struct inode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->i_sb;
 struct inode *VAR_2;
 u32 VAR_3;
 struct buffer_head *VAR_4;

 if (!(VAR_2 = FUNC_12(VAR_1)))
  goto err_inode;

 if (!(VAR_3 = FUNC_1(VAR_0, VAR_0->i_ino)))
  goto err_block;

 VAR_4 = FUNC_4(VAR_1, VAR_3);
 if (!VAR_4)
  goto err_bh;
 FUNC_11(VAR_4, VAR_2);
 FUNC_2(VAR_4);

 VAR_2->i_uid = FUNC_7();
 VAR_2->i_gid = FUNC_6();
 VAR_2->i_ino = VAR_3;
 FUNC_13(VAR_2, 1);
 VAR_2->i_mtime = VAR_2->i_atime = VAR_2->i_ctime = FUNC_8(VAR_2);
 FUNC_5(&FUNC_0(VAR_2)->i_opencnt, 0);
 FUNC_0(VAR_2)->i_blkcnt = 0;
 FUNC_0(VAR_2)->i_lc = ((void*)0);
 FUNC_0(VAR_2)->i_lc_size = 0;
 FUNC_0(VAR_2)->i_lc_shift = 0;
 FUNC_0(VAR_2)->i_lc_mask = 0;
 FUNC_0(VAR_2)->i_ac = ((void*)0);
 FUNC_0(VAR_2)->i_ext_bh = ((void*)0);
 FUNC_0(VAR_2)->mmu_private = 0;
 FUNC_0(VAR_2)->i_protect = 0;
 FUNC_0(VAR_2)->i_lastalloc = 0;
 FUNC_0(VAR_2)->i_pa_cnt = 0;
 FUNC_0(VAR_2)->i_extcnt = 1;
 FUNC_0(VAR_2)->i_ext_last = ~1;

 FUNC_9(VAR_2);

 return VAR_2;

err_bh:
 FUNC_3(VAR_1, VAR_3);
err_block:
 FUNC_10(VAR_2);
err_inode:
 return ((void*)0);
}
