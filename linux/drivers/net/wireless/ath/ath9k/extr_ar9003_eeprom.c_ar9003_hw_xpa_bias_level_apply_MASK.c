
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct TYPE_2__ {int xpaBiasLvl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,int ,int ,int) ;
 TYPE_1__* FUNC_9 (struct ath_hw*,int) ;

__attribute__((used)) static void FUNC_10(struct ath_hw *VAR_7, bool VAR_8)
{
 int VAR_9 = FUNC_9(VAR_7, VAR_8)->xpaBiasLvl;

 if (FUNC_3(VAR_7) || FUNC_0(VAR_7) || FUNC_1(VAR_7) ||
     FUNC_4(VAR_7) || FUNC_6(VAR_7))
  FUNC_8(VAR_7, VAR_4, VAR_5, VAR_9);
 else if (FUNC_2(VAR_7) || FUNC_5(VAR_7) || FUNC_7(VAR_7))
  FUNC_8(VAR_7, VAR_3, VAR_6, VAR_9);
 else {
  FUNC_8(VAR_7, VAR_3, VAR_6, VAR_9);
  FUNC_8(VAR_7, VAR_0,
    VAR_1,
    VAR_9 >> 2);
  FUNC_8(VAR_7, VAR_0,
    VAR_2, 1);
 }
}
