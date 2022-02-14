
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct wilc_vif {int ndev; } ;
struct wid {int size; int * val; void* type; int id; } ;
struct rf_info {scalar_t__ link_speed; int tx_fail_cnt; int rx_cnt; int tx_cnt; int rssi; } ;
typedef int s8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wilc_vif*,int) ;
 size_t FUNC_2 (struct wilc_vif*,int ,struct wid*,size_t) ;

int FUNC_3(struct wilc_vif *VAR_10, struct rf_info *VAR_11)
{
 struct wid VAR_12[5];
 u32 VAR_13 = 0, VAR_14;

 VAR_12[VAR_13].id = VAR_5;
 VAR_12[VAR_13].type = VAR_2;
 VAR_12[VAR_13].size = sizeof(char);
 VAR_12[VAR_13].val = (s8 *)&VAR_11->link_speed;
 VAR_13++;

 VAR_12[VAR_13].id = VAR_7;
 VAR_12[VAR_13].type = VAR_2;
 VAR_12[VAR_13].size = sizeof(char);
 VAR_12[VAR_13].val = (s8 *)&VAR_11->rssi;
 VAR_13++;

 VAR_12[VAR_13].id = VAR_8;
 VAR_12[VAR_13].type = VAR_4;
 VAR_12[VAR_13].size = sizeof(u32);
 VAR_12[VAR_13].val = (s8 *)&VAR_11->tx_cnt;
 VAR_13++;

 VAR_12[VAR_13].id = VAR_6;
 VAR_12[VAR_13].type = VAR_4;
 VAR_12[VAR_13].size = sizeof(u32);
 VAR_12[VAR_13].val = (s8 *)&VAR_11->rx_cnt;
 VAR_13++;

 VAR_12[VAR_13].id = VAR_3;
 VAR_12[VAR_13].type = VAR_4;
 VAR_12[VAR_13].size = sizeof(u32);
 VAR_12[VAR_13].val = (s8 *)&VAR_11->tx_fail_cnt;
 VAR_13++;

 VAR_14 = FUNC_2(VAR_10, VAR_9, VAR_12, VAR_13);
 if (VAR_14) {
  FUNC_0(VAR_10->ndev, "Failed to send scan parameters\n");
  return VAR_14;
 }

 if (VAR_11->link_speed > VAR_1 &&
     VAR_11->link_speed != VAR_0)
  FUNC_1(VAR_10, 1);
 else if (VAR_11->link_speed != VAR_0)
  FUNC_1(VAR_10, 0);

 return VAR_14;
}
