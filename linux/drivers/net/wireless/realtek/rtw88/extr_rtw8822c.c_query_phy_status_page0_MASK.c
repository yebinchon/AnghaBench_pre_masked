
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_rx_pkt_stat {scalar_t__* rx_power; int signal_power; int bw; int rssi; } ;
struct rtw_dm_info {scalar_t__ cck_gi_l_bnd; scalar_t__ cck_gi_u_bnd; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;
typedef scalar_t__ s8 ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__*,int) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_4, u8 *VAR_5,
       struct rtw_rx_pkt_stat *VAR_6)
{
 struct rtw_dm_info *VAR_7 = &VAR_4->dm_info;
 u8 VAR_8, VAR_9;
 u8 VAR_10, VAR_11;
 s8 VAR_12[VAR_3];
 s8 VAR_13 = -120;

 VAR_12[VAR_0] = FUNC_2(VAR_5);
 VAR_12[VAR_1] = FUNC_3(VAR_5);
 VAR_8 = VAR_7->cck_gi_l_bnd;
 VAR_9 = VAR_7->cck_gi_u_bnd;
 VAR_10 = FUNC_0(VAR_5);
 VAR_11 = FUNC_1(VAR_5);
 if (VAR_10 < VAR_8)
  VAR_12[VAR_0] += (VAR_8 - VAR_10) << 1;
 else if (VAR_10 > VAR_9)
  VAR_12[VAR_0] -= (VAR_10 - VAR_9) << 1;
 if (VAR_11 < VAR_8)
  VAR_12[VAR_1] += (VAR_8 - VAR_11) << 1;
 else if (VAR_11 > VAR_9)
  VAR_12[VAR_1] -= (VAR_11 - VAR_9) << 1;

 VAR_12[VAR_0] -= 110;
 VAR_12[VAR_1] -= 110;

 VAR_6->rx_power[VAR_0] = VAR_12[VAR_0];
 VAR_6->rx_power[VAR_1] = VAR_12[VAR_1];

 VAR_6->rssi = FUNC_5(VAR_6->rx_power, 1);
 VAR_6->bw = VAR_2;
 VAR_6->signal_power = FUNC_4(VAR_6->rx_power[VAR_0],
         VAR_13);
}
