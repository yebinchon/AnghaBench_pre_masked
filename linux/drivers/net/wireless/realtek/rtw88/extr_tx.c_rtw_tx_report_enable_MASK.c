
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_tx_report {int sn; } ;
struct rtw_tx_pkt_info {int sn; int report; } ;
struct rtw_dev {struct rtw_tx_report tx_report; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_0,
     struct rtw_tx_pkt_info *VAR_1)
{
 struct rtw_tx_report *VAR_2 = &VAR_0->tx_report;





 VAR_1->sn = (FUNC_0(&VAR_2->sn) << 2) & 0xfc;
 VAR_1->report = 1;
}
