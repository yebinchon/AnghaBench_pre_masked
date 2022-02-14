
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct inode {int i_size; struct super_block* i_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->i_sb;

 if (FUNC_0(VAR_1->i_sb) &&
     ((FUNC_2(VAR_1, VAR_0)) ||
      ((VAR_1->i_size >> VAR_2->s_blocksize_bits) == 1) ||
      FUNC_1(VAR_1)))
  return 1;

 return 0;
}
