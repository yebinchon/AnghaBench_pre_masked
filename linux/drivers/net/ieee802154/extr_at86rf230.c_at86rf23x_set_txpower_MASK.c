
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct at86rf230_local {TYPE_3__* hw; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {TYPE_2__* phy; } ;
struct TYPE_4__ {size_t tx_powers_size; scalar_t__* tx_powers; } ;
struct TYPE_5__ {TYPE_1__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,int ,size_t) ;

__attribute__((used)) static int
FUNC_1(struct at86rf230_local *VAR_2, s32 VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->hw->phy->supported.tx_powers_size; VAR_4++) {
  if (VAR_2->hw->phy->supported.tx_powers[VAR_4] == VAR_3)
   return FUNC_0(VAR_2, VAR_1, VAR_4);
 }

 return -VAR_0;
}
