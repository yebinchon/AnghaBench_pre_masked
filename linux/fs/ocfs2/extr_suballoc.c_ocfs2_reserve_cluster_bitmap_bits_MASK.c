
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_alloc_context {int ac_group_search; int ac_which; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_alloc_context*,int ,int ,int *,int ) ;

int FUNC_2(struct ocfs2_super *VAR_6,
          struct ocfs2_alloc_context *VAR_7)
{
 int VAR_8;

 VAR_7->ac_which = VAR_3;
 VAR_7->ac_group_search = VAR_5;

 VAR_8 = FUNC_1(VAR_6, VAR_7,
          VAR_2,
          VAR_4, ((void*)0),
          VAR_0);
 if (VAR_8 < 0 && VAR_8 != -VAR_1)
  FUNC_0(VAR_8);

 return VAR_8;
}
