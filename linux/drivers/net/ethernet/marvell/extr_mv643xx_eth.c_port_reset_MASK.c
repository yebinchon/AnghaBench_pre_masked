
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv643xx_eth_private {int rxq_count; int txq_count; scalar_t__ txq; scalar_t__ rxq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (struct mv643xx_eth_private*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mv643xx_eth_private*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct mv643xx_eth_private *VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7->rxq_count; VAR_9++)
  FUNC_1(VAR_7->rxq + VAR_9);
 for (VAR_9 = 0; VAR_9 < VAR_7->txq_count; VAR_9++)
  FUNC_2(VAR_7->txq + VAR_9);

 while (1) {
  u32 VAR_10 = FUNC_0(VAR_7, VAR_3);

  if ((VAR_10 & (VAR_6 | VAR_5)) == VAR_5)
   break;
  FUNC_3(10);
 }


 VAR_8 = FUNC_0(VAR_7, VAR_2);
 VAR_8 &= ~(VAR_4 |
    VAR_0 |
    VAR_1);
 FUNC_4(VAR_7, VAR_2, VAR_8);
}
