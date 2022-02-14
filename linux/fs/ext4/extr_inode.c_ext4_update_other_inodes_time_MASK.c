
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct other_inode {unsigned long orig_ino; struct ext4_inode* raw_inode; } ;
struct ext4_inode {int dummy; } ;
struct TYPE_2__ {int s_inodes_per_block; } ;


 int FUNC_0 (struct super_block*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,unsigned long,int ,struct other_inode*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_1,
       unsigned long VAR_2, char *VAR_3)
{
 struct other_inode VAR_4;
 unsigned long VAR_5;
 int VAR_6, VAR_7 = FUNC_1(VAR_1)->s_inodes_per_block;
 int VAR_8 = FUNC_0(VAR_1);

 VAR_4.orig_ino = VAR_2;





 VAR_5 = ((VAR_2 - 1) & ~(VAR_7 - 1)) + 1;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_5++, VAR_3 += VAR_8) {
  if (VAR_5 == VAR_2)
   continue;
  VAR_4.raw_inode = (struct ext4_inode *) VAR_3;
  (void) FUNC_2(VAR_1, VAR_5, VAR_0, &VAR_4);
 }
}
