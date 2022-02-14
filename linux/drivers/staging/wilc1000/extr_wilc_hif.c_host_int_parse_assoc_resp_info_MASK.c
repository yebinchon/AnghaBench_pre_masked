
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct wilc_vif {int ndev; struct host_if_drv* hif_drv; } ;
struct wilc_conn_info {scalar_t__ status; scalar_t__ req_ies_len; int * req_ies; scalar_t__ resp_ies_len; int * resp_ies; int bssid; int arg; int (* conn_result ) (int ,scalar_t__,int ) ;} ;
struct host_if_drv {int hif_state; int assoc_bssid; struct wilc_conn_info conn_info; int connect_timer; int assoc_resp; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct wilc_vif*,int ,int ,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,struct wilc_conn_info*) ;

__attribute__((used)) static inline void FUNC_8(struct wilc_vif *VAR_6,
        u8 VAR_7)
{
 struct host_if_drv *VAR_8 = VAR_6->hif_drv;
 struct wilc_conn_info *VAR_9 = &VAR_8->conn_info;

 if (VAR_7 == VAR_3) {
  u32 VAR_10;

  FUNC_4(VAR_8->assoc_resp, 0, VAR_4);

  FUNC_2(VAR_6, VAR_8->assoc_resp,
         VAR_4,
         &VAR_10);

  if (VAR_10 != 0) {
   s32 VAR_11 = 0;

   VAR_11 = FUNC_7(VAR_8->assoc_resp,
        VAR_10,
        VAR_9);
   if (VAR_11)
    FUNC_5(VAR_6->ndev,
        "wilc_parse_assoc_resp_info() returned error %d\n",
        VAR_11);
  }
 }

 FUNC_0(&VAR_8->connect_timer);
 VAR_9->conn_result(VAR_0, VAR_7,
          VAR_8->conn_info.arg);

 if (VAR_7 == VAR_3 &&
     VAR_9->status == VAR_5) {
  FUNC_1(VAR_8->assoc_bssid, VAR_9->bssid);
  VAR_8->hif_state = VAR_1;
 } else {
  VAR_8->hif_state = VAR_2;
 }

 FUNC_3(VAR_9->resp_ies);
 VAR_9->resp_ies = ((void*)0);
 VAR_9->resp_ies_len = 0;

 FUNC_3(VAR_9->req_ies);
 VAR_9->req_ies = ((void*)0);
 VAR_9->req_ies_len = 0;
}
