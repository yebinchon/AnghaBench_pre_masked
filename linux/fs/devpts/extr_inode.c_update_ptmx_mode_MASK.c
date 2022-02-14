
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptmxmode; } ;
struct pts_fs_info {TYPE_1__ mount_opts; scalar_t__ ptmx_dentry; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pts_fs_info *VAR_1)
{
 struct inode *VAR_2;
 if (VAR_1->ptmx_dentry) {
  VAR_2 = FUNC_0(VAR_1->ptmx_dentry);
  VAR_2->i_mode = VAR_0|VAR_1->mount_opts.ptmxmode;
 }
}
