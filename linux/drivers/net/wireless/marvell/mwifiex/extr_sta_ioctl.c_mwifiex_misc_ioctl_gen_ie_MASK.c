
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mwifiex_private {int wpa_ie; int wpa_ie_len; struct mwifiex_adapter* adapter; } ;
struct mwifiex_ds_misc_gen_ie {int type; int len; int ie_data; } ;
struct mwifiex_adapter {int arp_filter_size; int arp_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_3 (struct mwifiex_private*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_3,
         struct mwifiex_ds_misc_gen_ie *VAR_4,
         u16 VAR_5)
{
 struct mwifiex_adapter *VAR_6 = VAR_3->adapter;

 switch (VAR_4->type) {
 case 128:
  if (VAR_5 == VAR_2) {
   VAR_4->len = VAR_3->wpa_ie_len;
   FUNC_0(VAR_4->ie_data, VAR_3->wpa_ie, VAR_4->len);
  } else {
   FUNC_3(VAR_3, VAR_4->ie_data,
        (u16) VAR_4->len);
  }
  break;
 case 129:
  FUNC_1(VAR_6->arp_filter, 0, sizeof(VAR_6->arp_filter));
  if (VAR_4->len > VAR_0) {
   VAR_6->arp_filter_size = 0;
   FUNC_2(VAR_6, VAR_1,
        "invalid ARP filter size\n");
   return -1;
  } else {
   FUNC_0(VAR_6->arp_filter, VAR_4->ie_data,
          VAR_4->len);
   VAR_6->arp_filter_size = VAR_4->len;
  }
  break;
 default:
  FUNC_2(VAR_6, VAR_1, "invalid IE type\n");
  return -1;
 }
 return 0;
}
