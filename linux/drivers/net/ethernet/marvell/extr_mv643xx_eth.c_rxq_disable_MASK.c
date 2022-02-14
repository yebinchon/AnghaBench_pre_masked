
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rx_queue {int index; } ;
struct mv643xx_eth_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv643xx_eth_private*,int ) ;
 struct mv643xx_eth_private* FUNC_1 (struct rx_queue*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rx_queue *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_1(VAR_1);
 u8 VAR_3 = 1 << VAR_1->index;

 FUNC_3(VAR_2, VAR_0, VAR_3 << 8);
 while (FUNC_0(VAR_2, VAR_0) & VAR_3)
  FUNC_2(10);
}
