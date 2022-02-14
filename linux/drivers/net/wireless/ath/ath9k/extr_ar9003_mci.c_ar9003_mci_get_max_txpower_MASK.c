
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_3__ {int concur_tx; } ;
struct TYPE_4__ {TYPE_1__ mci; } ;
struct ath_hw {TYPE_2__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

u16 FUNC_0(struct ath_hw *VAR_4, u8 VAR_5)
{
 if (!VAR_4->btcoex_hw.mci.concur_tx)
  goto out;

 if (VAR_5 == VAR_2)
  return VAR_0;
 else if (VAR_5 == VAR_3)
  return VAR_1;

out:
 return -1;
}
