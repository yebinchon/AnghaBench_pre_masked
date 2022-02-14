
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_chainmask; } ;
struct ath_hw {TYPE_2__* caldata; TYPE_1__ caps; } ;
struct TYPE_4__ {int cal_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*,int,int,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct ath_hw *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!(VAR_3->caps.rx_chainmask & (1 << VAR_4)))
   continue;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   FUNC_0(VAR_3, VAR_4, VAR_5, 0);
 }

 if (VAR_3->caldata)
  FUNC_1(VAR_2, &VAR_3->caldata->cal_flags);
}
