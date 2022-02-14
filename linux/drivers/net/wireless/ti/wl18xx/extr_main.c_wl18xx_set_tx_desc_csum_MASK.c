
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271_tx_hw_descr {int wl18xx_checksum_data; } ;
struct wl1271 {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct iphdr {int protocol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct wl1271 *VAR_2,
        struct wl1271_tx_hw_descr *VAR_3,
        struct sk_buff *VAR_4)
{
 u32 VAR_5;
 struct iphdr *VAR_6;

 if (!VAR_1) {
  VAR_3->wl18xx_checksum_data = 0;
  return;
 }

 if (VAR_4->ip_summed != VAR_0) {
  VAR_3->wl18xx_checksum_data = 0;
  return;
 }

 VAR_5 = FUNC_2(VAR_4) - FUNC_1(VAR_4);
 if (FUNC_0(VAR_5 >= (1<<7))) {
  VAR_3->wl18xx_checksum_data = 0;
  return;
 }

 VAR_3->wl18xx_checksum_data = VAR_5 << 1;


 VAR_6 = (void *)FUNC_2(VAR_4);
 VAR_3->wl18xx_checksum_data |= (VAR_6->protocol & 0x01);
}
