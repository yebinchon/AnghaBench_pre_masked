
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mwifiex_private {int dummy; } ;
struct ieee_types_header {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct mwifiex_private *VAR_2, struct sk_buff *VAR_3,
   u8 VAR_4)
{
 u8 *VAR_5;

 VAR_5 = FUNC_0(VAR_3,
        VAR_0 + sizeof(struct ieee_types_header));

 *VAR_5++ = VAR_1;
 *VAR_5++ = 7;
 *VAR_5++ = 0x00;
 *VAR_5++ = 0x50;
 *VAR_5++ = 0xf2;
 *VAR_5++ = 2;
 *VAR_5++ = 0;
 *VAR_5++ = 1;
 *VAR_5++ = VAR_4;
}
