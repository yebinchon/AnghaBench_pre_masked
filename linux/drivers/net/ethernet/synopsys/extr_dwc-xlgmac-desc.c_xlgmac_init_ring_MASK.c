
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_ring {unsigned int dma_desc_count; int desc_data_head; int dma_desc_head_addr; int dma_desc_head; } ;
struct xlgmac_pdata {int netdev; int dev; } ;
struct xlgmac_dma_desc {int dummy; } ;
struct xlgmac_desc_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct xlgmac_pdata*,int ,int ,char*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct xlgmac_pdata *VAR_3,
       struct xlgmac_ring *VAR_4,
       unsigned int VAR_5)
{
 if (!VAR_4)
  return 0;


 VAR_4->dma_desc_count = VAR_5;
 VAR_4->dma_desc_head = FUNC_0(VAR_3->dev,
     (sizeof(struct xlgmac_dma_desc) *
      VAR_5),
     &VAR_4->dma_desc_head_addr,
     VAR_1);
 if (!VAR_4->dma_desc_head)
  return -VAR_0;


 VAR_4->desc_data_head = FUNC_1(VAR_5,
     sizeof(struct xlgmac_desc_data),
     VAR_1);
 if (!VAR_4->desc_data_head)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_2, VAR_3->netdev,
    "dma_desc_head=%p, dma_desc_head_addr=%pad, desc_data_head=%p\n",
  VAR_4->dma_desc_head,
  &VAR_4->dma_desc_head_addr,
  VAR_4->desc_data_head);

 return 0;
}
