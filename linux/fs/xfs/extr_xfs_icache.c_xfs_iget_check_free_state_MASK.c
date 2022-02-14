
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ di_nblocks; } ;
struct xfs_inode {int i_ino; int i_mount; TYPE_1__ i_d; } ;
struct TYPE_4__ {scalar_t__ i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct xfs_inode*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,...) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_inode *VAR_3,
 int VAR_4)
{
 if (VAR_4 & VAR_2) {

  if (FUNC_0(VAR_3)->i_mode != 0) {
   FUNC_1(VAR_3->i_mount,
"Corruption detected! Free inode 0x%llx not marked free! (mode 0x%x)",
    VAR_3->i_ino, FUNC_0(VAR_3)->i_mode);
   return -VAR_0;
  }

  if (VAR_3->i_d.di_nblocks != 0) {
   FUNC_1(VAR_3->i_mount,
"Corruption detected! Free inode 0x%llx has blocks allocated!",
    VAR_3->i_ino);
   return -VAR_0;
  }
  return 0;
 }


 if (FUNC_0(VAR_3)->i_mode == 0)
  return -VAR_1;

 return 0;
}
