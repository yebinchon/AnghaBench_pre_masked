
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static inline void FUNC_2(struct inode *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  struct super_block *VAR_1 = VAR_0->i_sb;

  FUNC_0(VAR_0);
  FUNC_1(VAR_1);
 }
}
