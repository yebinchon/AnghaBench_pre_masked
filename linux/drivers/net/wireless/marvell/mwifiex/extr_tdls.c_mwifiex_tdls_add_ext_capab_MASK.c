
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct TYPE_4__ {int len; int element_id; } ;
struct ieee_types_extcap {int * ext_capab; TYPE_2__ ieee_hdr; } ;
struct TYPE_3__ {scalar_t__ is_hw_11ac_capable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 struct ieee_types_extcap* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_private *VAR_4,
           struct sk_buff *VAR_5)
{
 struct ieee_types_extcap *VAR_6;

 VAR_6 = FUNC_1(VAR_5, sizeof(struct ieee_types_extcap));
 VAR_6->ieee_hdr.element_id = VAR_0;
 VAR_6->ieee_hdr.len = 8;
 FUNC_0(VAR_6->ext_capab, 0, 8);
 VAR_6->ext_capab[4] |= VAR_2;
 VAR_6->ext_capab[3] |= VAR_1;

 if (VAR_4->adapter->is_hw_11ac_capable)
  VAR_6->ext_capab[7] |= VAR_3;
}
