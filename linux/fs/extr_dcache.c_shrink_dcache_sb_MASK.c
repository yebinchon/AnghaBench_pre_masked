
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dentry_lru; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct super_block *VAR_2)
{
 do {
  FUNC_0(VAR_1);

  FUNC_2(&VAR_2->s_dentry_lru,
   VAR_0, &VAR_1, 1024);
  FUNC_3(&VAR_1);
 } while (FUNC_1(&VAR_2->s_dentry_lru) > 0);
}
