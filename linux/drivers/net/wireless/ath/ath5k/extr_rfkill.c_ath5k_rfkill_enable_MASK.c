
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int polarity; int gpio; } ;
struct ath5k_hw {TYPE_1__ rf_kill; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;
 int FUNC_2 (struct ath5k_hw*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct ath5k_hw *VAR_1)
{
 FUNC_0(VAR_1, VAR_0, "rfkill enable (gpio:%d polarity:%d)\n",
  VAR_1->rf_kill.gpio, VAR_1->rf_kill.polarity);
 FUNC_2(VAR_1, VAR_1->rf_kill.gpio);
 FUNC_1(VAR_1, VAR_1->rf_kill.gpio, VAR_1->rf_kill.polarity);
}
