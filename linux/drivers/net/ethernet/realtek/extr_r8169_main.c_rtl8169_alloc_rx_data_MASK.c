
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dev; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;
struct RxDesc {int addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct page*,int ,int ,int ) ;
 int FUNC_5 (struct device*,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct rtl8169_private*,int ,int ,char*) ;
 int FUNC_9 (struct RxDesc*) ;
 struct device* FUNC_10 (struct rtl8169_private*) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static struct page *FUNC_12(struct rtl8169_private *VAR_4,
       struct RxDesc *VAR_5)
{
 struct device *VAR_6 = FUNC_10(VAR_4);
 int VAR_7 = FUNC_3(VAR_6);
 dma_addr_t VAR_8;
 struct page *VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_1, FUNC_6(VAR_2));
 if (!VAR_9)
  return ((void*)0);

 VAR_8 = FUNC_4(VAR_6, VAR_9, 0, VAR_2, VAR_0);
 if (FUNC_11(FUNC_5(VAR_6, VAR_8))) {
  if (FUNC_7())
   FUNC_8(VAR_4, VAR_3, VAR_4->dev, "Failed to map RX DMA!\n");
  FUNC_0(VAR_9, FUNC_6(VAR_2));
  return ((void*)0);
 }

 VAR_5->addr = FUNC_2(VAR_8);
 FUNC_9(VAR_5);

 return VAR_9;
}
