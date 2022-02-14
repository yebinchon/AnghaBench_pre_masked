
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
struct bnxt_napi {int napi; struct bnxt* bp; } ;
struct bnxt {int rx_dir; int rx_copy_thresh; struct pci_dev* pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int,int *,int) ;
 struct sk_buff* FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static inline struct sk_buff *FUNC_5(struct bnxt_napi *VAR_1, u8 *VAR_2,
         unsigned int VAR_3,
         dma_addr_t VAR_4)
{
 struct bnxt *VAR_5 = VAR_1->bp;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_3(&VAR_1->napi, VAR_3);
 if (!VAR_7)
  return ((void*)0);

 FUNC_0(&VAR_6->dev, VAR_4, VAR_5->rx_copy_thresh,
    VAR_5->rx_dir);

 FUNC_2(VAR_7->data - VAR_0, VAR_2 - VAR_0,
        VAR_3 + VAR_0);

 FUNC_1(&VAR_6->dev, VAR_4, VAR_5->rx_copy_thresh,
       VAR_5->rx_dir);

 FUNC_4(VAR_7, VAR_3);
 return VAR_7;
}
