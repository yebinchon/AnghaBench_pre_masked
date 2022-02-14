
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_rss {int * hash_ctrl; int hash_ctrl_dma_addr; } ;
struct ena_com_dev {int dmadev; struct ena_rss rss; } ;


 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ena_com_dev *VAR_0)
{
 struct ena_rss *VAR_1 = &VAR_0->rss;

 if (VAR_1->hash_ctrl)
  FUNC_0(VAR_0->dmadev, sizeof(*VAR_1->hash_ctrl),
      VAR_1->hash_ctrl, VAR_1->hash_ctrl_dma_addr);
 VAR_1->hash_ctrl = ((void*)0);
}
