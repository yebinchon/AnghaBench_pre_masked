
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_status {scalar_t__ signal; int antenna; } ;
struct ar9170_rx_phystatus {int* rssi; scalar_t__ rssi_combined; } ;
struct ar9170 {scalar_t__* noise; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ar9170 *VAR_0,
 struct ar9170_rx_phystatus *VAR_1, struct ieee80211_rx_status *VAR_2)
{
 int VAR_3;

 FUNC_1(sizeof(struct ar9170_rx_phystatus) != 20);

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++)
  if (VAR_1->rssi[VAR_3] != 0x80)
   VAR_2->antenna |= FUNC_0(VAR_3);


 for (VAR_3 = 0; VAR_3 < 7; VAR_3++)
  if (VAR_1->rssi[VAR_3] & 0x80)
   VAR_1->rssi[VAR_3] = ((~VAR_1->rssi[VAR_3] & 0x7f) + 1) & 0x7f;


 VAR_2->signal = VAR_0->noise[0] + VAR_1->rssi_combined;
}
