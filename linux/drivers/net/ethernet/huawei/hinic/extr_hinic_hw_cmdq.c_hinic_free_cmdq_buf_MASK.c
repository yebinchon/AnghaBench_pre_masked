
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_cmdqs {int cmdq_buf_pool; } ;
struct hinic_cmdq_buf {int dma_addr; int buf; } ;


 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct hinic_cmdqs *VAR_0,
    struct hinic_cmdq_buf *VAR_1)
{
 FUNC_0(VAR_0->cmdq_buf_pool, VAR_1->buf, VAR_1->dma_addr);
}
