
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sge; } ;
struct hinic_cmdq_wqe_lcmd {TYPE_1__ buf_desc; } ;
struct hinic_cmdq_buf {int size; int dma_addr; } ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hinic_cmdq_wqe_lcmd *VAR_0,
      struct hinic_cmdq_buf *VAR_1)
{
 FUNC_0(&VAR_0->buf_desc.sge, VAR_1->dma_addr, VAR_1->size);
}
