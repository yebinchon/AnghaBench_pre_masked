
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scb {int dummy; } ;
struct TYPE_4__ {int size; int vaddr; int dma_handle; } ;
struct asd_seq_data {int tc_index_bitmap_bits; int pend_q; int pend_q_lock; scalar_t__ pending; int * tc_index_array; int * tc_index_bitmap; TYPE_2__ next_scb; int tc_index_lock; } ;
struct TYPE_3__ {int max_scbs; } ;
struct asd_ha_struct {struct asd_seq_data seq; int scb_pool; TYPE_1__ hw_prof; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct asd_ha_struct *VAR_2)
{
 struct asd_seq_data *VAR_3 = &VAR_2->seq;
 int VAR_4;


 VAR_2->seq.tc_index_bitmap_bits = VAR_2->hw_prof.max_scbs;
 VAR_2->seq.tc_index_array = FUNC_3(VAR_2->seq.tc_index_bitmap_bits,
          sizeof(void *),
          VAR_1);
 if (!VAR_2->seq.tc_index_array)
  return -VAR_0;

 VAR_4 = (VAR_2->seq.tc_index_bitmap_bits+7)/8;
 VAR_4 = FUNC_0(VAR_4*8)*sizeof(unsigned long);
 VAR_2->seq.tc_index_bitmap = FUNC_5(VAR_4, VAR_1);
 if (!VAR_2->seq.tc_index_bitmap) {
  FUNC_4(VAR_2->seq.tc_index_array);
  VAR_2->seq.tc_index_array = ((void*)0);
  return -VAR_0;
 }

 FUNC_6(&VAR_3->tc_index_lock);

 VAR_3->next_scb.size = sizeof(struct scb);
 VAR_3->next_scb.vaddr = FUNC_2(VAR_2->scb_pool, VAR_1,
          &VAR_3->next_scb.dma_handle);
 if (!VAR_3->next_scb.vaddr) {
  FUNC_4(VAR_2->seq.tc_index_bitmap);
  FUNC_4(VAR_2->seq.tc_index_array);
  VAR_2->seq.tc_index_bitmap = ((void*)0);
  VAR_2->seq.tc_index_array = ((void*)0);
  return -VAR_0;
 }

 VAR_3->pending = 0;
 FUNC_6(&VAR_3->pend_q_lock);
 FUNC_1(&VAR_3->pend_q);

 return 0;
}
