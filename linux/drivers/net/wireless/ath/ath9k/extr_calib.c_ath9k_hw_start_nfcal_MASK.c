
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* caldata; } ;
struct TYPE_2__ {int cal_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct ath_hw *VAR_5, bool VAR_6)
{
 if (VAR_5->caldata)
  FUNC_2(VAR_4, &VAR_5->caldata->cal_flags);

 FUNC_1(VAR_5, VAR_0,
      VAR_1);

 if (VAR_6)
  FUNC_0(VAR_5, VAR_0,
      VAR_3);
 else
  FUNC_1(VAR_5, VAR_0,
      VAR_3);

 FUNC_1(VAR_5, VAR_0, VAR_2);
}
