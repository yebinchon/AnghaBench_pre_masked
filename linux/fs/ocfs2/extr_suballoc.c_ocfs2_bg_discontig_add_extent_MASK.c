
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_extent_list {int l_next_free_rec; struct ocfs2_extent_rec* l_recs; void* l_count; } ;
struct ocfs2_group_desc {int bg_free_bits_count; int bg_bits; struct ocfs2_extent_list bg_list; } ;
struct ocfs2_extent_rec {void* e_leaf_clusters; int e_cpos; int e_blkno; } ;
struct ocfs2_chain_list {int cl_bpc; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct ocfs2_super*) ;

__attribute__((used)) static void FUNC_8(struct ocfs2_super *VAR_0,
       struct ocfs2_group_desc *VAR_1,
       struct ocfs2_chain_list *VAR_2,
       u64 VAR_3, unsigned int VAR_4)
{
 struct ocfs2_extent_list *VAR_5 = &VAR_1->bg_list;
 struct ocfs2_extent_rec *VAR_6;

 FUNC_0(!FUNC_7(VAR_0));
 if (!VAR_5->l_next_free_rec)
  VAR_5->l_count = FUNC_1(FUNC_6(VAR_0->sb));
 VAR_6 = &VAR_5->l_recs[FUNC_5(VAR_5->l_next_free_rec)];
 VAR_6->e_blkno = FUNC_3(VAR_3);
 VAR_6->e_cpos = FUNC_2(FUNC_5(VAR_1->bg_bits) /
      FUNC_5(VAR_2->cl_bpc));
 VAR_6->e_leaf_clusters = FUNC_1(VAR_4);
 FUNC_4(&VAR_1->bg_bits, VAR_4 * FUNC_5(VAR_2->cl_bpc));
 FUNC_4(&VAR_1->bg_free_bits_count,
       VAR_4 * FUNC_5(VAR_2->cl_bpc));
 FUNC_4(&VAR_5->l_next_free_rec, 1);
}
