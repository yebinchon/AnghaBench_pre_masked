
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ieee802154_hw {TYPE_2__* phy; struct at86rf230_local* priv; } ;
struct at86rf230_local {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {size_t cca_ed_levels_size; scalar_t__* cca_ed_levels; } ;
struct TYPE_4__ {TYPE_1__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,int ,size_t) ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_hw *VAR_2, s32 VAR_3)
{
 struct at86rf230_local *VAR_4 = VAR_2->priv;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->phy->supported.cca_ed_levels_size; VAR_5++) {
  if (VAR_2->phy->supported.cca_ed_levels[VAR_5] == VAR_3)
   return FUNC_0(VAR_4, VAR_1, VAR_5);
 }

 return -VAR_0;
}
