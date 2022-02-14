
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl12xx_vif {int ssid; scalar_t__ ssid_len; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__ const*,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct wl12xx_vif *VAR_4, struct sk_buff *VAR_5,
       int VAR_6)
{
 u8 VAR_7;
 const u8 *VAR_8 = FUNC_0(VAR_3, VAR_5->data + VAR_6,
      VAR_5->len - VAR_6);

 if (!VAR_8) {
  FUNC_2("No SSID in IEs!");
  return -VAR_1;
 }

 VAR_7 = VAR_8[1];
 if (VAR_7 > VAR_2) {
  FUNC_2("SSID is too long!");
  return -VAR_0;
 }

 VAR_4->ssid_len = VAR_7;
 FUNC_1(VAR_4->ssid, VAR_8+2, VAR_7);
 return 0;
}
