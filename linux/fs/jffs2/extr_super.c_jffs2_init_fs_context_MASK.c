
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int dummy; } ;
struct fs_context {int * ops; struct jffs2_sb_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct jffs2_sb_info* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_3)
{
 struct jffs2_sb_info *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct jffs2_sb_info), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->s_fs_info = VAR_4;
 VAR_3->ops = &VAR_2;
 return 0;
}
