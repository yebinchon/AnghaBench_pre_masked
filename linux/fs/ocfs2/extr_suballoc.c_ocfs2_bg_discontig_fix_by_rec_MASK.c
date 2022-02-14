
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_suballoc_result {unsigned int sr_bit_offset; unsigned int sr_blkno; unsigned int sr_bits; } ;
struct ocfs2_extent_rec {int e_blkno; int e_leaf_clusters; int e_cpos; } ;
struct ocfs2_chain_list {int cl_bpc; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_suballoc_result *VAR_0,
      struct ocfs2_extent_rec *VAR_1,
      struct ocfs2_chain_list *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->cl_bpc);
 unsigned int VAR_4 = FUNC_1(VAR_1->e_cpos) * VAR_3;
 unsigned int VAR_5 = FUNC_0(VAR_1->e_leaf_clusters) * VAR_3;

 if (VAR_0->sr_bit_offset < VAR_4)
  return 0;
 if (VAR_0->sr_bit_offset >= (VAR_4 + VAR_5))
  return 0;
 VAR_0->sr_blkno = FUNC_2(VAR_1->e_blkno) +
  (VAR_0->sr_bit_offset - VAR_4);
 if ((VAR_0->sr_bit_offset + VAR_0->sr_bits) > (VAR_4 + VAR_5))
  VAR_0->sr_bits = (VAR_4 + VAR_5) - VAR_0->sr_bit_offset;
 return 1;
}
