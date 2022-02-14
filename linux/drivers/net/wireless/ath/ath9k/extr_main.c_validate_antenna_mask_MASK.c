
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_chainmask; } ;
struct ath_hw {TYPE_1__ caps; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;

__attribute__((used)) static bool FUNC_1(struct ath_hw *VAR_0, u32 VAR_1)
{
 if (FUNC_0(VAR_0))
  return 1;

 switch (VAR_1 & 0x7) {
 case 0x1:
 case 0x3:
 case 0x7:
  return 1;
 case 0x2:
  return (VAR_0->caps.rx_chainmask == 1);
 default:
  return 0;
 }
}
