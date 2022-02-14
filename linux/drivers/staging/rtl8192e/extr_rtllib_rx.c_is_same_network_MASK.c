
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtllib_network {scalar_t__ ssid_len; scalar_t__ channel; int capability; int ssid; int bssid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct rtllib_network *VAR_3,
      struct rtllib_network *VAR_4, u8 VAR_5)
{





 return (((VAR_3->ssid_len == VAR_4->ssid_len) || (!VAR_5)) &&
  (VAR_3->channel == VAR_4->channel) &&
  !FUNC_0(VAR_3->bssid, VAR_4->bssid, VAR_0) &&
  (!FUNC_0(VAR_3->ssid, VAR_4->ssid, VAR_3->ssid_len) ||
  (!VAR_5)) &&
  ((VAR_3->capability & VAR_2) ==
  (VAR_4->capability & VAR_2)) &&
  ((VAR_3->capability & VAR_1) ==
  (VAR_4->capability & VAR_1)));
}
