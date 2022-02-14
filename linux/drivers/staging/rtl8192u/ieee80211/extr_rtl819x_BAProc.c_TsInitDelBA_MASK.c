
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ valid; } ;
struct tx_ts_record {TYPE_1__ tx_pending_ba_record; TYPE_1__ tx_admitted_ba_record; } ;
struct ts_common_info {int addr; } ;
struct rx_ts_record {TYPE_1__ rx_admitted_ba_record; } ;
struct ieee80211_device {int dummy; } ;
typedef enum tr_select { ____Placeholder_tr_select } tr_select ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_device*,struct rx_ts_record*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ieee80211_device*,struct tx_ts_record*) ;
 int FUNC_2 (struct ieee80211_device*,int ,TYPE_1__*,int,int ) ;

void
FUNC_3(struct ieee80211_device *VAR_3, struct ts_common_info *VAR_4, enum tr_select VAR_5)
{
 if (VAR_5 == VAR_2) {
  struct tx_ts_record *VAR_6 = (struct tx_ts_record *)VAR_4;

  if (FUNC_1(VAR_3, VAR_6))
   FUNC_2(
    VAR_3,
    VAR_4->addr,
    (VAR_6->tx_admitted_ba_record.valid) ? (&VAR_6->tx_admitted_ba_record) : (&VAR_6->tx_pending_ba_record),
    VAR_5,
    VAR_0);
 } else if (VAR_5 == VAR_1) {
  struct rx_ts_record *VAR_7 = (struct rx_ts_record *)VAR_4;
  if (FUNC_0(VAR_3, VAR_7))
   FUNC_2(
    VAR_3,
    VAR_4->addr,
    &VAR_7->rx_admitted_ba_record,
    VAR_5,
    VAR_0);
 }
}
