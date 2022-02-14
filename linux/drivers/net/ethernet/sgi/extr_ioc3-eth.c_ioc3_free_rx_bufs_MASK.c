
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ioc3_private {int rx_ci; int rx_pi; int * rxr; int dma_dev; struct sk_buff** rx_skbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ioc3_private *VAR_3)
{
 int VAR_4, VAR_5;
 struct sk_buff *VAR_6;

 VAR_5 = VAR_3->rx_ci;
 VAR_4 = VAR_3->rx_pi;

 while (VAR_5 != VAR_4) {
  VAR_6 = VAR_3->rx_skbs[VAR_5];
  if (VAR_6) {
   FUNC_2(VAR_3->dma_dev,
      FUNC_0(VAR_3->rxr[VAR_5]),
      VAR_1, VAR_0);
   FUNC_1(VAR_6);
  }
  VAR_5 = (VAR_5 + 1) & VAR_2;
 }
}
