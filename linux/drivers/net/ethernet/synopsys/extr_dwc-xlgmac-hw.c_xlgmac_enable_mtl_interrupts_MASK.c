
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_q_cnt; int tx_q_cnt; } ;
struct xlgmac_pdata {TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xlgmac_pdata*,unsigned int,int ) ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 unsigned int VAR_5;

 VAR_3 = FUNC_1(VAR_2->hw_feat.tx_q_cnt, VAR_2->hw_feat.rx_q_cnt);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {

  VAR_5 = FUNC_2(FUNC_0(VAR_2, VAR_4, VAR_1));
  FUNC_3(VAR_5, FUNC_0(VAR_2, VAR_4, VAR_1));


  FUNC_3(0, FUNC_0(VAR_2, VAR_4, VAR_0));
 }
}
