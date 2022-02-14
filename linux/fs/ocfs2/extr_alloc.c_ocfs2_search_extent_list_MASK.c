
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_extent_rec {int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;

int FUNC_3(struct ocfs2_extent_list *VAR_0, u32 VAR_1)
{
 int VAR_2 = -1;
 int VAR_3;
 struct ocfs2_extent_rec *VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 for(VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->l_next_free_rec); VAR_3++) {
  VAR_4 = &VAR_0->l_recs[VAR_3];

  VAR_6 = FUNC_1(VAR_4->e_cpos);
  VAR_7 = FUNC_2(VAR_0, VAR_4);

  VAR_5 = VAR_6 + VAR_7;

  if (VAR_1 >= VAR_6 && VAR_1 < VAR_5) {
   VAR_2 = VAR_3;
   break;
  }
 }

 return VAR_2;
}
