
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct mwifiex_private {TYPE_2__* mgmt_ie; TYPE_1__* adapter; } ;
struct mwifiex_ie {int ie_length; } ;
struct TYPE_4__ {int ie_length; int mgmt_subtype_mask; } ;
struct TYPE_3__ {size_t max_mgmt_ie_index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mwifiex_private*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct mwifiex_private *VAR_2, u16 VAR_3,
         struct mwifiex_ie *VAR_4, u16 *VAR_5)
{
 u16 VAR_6, VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2->adapter->max_mgmt_ie_index; VAR_8++) {
  VAR_6 = FUNC_0(VAR_2->mgmt_ie[VAR_8].mgmt_subtype_mask);
  VAR_7 = FUNC_0(VAR_4->ie_length);

  if (VAR_6 == VAR_1)
   continue;

  if (VAR_6 == VAR_3) {
   if (VAR_7 > VAR_0)
    continue;

   *VAR_5 = VAR_8;
   return 0;
  }

  if (!VAR_2->mgmt_ie[VAR_8].ie_length) {
   if (FUNC_1(VAR_2, VAR_8))
    continue;

   *VAR_5 = VAR_8;
   return 0;
  }
 }

 return -1;
}
