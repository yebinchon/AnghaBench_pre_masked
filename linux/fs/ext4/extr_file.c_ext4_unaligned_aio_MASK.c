
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct iov_iter {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct iov_iter*) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_0, struct iov_iter *VAR_1, loff_t VAR_2)
{
 struct super_block *VAR_3 = VAR_0->i_sb;
 int VAR_4 = VAR_3->s_blocksize - 1;

 if (VAR_2 >= FUNC_0(FUNC_1(VAR_0), VAR_3->s_blocksize))
  return 0;

 if ((VAR_2 | FUNC_2(VAR_1)) & VAR_4)
  return 1;

 return 0;
}
