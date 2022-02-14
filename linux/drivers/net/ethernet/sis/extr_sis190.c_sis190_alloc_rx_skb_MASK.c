
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int data; } ;
struct sis190_private {int pci_dev; int rx_buf_sz; int dev; } ;
struct RxDesc {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct RxDesc*) ;
 int FUNC_5 (struct RxDesc*,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct sis190_private *VAR_1,
        struct RxDesc *VAR_2)
{
 u32 VAR_3 = VAR_1->rx_buf_sz;
 struct sk_buff *VAR_4;
 dma_addr_t VAR_5;

 VAR_4 = FUNC_1(VAR_1->dev, VAR_3);
 if (FUNC_6(!VAR_4))
  goto skb_alloc_failed;
 VAR_5 = FUNC_3(VAR_1->pci_dev, VAR_4->data, VAR_1->rx_buf_sz,
   VAR_0);
 if (FUNC_2(VAR_1->pci_dev, VAR_5))
  goto out;
 FUNC_5(VAR_2, VAR_5, VAR_3);

 return VAR_4;

out:
 FUNC_0(VAR_4);
skb_alloc_failed:
 FUNC_4(VAR_2);
 return ((void*)0);
}
