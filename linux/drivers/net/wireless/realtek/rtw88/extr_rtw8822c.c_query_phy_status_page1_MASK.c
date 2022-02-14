
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_rx_pkt_stat {scalar_t__ rate; int bw; scalar_t__* rx_power; int signal_power; int rssi; } ;
struct rtw_dev {int dummy; } ;
typedef int s8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (scalar_t__*,int) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_7, u8 *VAR_8,
       struct rtw_rx_pkt_stat *VAR_9)
{
 u8 VAR_10, VAR_11;
 s8 VAR_12 = -120;

 if (VAR_9->rate > VAR_0 && VAR_9->rate < VAR_1)
  VAR_10 = FUNC_1(VAR_8);
 else
  VAR_10 = FUNC_0(VAR_8);

 if (VAR_10 >= 9 && VAR_10 <= 12)
  VAR_11 = VAR_5;
 else if (VAR_10 >= 13)
  VAR_11 = VAR_6;
 else
  VAR_11 = VAR_4;

 VAR_9->rx_power[VAR_2] = FUNC_2(VAR_8) - 110;
 VAR_9->rx_power[VAR_3] = FUNC_3(VAR_8) - 110;
 VAR_9->rssi = FUNC_5(VAR_9->rx_power, 2);
 VAR_9->bw = VAR_11;
 VAR_9->signal_power = FUNC_4(VAR_9->rx_power[VAR_2],
          VAR_9->rx_power[VAR_3],
          VAR_12);
}
