
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ rf_type; } ;
struct rtw_dev {TYPE_1__ hal; } ;
struct TYPE_5__ {scalar_t__* rx_mask; } ;
struct TYPE_6__ {TYPE_2__ mcs; } ;
struct ieee80211_sta {TYPE_3__ ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct rtw_dev *VAR_3,
     struct ieee80211_sta *VAR_4)
{
 u8 VAR_5;

 if (VAR_3->hal.rf_type == VAR_2 && VAR_4->ht_cap.mcs.rx_mask[1] != 0)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_1;

 return VAR_5;
}
