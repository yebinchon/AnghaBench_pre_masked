
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_hang_checks; } ;
struct ath_hw {TYPE_1__ config; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_4)
{
 if (FUNC_1(VAR_4) || FUNC_2(VAR_4)) {
  VAR_4->config.hw_hang_checks |= VAR_1;
  VAR_4->config.hw_hang_checks |= VAR_0;
 }

 if (FUNC_3(VAR_4))
  VAR_4->config.hw_hang_checks |= VAR_2;

 if (FUNC_0(VAR_4) || FUNC_1(VAR_4) || FUNC_2(VAR_4))
  VAR_4->config.hw_hang_checks |= VAR_3;
}
