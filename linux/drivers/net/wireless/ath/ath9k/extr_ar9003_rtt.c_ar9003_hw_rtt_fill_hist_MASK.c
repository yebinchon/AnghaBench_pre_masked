
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_chainmask; } ;
struct ath_hw {TYPE_2__* caldata; TYPE_1__ caps; } ;
struct TYPE_4__ {int cal_flags; int ** rtt_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int,int) ;
 int FUNC_1 (struct ath_hw*,int,int) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int ,int ,char*,int,int,int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct ath_hw *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!(VAR_4->caps.rx_chainmask & (1 << VAR_5)))
   continue;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   VAR_4->caldata->rtt_table[VAR_5][VAR_6] =
    FUNC_1(VAR_4, VAR_5, VAR_6);

   FUNC_0(VAR_4, VAR_6, VAR_5);

   FUNC_3(FUNC_2(VAR_4), VAR_1,
    "RTT value at idx %d, chain %d is: 0x%x\n",
    VAR_6, VAR_5, VAR_4->caldata->rtt_table[VAR_5][VAR_6]);
  }
 }

 FUNC_4(VAR_3, &VAR_4->caldata->cal_flags);
}
