
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ lpm; } ;
struct ci_hdrc {TYPE_2__ hw_bank; TYPE_1__* platdata; } ;
struct TYPE_3__ {int phy_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 int FUNC_2 (struct ci_hdrc*,int ,int,int) ;

void FUNC_3(struct ci_hdrc *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13 = 0;

 switch (VAR_10->platdata->phy_mode) {
 case 129:
  VAR_11 = FUNC_1(VAR_9);
  VAR_12 = FUNC_0(VAR_9);
  break;
 case 128:
  VAR_11 = FUNC_1(VAR_9) | VAR_4;
  VAR_12 = FUNC_0(VAR_9) | VAR_0;
  break;
 case 130:
  VAR_11 = FUNC_1(VAR_8);
  VAR_12 = FUNC_0(VAR_8);
  break;
 case 131:
  VAR_11 = FUNC_1(VAR_7);
  VAR_12 = FUNC_0(VAR_7);
  VAR_13 = 1;
  break;
 case 132:
  VAR_11 = FUNC_1(VAR_6);
  VAR_12 = FUNC_0(VAR_6);
  break;
 default:
  return;
 }

 if (VAR_10->hw_bank.lpm) {
  FUNC_2(VAR_10, VAR_2, FUNC_0(7) | VAR_0, VAR_12);
  if (VAR_13)
   FUNC_2(VAR_10, VAR_2, VAR_1, VAR_1);
 } else {
  FUNC_2(VAR_10, VAR_3, FUNC_1(7) | VAR_4, VAR_11);
  if (VAR_13)
   FUNC_2(VAR_10, VAR_3, VAR_5, VAR_5);
 }
}
