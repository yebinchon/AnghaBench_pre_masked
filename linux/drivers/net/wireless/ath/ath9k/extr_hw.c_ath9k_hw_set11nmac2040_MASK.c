
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int cwm_ignore_extcca; } ;
struct ath_hw {TYPE_1__ config; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 int FUNC_1 (struct ath_hw*,int ,scalar_t__) ;

void FUNC_2(struct ath_hw *VAR_2, struct ath9k_channel *VAR_3)
{
 u32 VAR_4;

 if (FUNC_0(VAR_3) && !VAR_2->config.cwm_ignore_extcca)
  VAR_4 = VAR_0;
 else
  VAR_4 = 0;

 FUNC_1(VAR_2, VAR_1, VAR_4);
}
