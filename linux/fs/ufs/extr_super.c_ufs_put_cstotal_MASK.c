
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {void* cs_nffree; void* cs_nifree; } ;
struct TYPE_11__ {TYPE_3__ fs_u2; } ;
struct ufs_super_block_third {TYPE_4__ fs_un1; } ;
struct TYPE_8__ {scalar_t__ fs_maxbsize; void* cs_nbfree; void* cs_ndir; } ;
struct TYPE_9__ {TYPE_1__ fs_u2; } ;
struct ufs_super_block_second {TYPE_2__ fs_un; } ;
struct TYPE_12__ {void* cs_nffree; void* cs_nifree; void* cs_nbfree; void* cs_ndir; } ;
struct ufs_super_block_first {scalar_t__ fs_bsize; TYPE_5__ fs_cstotal; } ;
struct TYPE_13__ {int cs_nffree; int cs_nifree; int cs_nbfree; int cs_ndir; } ;
struct ufs_sb_private_info {TYPE_6__ cs_total; } ;
struct super_block {int dummy; } ;
struct TYPE_14__ {unsigned int s_mount_opt; struct ufs_sb_private_info* s_uspi; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_7__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct ufs_sb_private_info*) ;
 void* FUNC_3 (struct super_block*,int ) ;
 void* FUNC_4 (struct super_block*,int ) ;
 struct ufs_super_block_first* FUNC_5 (struct ufs_sb_private_info*) ;
 struct ufs_super_block_second* FUNC_6 (struct ufs_sb_private_info*) ;
 struct ufs_super_block_third* FUNC_7 (struct ufs_sb_private_info*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct super_block*,struct ufs_super_block_first*,struct ufs_super_block_second*,struct ufs_super_block_third*) ;

__attribute__((used)) static void FUNC_10(struct super_block *VAR_3)
{
 unsigned VAR_4 = FUNC_1(VAR_3)->s_mount_opt & VAR_0;
 struct ufs_sb_private_info *VAR_5 = FUNC_1(VAR_3)->s_uspi;
 struct ufs_super_block_first *VAR_6;
 struct ufs_super_block_second *VAR_7;
 struct ufs_super_block_third *VAR_8;

 FUNC_0("ENTER\n");
 VAR_6 = FUNC_5(VAR_5);
 VAR_7 = FUNC_6(VAR_5);
 VAR_8 = FUNC_7(VAR_5);

 if (VAR_4 == VAR_2) {

  VAR_7->fs_un.fs_u2.cs_ndir =
   FUNC_4(VAR_3, VAR_5->cs_total.cs_ndir);
  VAR_7->fs_un.fs_u2.cs_nbfree =
   FUNC_4(VAR_3, VAR_5->cs_total.cs_nbfree);
  VAR_8->fs_un1.fs_u2.cs_nifree =
   FUNC_4(VAR_3, VAR_5->cs_total.cs_nifree);
  VAR_8->fs_un1.fs_u2.cs_nffree =
   FUNC_4(VAR_3, VAR_5->cs_total.cs_nffree);
  goto out;
 }

 if (VAR_4 == VAR_1 &&
      (VAR_7->fs_un.fs_u2.fs_maxbsize == VAR_6->fs_bsize)) {

  VAR_7->fs_un.fs_u2.cs_ndir =
   FUNC_4(VAR_3, VAR_5->cs_total.cs_ndir);
  VAR_7->fs_un.fs_u2.cs_nbfree =
   FUNC_4(VAR_3, VAR_5->cs_total.cs_nbfree);
  VAR_8->fs_un1.fs_u2.cs_nifree =
   FUNC_4(VAR_3, VAR_5->cs_total.cs_nifree);
  VAR_8->fs_un1.fs_u2.cs_nffree =
   FUNC_4(VAR_3, VAR_5->cs_total.cs_nffree);
 }
 VAR_6->fs_cstotal.cs_ndir = FUNC_3(VAR_3, VAR_5->cs_total.cs_ndir);
 VAR_6->fs_cstotal.cs_nbfree = FUNC_3(VAR_3, VAR_5->cs_total.cs_nbfree);
 VAR_6->fs_cstotal.cs_nifree = FUNC_3(VAR_3, VAR_5->cs_total.cs_nifree);
 VAR_6->fs_cstotal.cs_nffree = FUNC_3(VAR_3, VAR_5->cs_total.cs_nffree);
out:
 FUNC_8(FUNC_2(VAR_5));
 FUNC_9(VAR_3, VAR_6, VAR_7, VAR_8);
 FUNC_0("EXIT\n");
}
