
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_2__ {int len; int type; } ;
struct mwifiex_ie_types_data {scalar_t__ data; TYPE_1__ header; } ;
struct mwifiex_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;

__attribute__((used)) static void
FUNC_2(struct mwifiex_adapter *VAR_2,
         struct mwifiex_ie_types_data *VAR_3,
         u32 VAR_4, u32 VAR_5,
         struct mwifiex_ie_types_data **VAR_6)
{
 struct mwifiex_ie_types_data *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 VAR_7 = VAR_3;
 VAR_8 = VAR_4;
 *VAR_6 = ((void*)0);

 FUNC_1(VAR_2, VAR_1,
      "info: SCAN_RESP: tlv_buf_size = %d\n",
      VAR_4);

 while (VAR_8 >= sizeof(struct mwifiex_ie_types_header)) {

  VAR_9 = FUNC_0(VAR_7->header.type);
  VAR_10 = FUNC_0(VAR_7->header.len);

  if (sizeof(VAR_3->header) + VAR_10 > VAR_8) {
   FUNC_1(VAR_2, VAR_0,
        "SCAN_RESP: TLV buffer corrupt\n");
   break;
  }

  if (VAR_5 == VAR_9) {
   switch (VAR_9) {
   case 128:
    FUNC_1(VAR_2, VAR_1,
         "info: SCAN_RESP: TSF\t"
         "timestamp TLV, len = %d\n",
         VAR_10);
    *VAR_6 = VAR_7;
    break;
   case 129:
    FUNC_1(VAR_2, VAR_1,
         "info: SCAN_RESP: channel\t"
         "band list TLV, len = %d\n",
         VAR_10);
    *VAR_6 = VAR_7;
    break;
   default:
    FUNC_1(VAR_2, VAR_0,
         "SCAN_RESP: unhandled TLV = %d\n",
         VAR_9);

    return;
   }
  }

  if (*VAR_6)
   break;


  VAR_8 -= (sizeof(VAR_3->header) + VAR_10);
  VAR_7 =
   (struct mwifiex_ie_types_data *) (VAR_7->data +
         VAR_10);

 }
}
