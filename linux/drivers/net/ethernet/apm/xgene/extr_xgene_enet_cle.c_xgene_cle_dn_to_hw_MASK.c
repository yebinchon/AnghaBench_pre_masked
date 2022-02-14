
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct xgene_cle_ptree_ewdn {size_t node_type; size_t last_node; size_t hdr_len_store; size_t hdr_extn; size_t byte_store; size_t search_byte_store; size_t result_pointer; size_t num_branches; struct xgene_cle_ptree_branch* branch; } ;
struct xgene_cle_ptree_branch {size_t next_packet_pointer; scalar_t__ jump_rel; size_t valid; size_t jump_bw; size_t operation; size_t next_node; size_t next_branch; size_t data; size_t mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t FUNC_0 (int ,size_t) ;

__attribute__((used)) static void FUNC_1(const struct xgene_cle_ptree_ewdn *VAR_18,
          u32 *VAR_19, u32 VAR_20)
{
 const struct xgene_cle_ptree_branch *VAR_21;
 u32 VAR_22, VAR_23 = 0;
 u32 VAR_24;

 VAR_19[VAR_23++] = FUNC_0(VAR_15, VAR_18->node_type) |
     FUNC_0(VAR_12, VAR_18->last_node) |
     FUNC_0(VAR_11, VAR_18->hdr_len_store) |
     FUNC_0(VAR_10, VAR_18->hdr_extn) |
     FUNC_0(VAR_9, VAR_18->byte_store) |
     FUNC_0(VAR_14, VAR_18->search_byte_store) |
     FUNC_0(VAR_13, VAR_18->result_pointer);

 for (VAR_22 = 0; VAR_22 < VAR_18->num_branches; VAR_22++) {
  VAR_21 = &VAR_18->branch[VAR_22];
  VAR_24 = VAR_21->next_packet_pointer;

  if ((VAR_21->jump_rel == VAR_17) && (VAR_24 < VAR_16))
   VAR_24 += VAR_20;

  VAR_19[VAR_23++] = FUNC_0(VAR_8, VAR_21->valid) |
      FUNC_0(VAR_6, VAR_24) |
      FUNC_0(VAR_1, VAR_21->jump_bw) |
      FUNC_0(VAR_2, VAR_21->jump_rel) |
      FUNC_0(VAR_7, VAR_21->operation) |
      FUNC_0(VAR_5, VAR_21->next_node) |
      FUNC_0(VAR_4, VAR_21->next_branch);

  VAR_19[VAR_23++] = FUNC_0(VAR_0, VAR_21->data) |
      FUNC_0(VAR_3, VAR_21->mask);
 }
}
