
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct net_device {int dummy; } ;
struct ftmac100_rxdes {int dummy; } ;
struct ftmac100 {int dev; struct net_device* netdev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct page*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ftmac100_rxdes*,int ) ;
 int FUNC_5 (struct ftmac100_rxdes*,int ) ;
 int FUNC_6 (struct ftmac100_rxdes*) ;
 int FUNC_7 (struct ftmac100_rxdes*,struct page*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct net_device*,char*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ftmac100 *VAR_3,
      struct ftmac100_rxdes *VAR_4, gfp_t VAR_5)
{
 struct net_device *VAR_6 = VAR_3->netdev;
 struct page *VAR_7;
 dma_addr_t VAR_8;

 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7) {
  if (FUNC_8())
   FUNC_9(VAR_6, "failed to allocate rx page\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_2(VAR_3->dev, VAR_7, 0, VAR_2, VAR_0);
 if (FUNC_10(FUNC_3(VAR_3->dev, VAR_8))) {
  if (FUNC_8())
   FUNC_9(VAR_6, "failed to map rx page\n");
  FUNC_0(VAR_7);
  return -VAR_1;
 }

 FUNC_7(VAR_4, VAR_7);
 FUNC_5(VAR_4, VAR_8);
 FUNC_4(VAR_4, VAR_2);
 FUNC_6(VAR_4);
 return 0;
}
