
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct mwifiex_private {int adapter; int bss_role; int media_connected; } ;
struct mwifiex_ie_types_header {int len; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int,...) ;
 int FUNC_3 (struct mwifiex_private*,struct mwifiex_ie_types_header*) ;
 int FUNC_4 (struct mwifiex_private*,struct mwifiex_ie_types_header*) ;

void FUNC_5(struct mwifiex_private *VAR_3,
        struct sk_buff *VAR_4)
{
 struct mwifiex_ie_types_header *VAR_5;
 u16 VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_3->media_connected) {
  FUNC_2(VAR_3->adapter, VAR_0,
       "tx_pause event while disconnected; bss_role=%d\n",
       VAR_3->bss_role);
  return;
 }

 VAR_8 = VAR_4->len - sizeof(u32);
 VAR_5 = (void *)VAR_4->data + sizeof(u32);

 while (VAR_8 >= (int)sizeof(struct mwifiex_ie_types_header)) {
  VAR_6 = FUNC_1(VAR_5->type);
  VAR_7 = FUNC_1(VAR_5->len);
  if ((sizeof(struct mwifiex_ie_types_header) + VAR_7) >
      VAR_8) {
   FUNC_2(VAR_3->adapter, VAR_0,
        "wrong tlv: tlvLen=%d, tlvBufLeft=%d\n",
        VAR_7, VAR_8);
   break;
  }
  if (VAR_6 == VAR_2) {
   if (FUNC_0(VAR_3) == VAR_1)
    FUNC_3(VAR_3, VAR_5);
   else
    FUNC_4(VAR_3, VAR_5);
  }

  VAR_8 -= sizeof(struct mwifiex_ie_types_header) +
    VAR_7;
  VAR_5 = (void *)((u8 *)VAR_5 + VAR_7 +
          sizeof(struct mwifiex_ie_types_header));
 }

}
