
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_rx_pkt_stat {scalar_t__* rx_power; int signal_power; int bw; int rssi; } ;
struct rtw_dev {int dummy; } ;
typedef int s8 ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_2, u8 *VAR_3,
       struct rtw_rx_pkt_stat *VAR_4)
{
 s8 VAR_5 = -120;
 u8 VAR_6 = FUNC_0(VAR_3);


 VAR_4->rx_power[VAR_0] = VAR_6 - 110;
 VAR_4->rssi = FUNC_2(VAR_4->rx_power, 1);
 VAR_4->bw = VAR_1;
 VAR_4->signal_power = FUNC_1(VAR_4->rx_power[VAR_0],
         VAR_5);
}
