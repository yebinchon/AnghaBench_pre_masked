
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ polarity; int gpio; } ;
struct ath5k_hw {TYPE_1__ rf_kill; } ;


 scalar_t__ FUNC_0 (struct ath5k_hw*,int ) ;

__attribute__((used)) static bool
FUNC_1(struct ath5k_hw *VAR_0)
{


 return FUNC_0(VAR_0, VAR_0->rf_kill.gpio) ==
       VAR_0->rf_kill.polarity;
}
