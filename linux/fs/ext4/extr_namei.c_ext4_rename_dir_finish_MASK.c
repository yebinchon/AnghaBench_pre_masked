
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ext4_renament {TYPE_1__* dir; int inode; int dir_bh; int dir_inlined; TYPE_2__* parent_de; } ;
typedef int handle_t ;
struct TYPE_4__ {int inode; } ;
struct TYPE_3__ {int i_sb; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(handle_t *VAR_0, struct ext4_renament *VAR_1,
      unsigned VAR_2)
{
 int VAR_3;

 VAR_1->parent_de->inode = FUNC_1(VAR_2);
 FUNC_0(VAR_1->dir_bh, "call ext4_handle_dirty_metadata");
 if (!VAR_1->dir_inlined) {
  if (FUNC_6(VAR_1->inode)) {
   VAR_3 = FUNC_3(VAR_0,
          VAR_1->inode,
          VAR_1->dir_bh);
  } else {
   VAR_3 = FUNC_2(VAR_0, VAR_1->inode,
           VAR_1->dir_bh);
  }
 } else {
  VAR_3 = FUNC_4(VAR_0, VAR_1->inode);
 }
 if (VAR_3) {
  FUNC_5(VAR_1->dir->i_sb, VAR_3);
  return VAR_3;
 }
 return 0;
}
