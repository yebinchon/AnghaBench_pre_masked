
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_umount; int s_active; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct super_block *VAR_0)
{
        if (!FUNC_0(&VAR_0->s_active, -1, 1)) {
  FUNC_2(&VAR_0->s_umount);
  FUNC_1(VAR_0);
 }
}
