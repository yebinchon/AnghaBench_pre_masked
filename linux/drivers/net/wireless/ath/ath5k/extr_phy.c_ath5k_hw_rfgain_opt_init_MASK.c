
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int g_low; int g_high; void* g_state; int g_step_idx; } ;
struct ath5k_hw {int ah_radio; TYPE_1__ ah_gain; } ;
struct TYPE_6__ {int go_default; } ;
struct TYPE_5__ {int go_default; } ;




 void* VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

int FUNC_0(struct ath5k_hw *VAR_4)
{

 switch (VAR_4->ah_radio) {
 case 129:
  VAR_4->ah_gain.g_step_idx = VAR_2;
  VAR_4->ah_gain.g_low = 20;
  VAR_4->ah_gain.g_high = 35;
  VAR_4->ah_gain.g_state = VAR_0;
  break;
 case 128:
  VAR_4->ah_gain.g_step_idx = VAR_3;
  VAR_4->ah_gain.g_low = 20;
  VAR_4->ah_gain.g_high = 85;
  VAR_4->ah_gain.g_state = VAR_0;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
