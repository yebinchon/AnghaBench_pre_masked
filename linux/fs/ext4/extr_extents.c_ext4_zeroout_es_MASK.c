
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
typedef int ext4_lblk_t ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,unsigned int,int ,int ) ;
 unsigned int FUNC_1 (struct ext4_extent*) ;
 int FUNC_2 (struct ext4_extent*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct ext4_extent *VAR_2)
{
 ext4_lblk_t VAR_3;
 ext4_fsblk_t VAR_4;
 unsigned int VAR_5;

 VAR_3 = FUNC_3(VAR_2->ee_block);
 VAR_5 = FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_2);

 if (VAR_5 == 0)
  return 0;

 return FUNC_0(VAR_1, VAR_3, VAR_5, VAR_4,
         VAR_0);
}
