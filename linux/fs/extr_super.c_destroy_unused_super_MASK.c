
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int destroy_work; int s_shrink; int s_subtype; int s_user_ns; int s_inode_lru; int s_dentry_lru; int s_umount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_6(&VAR_0->s_umount);
 FUNC_3(&VAR_0->s_dentry_lru);
 FUNC_3(&VAR_0->s_inode_lru);
 FUNC_5(VAR_0);
 FUNC_4(VAR_0->s_user_ns);
 FUNC_2(VAR_0->s_subtype);
 FUNC_1(&VAR_0->s_shrink);

 FUNC_0(&VAR_0->destroy_work);
}
