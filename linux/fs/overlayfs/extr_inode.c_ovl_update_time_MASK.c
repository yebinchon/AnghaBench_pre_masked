
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct path {scalar_t__ dentry; int mnt; } ;
struct ovl_fs {int upper_mnt; } ;
struct inode {int i_atime; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int i_atime; } ;
struct TYPE_3__ {struct ovl_fs* s_fs_info; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct path*) ;

int FUNC_4(struct inode *VAR_1, struct timespec64 *VAR_2, int VAR_3)
{
 if (VAR_3 & VAR_0) {
  struct ovl_fs *VAR_4 = VAR_1->i_sb->s_fs_info;
  struct path VAR_5 = {
   .mnt = VAR_4->upper_mnt,
   .dentry = FUNC_2(FUNC_0(VAR_1)),
  };

  if (VAR_5.dentry) {
   FUNC_3(&VAR_5);
   VAR_1->i_atime = FUNC_1(VAR_5.dentry)->i_atime;
  }
 }
 return 0;
}
