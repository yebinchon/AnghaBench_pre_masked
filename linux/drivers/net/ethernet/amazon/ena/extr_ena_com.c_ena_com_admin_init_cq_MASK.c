
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_com_admin_cq {int phase; scalar_t__ head; int entries; int dma_addr; } ;
struct ena_com_admin_queue {int q_dmadev; int q_depth; struct ena_com_admin_cq cq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct ena_com_admin_queue *VAR_2)
{
 struct ena_com_admin_cq *VAR_3 = &VAR_2->cq;
 u16 VAR_4 = FUNC_0(VAR_2->q_depth);

 VAR_3->entries = FUNC_1(VAR_2->q_dmadev, VAR_4, &VAR_3->dma_addr,
      VAR_1);

 if (!VAR_3->entries) {
  FUNC_2("memory allocation failed\n");
  return -VAR_0;
 }

 VAR_3->head = 0;
 VAR_3->phase = 1;

 return 0;
}
