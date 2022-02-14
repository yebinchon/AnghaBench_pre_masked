
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tx_fifo_size; } ;
struct xlgmac_pdata {unsigned int tx_q_count; int netdev; TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xlgmac_pdata*,unsigned int,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (struct xlgmac_pdata*,int ,int ,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 unsigned int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct xlgmac_pdata *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_5(
    VAR_4->hw_feat.tx_fifo_size,
    VAR_4->tx_q_count);

 for (VAR_6 = 0; VAR_6 < VAR_4->tx_q_count; VAR_6++) {
  VAR_7 = FUNC_3(FUNC_0(VAR_4, VAR_6, VAR_0));
  VAR_7 = FUNC_1(VAR_7, VAR_2,
          VAR_1, VAR_5);
  FUNC_4(VAR_7, FUNC_0(VAR_4, VAR_6, VAR_0));
 }

 FUNC_2(VAR_4, VAR_3, VAR_4->netdev,
     "%d Tx hardware queues, %d byte fifo per queue\n",
     VAR_4->tx_q_count, ((VAR_5 + 1) * 256));
}
