
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct wilc_vif {int ndev; struct host_if_drv* hif_drv; } ;
struct wilc_join_bss_param {int dummy; } ;
struct wilc_conn_info {int req_ies_len; int * req_ies; int auth_type; int security; struct wilc_join_bss_param* param; } ;
struct wid {int size; int * val; void* type; int id; } ;
struct host_if_drv {int hif_state; struct wilc_conn_info conn_info; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wilc_vif*,int ,struct wid*,size_t) ;

__attribute__((used)) static int FUNC_3(struct wilc_vif *VAR_9)
{
 int VAR_10 = 0;
 struct wid VAR_11[4];
 u32 VAR_12 = 0;
 struct host_if_drv *VAR_13 = VAR_9->hif_drv;
 struct wilc_conn_info *VAR_14 = &VAR_13->conn_info;
 struct wilc_join_bss_param *VAR_15 = VAR_14->param;

 VAR_11[VAR_12].id = VAR_5;
 VAR_11[VAR_12].type = VAR_3;
 VAR_11[VAR_12].val = VAR_14->req_ies;
 VAR_11[VAR_12].size = VAR_14->req_ies_len;
 VAR_12++;

 VAR_11[VAR_12].id = VAR_1;
 VAR_11[VAR_12].type = VAR_4;
 VAR_11[VAR_12].size = sizeof(char);
 VAR_11[VAR_12].val = (s8 *)&VAR_14->security;
 VAR_12++;

 VAR_11[VAR_12].id = VAR_2;
 VAR_11[VAR_12].type = VAR_4;
 VAR_11[VAR_12].size = sizeof(char);
 VAR_11[VAR_12].val = (s8 *)&VAR_14->auth_type;
 VAR_12++;

 VAR_11[VAR_12].id = VAR_6;
 VAR_11[VAR_12].type = VAR_7;
 VAR_11[VAR_12].size = sizeof(*VAR_15);
 VAR_11[VAR_12].val = (u8 *)VAR_15;
 VAR_12++;

 VAR_10 = FUNC_2(VAR_9, VAR_8, VAR_11, VAR_12);
 if (VAR_10) {
  FUNC_1(VAR_9->ndev, "failed to send config packet\n");
  goto error;
 } else {
  VAR_13->hif_state = VAR_0;
 }

 return 0;

error:

 FUNC_0(VAR_14->req_ies);
 VAR_14->req_ies = ((void*)0);

 return VAR_10;
}
