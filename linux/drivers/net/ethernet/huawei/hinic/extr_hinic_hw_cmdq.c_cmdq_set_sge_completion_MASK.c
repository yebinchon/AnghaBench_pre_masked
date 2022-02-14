
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_sge_resp {int sge; } ;
struct hinic_cmdq_completion {struct hinic_sge_resp sge_resp; } ;
struct hinic_cmdq_buf {int size; int dma_addr; } ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hinic_cmdq_completion *VAR_0,
        struct hinic_cmdq_buf *VAR_1)
{
 struct hinic_sge_resp *VAR_2 = &VAR_0->sge_resp;

 FUNC_0(&VAR_2->sge, VAR_1->dma_addr, VAR_1->size);
}
