
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
typedef int ext4_fsblk_t ;


 unsigned int FUNC_0 (struct ext4_extent*) ;
 int FUNC_1 (struct ext4_extent*) ;
 int FUNC_2 (struct inode*,int ,int ,unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct ext4_extent *VAR_1)
{
 ext4_fsblk_t VAR_2;
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2 = FUNC_1(VAR_1);
 return FUNC_2(VAR_0, FUNC_3(VAR_1->ee_block), VAR_2,
      VAR_3);
}
