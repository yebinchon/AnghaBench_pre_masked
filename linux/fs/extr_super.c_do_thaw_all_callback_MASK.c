
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; int s_umount; scalar_t__ s_root; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1)
{
 FUNC_0(&VAR_1->s_umount);
 if (VAR_1->s_root && VAR_1->s_flags & VAR_0) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_1);
 } else {
  FUNC_3(&VAR_1->s_umount);
 }
}
