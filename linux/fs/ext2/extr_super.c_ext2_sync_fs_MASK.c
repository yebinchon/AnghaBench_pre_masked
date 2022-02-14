
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ext2_super_block {int s_state; } ;
struct ext2_sb_info {int s_lock; struct ext2_super_block* s_es; } ;


 struct ext2_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct super_block*,struct ext2_super_block*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_1, int VAR_2)
{
 struct ext2_sb_info *VAR_3 = FUNC_0(VAR_1);
 struct ext2_super_block *VAR_4 = FUNC_0(VAR_1)->s_es;





 FUNC_2(VAR_1, -1);

 FUNC_5(&VAR_3->s_lock);
 if (VAR_4->s_state & FUNC_1(VAR_0)) {
  FUNC_3("setting valid to 0\n");
  VAR_4->s_state &= FUNC_1(~VAR_0);
 }
 FUNC_6(&VAR_3->s_lock);
 FUNC_4(VAR_1, VAR_4, VAR_2);
 return 0;
}
