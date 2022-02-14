
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int * i_symlink; int * u2_i_data; } ;
struct ufs_inode_info {TYPE_5__ i_u1; int i_flags; } ;
struct TYPE_12__ {int * ui_db; } ;
struct TYPE_10__ {TYPE_6__ ui_symlink; TYPE_6__ ui_addr; } ;
struct ufs2_inode {TYPE_4__ ui_u2; void* ui_gen; void* ui_flags; void* ui_blocks; void* ui_mtimensec; void* ui_mtime; void* ui_ctimensec; void* ui_ctime; void* ui_atimensec; void* ui_atime; void* ui_size; void* ui_gid; void* ui_uid; void* ui_nlink; void* ui_mode; } ;
struct super_block {int dummy; } ;
struct TYPE_9__ {int tv_nsec; int tv_sec; } ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_nlink; int i_blocks; int i_mode; int i_generation; TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; int i_size; struct super_block* i_sb; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 struct ufs_inode_info* FUNC_3 (struct inode*) ;
 void* FUNC_4 (struct super_block*,int ) ;
 void* FUNC_5 (struct super_block*,int ) ;
 void* FUNC_6 (struct super_block*,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (TYPE_6__*,int *,int) ;
 int FUNC_10 (struct ufs2_inode*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct inode *VAR_0, struct ufs2_inode *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->i_sb;
  struct ufs_inode_info *VAR_3 = FUNC_3(VAR_0);

 FUNC_2("ENTER\n");
 VAR_1->ui_mode = FUNC_4(VAR_2, VAR_0->i_mode);
 VAR_1->ui_nlink = FUNC_4(VAR_2, VAR_0->i_nlink);

 VAR_1->ui_uid = FUNC_5(VAR_2, FUNC_8(VAR_0));
 VAR_1->ui_gid = FUNC_5(VAR_2, FUNC_7(VAR_0));

 VAR_1->ui_size = FUNC_6(VAR_2, VAR_0->i_size);
 VAR_1->ui_atime = FUNC_6(VAR_2, VAR_0->i_atime.tv_sec);
 VAR_1->ui_atimensec = FUNC_5(VAR_2, VAR_0->i_atime.tv_nsec);
 VAR_1->ui_ctime = FUNC_6(VAR_2, VAR_0->i_ctime.tv_sec);
 VAR_1->ui_ctimensec = FUNC_5(VAR_2, VAR_0->i_ctime.tv_nsec);
 VAR_1->ui_mtime = FUNC_6(VAR_2, VAR_0->i_mtime.tv_sec);
 VAR_1->ui_mtimensec = FUNC_5(VAR_2, VAR_0->i_mtime.tv_nsec);

 VAR_1->ui_blocks = FUNC_6(VAR_2, VAR_0->i_blocks);
 VAR_1->ui_flags = FUNC_5(VAR_2, VAR_3->i_flags);
 VAR_1->ui_gen = FUNC_5(VAR_2, VAR_0->i_generation);

 if (FUNC_1(VAR_0->i_mode) || FUNC_0(VAR_0->i_mode)) {

  VAR_1->ui_u2.ui_addr.ui_db[0] = VAR_3->i_u1.u2_i_data[0];
 } else if (VAR_0->i_blocks) {
  FUNC_9(&VAR_1->ui_u2.ui_addr, VAR_3->i_u1.u2_i_data,
         sizeof(VAR_1->ui_u2.ui_addr));
 } else {
  FUNC_9(&VAR_1->ui_u2.ui_symlink, VAR_3->i_u1.i_symlink,
         sizeof(VAR_1->ui_u2.ui_symlink));
  }

 if (!VAR_0->i_nlink)
  FUNC_10 (VAR_1, 0, sizeof(struct ufs2_inode));
 FUNC_2("EXIT\n");
}
