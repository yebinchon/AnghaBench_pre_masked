
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* caldata; } ;
struct TYPE_2__ {int* caldac; int** rtt_table; int cal_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 if (!FUNC_2(VAR_1, &VAR_2->caldata->cal_flags))
  return;

 if ((VAR_3 != 5) || (VAR_4 >= 2))
  return;

 VAR_5 = FUNC_1(VAR_2, FUNC_0(VAR_4),
        VAR_0);
 if (!VAR_5)
  return;

 VAR_6 = VAR_2->caldata->caldac[VAR_4];
 VAR_2->caldata->rtt_table[VAR_4][VAR_3] &= 0xFFFF05FF;
 VAR_6 = (VAR_6 & 0x20) | ((VAR_6 & 0x1F) << 7);
 VAR_2->caldata->rtt_table[VAR_4][VAR_3] |= (VAR_6 << 4);
}
