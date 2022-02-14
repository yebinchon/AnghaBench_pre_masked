
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tx_queue {int tx_curr_desc; int index; scalar_t__ tx_desc_dma; } ;
struct tx_desc {int dummy; } ;
struct mv643xx_eth_private {int dummy; } ;


 int FUNC_0 (int ) ;
 struct mv643xx_eth_private* FUNC_1 (struct tx_queue*) ;
 int FUNC_2 (struct mv643xx_eth_private*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tx_queue *VAR_0)
{
 struct mv643xx_eth_private *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2;

 VAR_2 = (u32)VAR_0->tx_desc_dma;
 VAR_2 += VAR_0->tx_curr_desc * sizeof(struct tx_desc);
 FUNC_2(VAR_1, FUNC_0(VAR_0->index), VAR_2);
}
