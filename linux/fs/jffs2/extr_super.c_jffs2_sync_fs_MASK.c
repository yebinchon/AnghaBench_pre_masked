
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct jffs2_sb_info {int alloc_sem; int wbuf_dwork; } ;


 struct jffs2_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct jffs2_sb_info*) ;
 scalar_t__ FUNC_3 (struct jffs2_sb_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_0, int VAR_1)
{
 struct jffs2_sb_info *VAR_2 = FUNC_0(VAR_0);






 FUNC_4(&VAR_2->alloc_sem);
 FUNC_2(VAR_2);
 FUNC_5(&VAR_2->alloc_sem);
 return 0;
}
