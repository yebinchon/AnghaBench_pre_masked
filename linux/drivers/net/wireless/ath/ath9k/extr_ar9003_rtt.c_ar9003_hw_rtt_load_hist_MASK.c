
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx_chainmask; } ;
struct ath_hw {TYPE_1__* caldata; TYPE_2__ caps; } ;
struct TYPE_3__ {int ** rtt_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*,int,int,int ) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int ,int ,char*,int,int,int ) ;

void FUNC_3(struct ath_hw *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!(VAR_3->caps.rx_chainmask & (1 << VAR_4)))
   continue;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   FUNC_0(VAR_3, VAR_4, VAR_5,
           VAR_3->caldata->rtt_table[VAR_4][VAR_5]);
   FUNC_2(FUNC_1(VAR_3), VAR_1,
    "Load RTT value at idx %d, chain %d: 0x%x\n",
    VAR_5, VAR_4, VAR_3->caldata->rtt_table[VAR_4][VAR_5]);
  }
 }
}
