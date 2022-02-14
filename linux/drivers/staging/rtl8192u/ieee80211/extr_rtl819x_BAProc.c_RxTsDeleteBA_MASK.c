
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ba_record {scalar_t__ valid; } ;
struct rx_ts_record {struct ba_record rx_admitted_ba_record; } ;
struct ieee80211_device {int dummy; } ;


 int FUNC_0 (struct ieee80211_device*,struct ba_record*) ;

__attribute__((used)) static u8 FUNC_1(struct ieee80211_device *VAR_0, struct rx_ts_record *VAR_1)
{
 struct ba_record *VAR_2 = &VAR_1->rx_admitted_ba_record;
 u8 VAR_3 = 0;

 if (VAR_2->valid) {
  FUNC_0(VAR_0, VAR_2);
  VAR_3 = 1;
 }

 return VAR_3;
}
