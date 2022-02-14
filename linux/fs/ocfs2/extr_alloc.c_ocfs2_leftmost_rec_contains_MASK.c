
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocfs2_extent_rec {int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_extent_rec*) ;
 unsigned int FUNC_3 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_extent_list *VAR_0, u32 VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->l_next_free_rec);
 unsigned int VAR_3;
 struct ocfs2_extent_rec *VAR_4;

 if (VAR_2 == 0)
  return 0;

 VAR_4 = &VAR_0->l_recs[0];
 if (FUNC_2(VAR_4)) {

  if (VAR_2 == 1)
   return 0;
  VAR_4 = &VAR_0->l_recs[1];
 }

 VAR_3 = FUNC_1(VAR_4->e_cpos) + FUNC_3(VAR_0, VAR_4);
 if (VAR_1 >= FUNC_1(VAR_4->e_cpos) && VAR_1 < VAR_3)
  return 1;
 return 0;
}
