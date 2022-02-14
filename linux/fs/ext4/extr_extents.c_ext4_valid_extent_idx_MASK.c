
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_extent_idx {int dummy; } ;
typedef int ext4_fsblk_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ext4_extent_idx*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
    struct ext4_extent_idx *VAR_1)
{
 ext4_fsblk_t VAR_2 = FUNC_2(VAR_1);

 return FUNC_1(FUNC_0(VAR_0->i_sb), VAR_2, 1);
}
