
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int umode_t ;
struct TYPE_11__ {scalar_t__* i_symlink; scalar_t__* i_data; } ;
struct ufs_inode_info {TYPE_10__ i_u1; void* i_oeftflag; void* i_shadow; void* i_flags; } ;
struct TYPE_20__ {int * ui_symlink; int ui_addr; } ;
struct TYPE_18__ {int ui_oeftflag; int ui_shadow; } ;
struct TYPE_19__ {TYPE_7__ ui_sun; } ;
struct TYPE_14__ {int tv_sec; } ;
struct TYPE_13__ {int tv_sec; } ;
struct TYPE_12__ {int tv_sec; } ;
struct ufs_inode {TYPE_9__ ui_u2; TYPE_8__ ui_u3; int ui_flags; int ui_gen; int ui_blocks; TYPE_3__ ui_mtime; TYPE_2__ ui_ctime; TYPE_1__ ui_atime; int ui_size; int ui_nlink; int ui_mode; } ;
struct super_block {int dummy; } ;
struct TYPE_17__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_16__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_15__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct inode {scalar_t__ i_nlink; void* i_blocks; void* i_generation; TYPE_6__ i_ctime; TYPE_5__ i_atime; TYPE_4__ i_mtime; int i_size; int i_mode; struct super_block* i_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ufs_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct super_block*,int ) ;
 void* FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (scalar_t__*,int *,int) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct super_block*,struct ufs_inode*) ;
 int FUNC_11 (struct super_block*,struct ufs_inode*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_1, struct ufs_inode *VAR_2)
{
 struct ufs_inode_info *VAR_3 = FUNC_2(VAR_1);
 struct super_block *VAR_4 = VAR_1->i_sb;
 umode_t VAR_5;




 VAR_1->i_mode = VAR_5 = FUNC_3(VAR_4, VAR_2->ui_mode);
 FUNC_9(VAR_1, FUNC_3(VAR_4, VAR_2->ui_nlink));
 if (VAR_1->i_nlink == 0)
  return -VAR_0;




 FUNC_7(VAR_1, FUNC_11(VAR_4, VAR_2));
 FUNC_6(VAR_1, FUNC_10(VAR_4, VAR_2));

 VAR_1->i_size = FUNC_5(VAR_4, VAR_2->ui_size);
 VAR_1->i_atime.tv_sec = (signed)FUNC_4(VAR_4, VAR_2->ui_atime.tv_sec);
 VAR_1->i_ctime.tv_sec = (signed)FUNC_4(VAR_4, VAR_2->ui_ctime.tv_sec);
 VAR_1->i_mtime.tv_sec = (signed)FUNC_4(VAR_4, VAR_2->ui_mtime.tv_sec);
 VAR_1->i_mtime.tv_nsec = 0;
 VAR_1->i_atime.tv_nsec = 0;
 VAR_1->i_ctime.tv_nsec = 0;
 VAR_1->i_blocks = FUNC_4(VAR_4, VAR_2->ui_blocks);
 VAR_1->i_generation = FUNC_4(VAR_4, VAR_2->ui_gen);
 VAR_3->i_flags = FUNC_4(VAR_4, VAR_2->ui_flags);
 VAR_3->i_shadow = FUNC_4(VAR_4, VAR_2->ui_u3.ui_sun.ui_shadow);
 VAR_3->i_oeftflag = FUNC_4(VAR_4, VAR_2->ui_u3.ui_sun.ui_oeftflag);


 if (FUNC_1(VAR_5) || FUNC_0(VAR_5) || VAR_1->i_blocks) {
  FUNC_8(VAR_3->i_u1.i_data, &VAR_2->ui_u2.ui_addr,
         sizeof(VAR_2->ui_u2.ui_addr));
 } else {
  FUNC_8(VAR_3->i_u1.i_symlink, VAR_2->ui_u2.ui_symlink,
         sizeof(VAR_2->ui_u2.ui_symlink) - 1);
  VAR_3->i_u1.i_symlink[sizeof(VAR_2->ui_u2.ui_symlink) - 1] = 0;
 }
 return 0;
}
