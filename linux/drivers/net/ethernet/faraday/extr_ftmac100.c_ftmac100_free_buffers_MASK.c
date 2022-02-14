
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct ftmac100_txdes {int dummy; } ;
struct ftmac100_rxdes {int dummy; } ;
struct ftmac100_descs {int dummy; } ;
struct ftmac100 {int descs_dma_addr; TYPE_1__* descs; int dev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct ftmac100_txdes* txdes; struct ftmac100_rxdes* rxdes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int,TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct ftmac100_rxdes*) ;
 struct page* FUNC_6 (struct ftmac100_rxdes*) ;
 int FUNC_7 (struct ftmac100_txdes*) ;
 struct sk_buff* FUNC_8 (struct ftmac100_txdes*) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct ftmac100 *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct ftmac100_rxdes *VAR_7 = &VAR_5->descs->rxdes[VAR_6];
  struct page *VAR_8 = FUNC_6(VAR_7);
  dma_addr_t VAR_9 = FUNC_5(VAR_7);

  if (!VAR_8)
   continue;

  FUNC_3(VAR_5->dev, VAR_9, VAR_2, VAR_0);
  FUNC_0(VAR_8);
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct ftmac100_txdes *VAR_10 = &VAR_5->descs->txdes[VAR_6];
  struct sk_buff *VAR_11 = FUNC_8(VAR_10);
  dma_addr_t VAR_12 = FUNC_7(VAR_10);

  if (!VAR_11)
   continue;

  FUNC_4(VAR_5->dev, VAR_12, FUNC_9(VAR_11), VAR_1);
  FUNC_1(VAR_11);
 }

 FUNC_2(VAR_5->dev, sizeof(struct ftmac100_descs),
     VAR_5->descs, VAR_5->descs_dma_addr);
}
