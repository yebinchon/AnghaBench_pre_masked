
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent {int ee_block; } ;
typedef scalar_t__ ext4_lblk_t ;
typedef int ext4_fsblk_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ext4_extent*) ;
 int FUNC_3 (struct ext4_extent*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct ext4_extent *VAR_1)
{
 ext4_fsblk_t VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = FUNC_2(VAR_1);
 ext4_lblk_t VAR_4 = FUNC_4(VAR_1->ee_block);






 if (VAR_4 + VAR_3 <= VAR_4)
  return 0;
 return FUNC_1(FUNC_0(VAR_0->i_sb), VAR_2, VAR_3);
}
