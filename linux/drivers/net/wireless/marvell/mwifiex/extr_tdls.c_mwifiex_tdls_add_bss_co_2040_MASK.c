
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee_types_header {int dummy; } ;
struct TYPE_2__ {int len; int element_id; } ;
struct ieee_types_bss_co_2040 {int bss_2040co; TYPE_1__ ieee_hdr; } ;


 int VAR_0 ;
 struct ieee_types_bss_co_2040* FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_1)
{
 struct ieee_types_bss_co_2040 *VAR_2;

 VAR_2 = FUNC_0(VAR_1, sizeof(struct ieee_types_bss_co_2040));
 VAR_2->ieee_hdr.element_id = VAR_0;
 VAR_2->ieee_hdr.len = sizeof(struct ieee_types_bss_co_2040) -
         sizeof(struct ieee_types_header);
 VAR_2->bss_2040co = 0x01;
}
