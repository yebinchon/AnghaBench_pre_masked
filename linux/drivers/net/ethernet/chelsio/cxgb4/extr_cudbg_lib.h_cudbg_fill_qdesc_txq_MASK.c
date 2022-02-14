
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int dummy; } ;
struct sge_txq {int size; int desc; int cntxt_id; } ;
struct cudbg_qdesc_entry {int qtype; int desc_size; int num_desc; int data_size; int data; int qid; } ;
typedef enum cudbg_qdesc_qtype { ____Placeholder_cudbg_qdesc_qtype } cudbg_qdesc_qtype ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(const struct sge_txq *VAR_0,
     enum cudbg_qdesc_qtype VAR_1,
     struct cudbg_qdesc_entry *VAR_2)
{
 VAR_2->qtype = VAR_1;
 VAR_2->qid = VAR_0->cntxt_id;
 VAR_2->desc_size = sizeof(struct tx_desc);
 VAR_2->num_desc = VAR_0->size;
 VAR_2->data_size = VAR_0->size * sizeof(struct tx_desc);
 FUNC_0(VAR_2->data, VAR_0->desc, VAR_2->data_size);
}
