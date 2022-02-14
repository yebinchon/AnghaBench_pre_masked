
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {struct super_block* m_super; } ;
struct super_block {int s_umount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(
 struct xfs_mount *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->m_super;

 if (FUNC_0(&VAR_1->s_umount)) {
  FUNC_1(VAR_1);
  FUNC_2(&VAR_1->s_umount);
 }
}
