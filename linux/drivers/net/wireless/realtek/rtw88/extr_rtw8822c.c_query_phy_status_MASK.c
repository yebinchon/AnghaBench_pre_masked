
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_rx_pkt_stat {int dummy; } ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (struct rtw_dev*,int*,struct rtw_rx_pkt_stat*) ;
 int FUNC_1 (struct rtw_dev*,int*,struct rtw_rx_pkt_stat*) ;
 int FUNC_2 (struct rtw_dev*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_0, u8 *VAR_1,
        struct rtw_rx_pkt_stat *VAR_2)
{
 u8 VAR_3;

 VAR_3 = *VAR_1 & 0xf;

 switch (VAR_3) {
 case 0:
  FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 case 1:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 default:
  FUNC_2(VAR_0, "unused phy status page (%d)\n", VAR_3);
  return;
 }
}
