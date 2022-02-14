
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ cb; scalar_t__ data; } ;
struct page {int dummy; } ;
struct octeon_skb_page_info {int dma; scalar_t__ page_offset; struct page* page; } ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline void
*FUNC_8(struct octeon_device *VAR_6,
     struct octeon_skb_page_info *VAR_7)
{
 struct page *VAR_8;
 struct sk_buff *VAR_9;
 struct octeon_skb_page_info *VAR_10;

 VAR_8 = FUNC_1(VAR_1);
 if (FUNC_7(!VAR_8))
  return ((void*)0);

 VAR_9 = FUNC_2(VAR_2 + VAR_4);
 if (FUNC_7(!VAR_9)) {
  FUNC_0(VAR_8);
  VAR_7->page = ((void*)0);
  return ((void*)0);
 }

 if ((unsigned long)VAR_9->data & VAR_5) {
  u32 VAR_11 = VAR_4 - ((unsigned long)VAR_9->data & VAR_5);

  FUNC_6(VAR_9, VAR_11);
 }

 VAR_10 = ((struct octeon_skb_page_info *)(VAR_9->cb));

 VAR_7->dma = FUNC_4(&VAR_6->pci_dev->dev, VAR_8, 0,
        VAR_3, VAR_0);


 if (FUNC_5(&VAR_6->pci_dev->dev, VAR_7->dma)) {
  FUNC_0(VAR_8);
  FUNC_3((struct sk_buff *)VAR_9);
  VAR_7->page = ((void*)0);
  return ((void*)0);
 }

 VAR_7->page = VAR_8;
 VAR_7->page_offset = 0;
 VAR_10->page = VAR_8;
 VAR_10->page_offset = 0;
 VAR_10->dma = VAR_7->dma;

 return (void *)VAR_9;
}
