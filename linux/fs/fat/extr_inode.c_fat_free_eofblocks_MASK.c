
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_blocks; int i_sb; } ;
struct TYPE_4__ {int mmu_private; } ;
struct TYPE_3__ {int cluster_size; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_1)
{

 if ((VAR_1->i_blocks << 9) >
   FUNC_6(FUNC_0(VAR_1)->mmu_private,
    FUNC_1(VAR_1->i_sb)->cluster_size)) {
  int VAR_2;

  FUNC_4(VAR_1, FUNC_0(VAR_1)->mmu_private);






  VAR_2 = FUNC_2(VAR_1, FUNC_5(VAR_1));
  if (VAR_2) {
   FUNC_3(VAR_1->i_sb, VAR_0, "Failed to "
     "update on disk inode for unused "
     "fallocated blocks, inode could be "
     "corrupted. Please run fsck");
  }

 }
}
