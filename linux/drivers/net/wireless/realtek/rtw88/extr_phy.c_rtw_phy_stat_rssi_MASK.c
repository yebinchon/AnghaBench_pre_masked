
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_phy_stat_iter_data {int min_rssi; struct rtw_dev* rtwdev; } ;
struct rtw_dm_info {int min_rssi; int pre_min_rssi; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int ,struct rtw_phy_stat_iter_data*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_2)
{
 struct rtw_dm_info *VAR_3 = &VAR_2->dm_info;
 struct rtw_phy_stat_iter_data VAR_4 = {};

 VAR_4.rtwdev = VAR_2;
 VAR_4.min_rssi = VAR_0;
 FUNC_0(VAR_2, VAR_1, &VAR_4);

 VAR_3->pre_min_rssi = VAR_3->min_rssi;
 VAR_3->min_rssi = VAR_4.min_rssi;
}
