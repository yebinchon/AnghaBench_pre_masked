
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_2__ {void (* set_delta_slope ) (struct ath_hw*,struct ath9k_channel*) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 void FUNC_1 (struct ath_hw*,struct ath9k_channel*) ;

__attribute__((used)) static inline void FUNC_2(struct ath_hw *VAR_0,
         struct ath9k_channel *VAR_1)
{
 return FUNC_0(VAR_0)->set_delta_slope(VAR_0, VAR_1);
}
