
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;
typedef scalar_t__ s16 ;
struct TYPE_2__ {scalar_t__ nominal; scalar_t__* cal; } ;


 TYPE_1__* FUNC_0 (struct ath_hw*,struct ath9k_channel*) ;

__attribute__((used)) static s16 FUNC_1(struct ath_hw *VAR_0,
       struct ath9k_channel *VAR_1,
       int VAR_2)
{
 s16 VAR_3 = FUNC_0(VAR_0, VAR_1)->cal[VAR_2];

 if (VAR_3)
  return VAR_3;
 else
  return FUNC_0(VAR_0, VAR_1)->nominal;
}
