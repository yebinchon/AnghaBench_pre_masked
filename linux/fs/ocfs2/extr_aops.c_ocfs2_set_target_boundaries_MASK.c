
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_write_ctxt {int w_target_from; unsigned int w_target_to; int w_clen; struct ocfs2_write_cluster_desc* w_desc; scalar_t__ w_large_pages; } ;
struct ocfs2_write_cluster_desc {int c_cpos; scalar_t__ c_needs_zero; } ;
struct ocfs2_super {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_super*,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_super *VAR_1,
     struct ocfs2_write_ctxt *VAR_2,
     loff_t VAR_3, unsigned VAR_4, int VAR_5)
{
 struct ocfs2_write_cluster_desc *VAR_6;

 VAR_2->w_target_from = VAR_3 & (VAR_0 - 1);
 VAR_2->w_target_to = VAR_2->w_target_from + VAR_4;

 if (VAR_5 == 0)
  return;
 if (VAR_2->w_large_pages) {






  VAR_6 = &VAR_2->w_desc[0];
  if (VAR_6->c_needs_zero)
   FUNC_0(VAR_1,
       VAR_6->c_cpos,
       &VAR_2->w_target_from,
       ((void*)0));

  VAR_6 = &VAR_2->w_desc[VAR_2->w_clen - 1];
  if (VAR_6->c_needs_zero)
   FUNC_0(VAR_1,
       VAR_6->c_cpos,
       ((void*)0),
       &VAR_2->w_target_to);
 } else {
  VAR_2->w_target_from = 0;
  VAR_2->w_target_to = VAR_0;
 }
}
