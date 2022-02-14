
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_vif {struct host_if_drv* hif_drv; } ;
struct wilc_conn_info {size_t req_ies_len; int req_ies; int bssid; } ;
struct host_if_drv {int connect_timer; struct wilc_vif* connect_timer_vif; struct wilc_conn_info conn_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,size_t,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct wilc_vif*) ;

int FUNC_6(struct wilc_vif *VAR_4, u8 *VAR_5, const u8 *VAR_6,
        size_t VAR_7)
{
 int VAR_8;
 struct host_if_drv *VAR_9 = VAR_4->hif_drv;
 struct wilc_conn_info *VAR_10 = &VAR_9->conn_info;

 if (VAR_5)
  FUNC_0(VAR_10->bssid, VAR_5);

 if (VAR_6) {
  VAR_10->req_ies_len = VAR_7;
  VAR_10->req_ies = FUNC_2(VAR_6, VAR_7, VAR_1);
  if (!VAR_10->req_ies)
   return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8)
  goto free_ies;

 VAR_9->connect_timer_vif = VAR_4;
 FUNC_3(&VAR_9->connect_timer,
    VAR_3 + FUNC_4(VAR_2));

 return 0;

free_ies:
 FUNC_1(VAR_10->req_ies);

 return VAR_8;
}
