
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ftgmac100_txdes {int txdes3; } ;
struct ftgmac100 {int ** tx_skbs; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,size_t,int ) ;
 int FUNC_3 (int ,int ,size_t,int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct ftgmac100 *VAR_3,
         unsigned int VAR_4,
         struct sk_buff *VAR_5,
         struct ftgmac100_txdes *VAR_6,
         u32 VAR_7)
{
 dma_addr_t VAR_8 = FUNC_4(VAR_6->txdes3);
 size_t VAR_9;

 if (VAR_7 & VAR_1) {
  VAR_9 = FUNC_5(VAR_5);
  FUNC_3(VAR_3->dev, VAR_8, VAR_9, VAR_0);
 } else {
  VAR_9 = FUNC_0(VAR_7);
  FUNC_2(VAR_3->dev, VAR_8, VAR_9, VAR_0);
 }


 if (VAR_7 & VAR_2)
  FUNC_1(VAR_5);
 VAR_3->tx_skbs[VAR_4] = ((void*)0);
}
