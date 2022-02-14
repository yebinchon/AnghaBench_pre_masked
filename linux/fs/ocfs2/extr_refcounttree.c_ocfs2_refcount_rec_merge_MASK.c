
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_refcount_block {int dummy; } ;
typedef enum ocfs2_ref_rec_contig { ____Placeholder_ocfs2_ref_rec_contig } ocfs2_ref_rec_contig ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ocfs2_refcount_block*,int) ;
 int FUNC_2 (struct ocfs2_refcount_block*,int) ;

__attribute__((used)) static void FUNC_3(struct ocfs2_refcount_block *VAR_3,
         int VAR_4)
{
 enum ocfs2_ref_rec_contig VAR_5 =
    FUNC_1(VAR_3, VAR_4);

 if (VAR_5 == VAR_2)
  return;

 if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
  FUNC_0(VAR_4 == 0);
  VAR_4--;
 }

 FUNC_2(VAR_3, VAR_4);

 if (VAR_5 == VAR_1)
  FUNC_2(VAR_3, VAR_4);
}
