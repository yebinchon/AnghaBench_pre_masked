
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_fsnotify_inode_refs; } ;
struct inode {struct super_block* i_sb; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_1, void *VAR_2)
{
 struct inode *VAR_3;
 struct super_block *VAR_4;

 if (!VAR_2)
  return;

 if (FUNC_0(VAR_1 != VAR_0))
  return;
 VAR_3 = VAR_2;
 VAR_4 = VAR_3->i_sb;
 FUNC_2(VAR_3);
 if (FUNC_1(&VAR_4->s_fsnotify_inode_refs))
  FUNC_3(&VAR_4->s_fsnotify_inode_refs);
}
