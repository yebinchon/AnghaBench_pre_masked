
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct xgene_cle_ptree_kn {size_t num_keys; struct xgene_cle_ptree_key* key; int node_type; } ;
struct xgene_cle_ptree_key {int result_pointer; int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct xgene_cle_ptree_kn *VAR_3, u32 *VAR_4)
{
 u32 VAR_5, VAR_6 = 0;
 u32 VAR_7;

 VAR_4[VAR_6++] = FUNC_0(VAR_2, VAR_3->node_type);
 for (VAR_5 = 0; VAR_5 < VAR_3->num_keys; VAR_5++) {
  struct xgene_cle_ptree_key *VAR_8 = &VAR_3->key[VAR_5];

  if (!(VAR_5 % 2)) {
   VAR_4[VAR_6] = FUNC_0(VAR_0, VAR_8->priority) |
     FUNC_0(VAR_1, VAR_8->result_pointer);
  } else {
   VAR_7 = FUNC_0(VAR_0, VAR_8->priority) |
          FUNC_0(VAR_1, VAR_8->result_pointer);
   VAR_4[VAR_6++] |= (VAR_7 << 16);
  }
 }
}
