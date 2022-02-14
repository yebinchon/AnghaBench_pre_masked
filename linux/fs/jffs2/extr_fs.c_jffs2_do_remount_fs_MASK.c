
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct jffs2_sb_info {int flags; int alloc_sem; } ;
struct fs_context {int sb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct jffs2_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct jffs2_sb_info*) ;
 int FUNC_2 (struct jffs2_sb_info*) ;
 int FUNC_3 (struct jffs2_sb_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct super_block*) ;

int FUNC_7(struct super_block *VAR_4, struct fs_context *VAR_5)
{
 struct jffs2_sb_info *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->flags & VAR_1 && !FUNC_6(VAR_4))
  return -VAR_0;





 if (!FUNC_6(VAR_4)) {
  FUNC_3(VAR_6);
  FUNC_4(&VAR_6->alloc_sem);
  FUNC_1(VAR_6);
  FUNC_5(&VAR_6->alloc_sem);
 }

 if (!(VAR_5->sb_flags & VAR_3))
  FUNC_2(VAR_6);

 VAR_5->sb_flags |= VAR_2;
 return 0;
}
