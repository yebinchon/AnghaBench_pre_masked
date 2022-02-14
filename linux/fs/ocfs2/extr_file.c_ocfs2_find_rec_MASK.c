
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_extent_rec {int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_extent_list *VAR_0, u32 VAR_1)
{
 int VAR_2;
 struct ocfs2_extent_rec *VAR_3 = ((void*)0);

 for (VAR_2 = FUNC_0(VAR_0->l_next_free_rec) - 1; VAR_2 >= 0; VAR_2--) {

  VAR_3 = &VAR_0->l_recs[VAR_2];

  if (FUNC_1(VAR_3->e_cpos) < VAR_1)
   break;
 }

 return VAR_2;
}
