
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_extent_rec {int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_count; int l_next_free_rec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ocfs2_extent_rec*,struct ocfs2_extent_rec*,int) ;
 int FUNC_5 (struct ocfs2_extent_rec*) ;
 int FUNC_6 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static void FUNC_7(struct ocfs2_extent_list *VAR_0,
         struct ocfs2_extent_rec *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7 = FUNC_3(VAR_1->e_cpos);
 struct ocfs2_extent_rec *VAR_8;

 VAR_4 = FUNC_2(VAR_0->l_next_free_rec);
 VAR_5 = FUNC_5(&VAR_0->l_recs[0]);

 FUNC_0(!VAR_4);


 FUNC_0(VAR_0->l_next_free_rec == VAR_0->l_count && !VAR_5);





 if (VAR_5) {





  for(VAR_2 = 0; VAR_2 < (VAR_4 - 1); VAR_2++)
   VAR_0->l_recs[VAR_2] = VAR_0->l_recs[VAR_2+1];

  VAR_4--;
 }




 for(VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  VAR_8 = &VAR_0->l_recs[VAR_2];

  if (VAR_7 < FUNC_3(VAR_8->e_cpos))
   break;
 }
 VAR_3 = VAR_2;

 FUNC_6(VAR_7, VAR_3,
    VAR_5, VAR_4,
    FUNC_2(VAR_0->l_count));

 FUNC_0(VAR_3 < 0);
 FUNC_0(VAR_3 >= FUNC_2(VAR_0->l_count));
 FUNC_0(VAR_3 > VAR_4);




 if (VAR_3 != VAR_4) {
  FUNC_0(VAR_4 >= FUNC_2(VAR_0->l_count));

  VAR_6 = VAR_4 - VAR_3;
  VAR_6 *= sizeof(struct ocfs2_extent_rec);
  FUNC_4(&VAR_0->l_recs[VAR_3 + 1],
   &VAR_0->l_recs[VAR_3],
   VAR_6);
 }






 VAR_4++;
 VAR_0->l_next_free_rec = FUNC_1(VAR_4);



 FUNC_0(FUNC_2(VAR_0->l_next_free_rec) > FUNC_2(VAR_0->l_count));

 VAR_0->l_recs[VAR_3] = *VAR_1;

}
