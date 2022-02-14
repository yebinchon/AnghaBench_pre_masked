
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_wqs {int hwif; } ;
struct hinic_wq {int block_idx; int page_idx; int num_q_pages; } ;


 int FUNC_0 (struct hinic_wq*,int ,int ) ;
 int FUNC_1 (struct hinic_wqs*,int ,int ) ;

void FUNC_2(struct hinic_wqs *VAR_0, struct hinic_wq *VAR_1)
{
 FUNC_0(VAR_1, VAR_0->hwif, VAR_1->num_q_pages);

 FUNC_1(VAR_0, VAR_1->page_idx, VAR_1->block_idx);
}
