
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int p2p_assoc_req_ie_len; int p2p_assoc_req_ie; int p2p_go_probe_resp_ie_len; int p2p_go_probe_resp_ie; int p2p_probe_resp_ie_len; int p2p_probe_resp_ie; int p2p_probe_req_ie_len; int p2p_probe_req_ie; int p2p_beacon_ie_len; int p2p_beacon_ie; int wps_assoc_resp_ie_len; int wps_assoc_resp_ie; int wps_probe_resp_ie_len; int wps_probe_resp_ie; int wps_probe_req_ie_len; int wps_probe_req_ie; int wps_beacon_ie_len; int wps_beacon_ie; int assoc_rsp_len; int assoc_rsp; int assoc_req_len; int assoc_req; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct mlme_priv *VAR_0)
{
 FUNC_0(&VAR_0->assoc_req, &VAR_0->assoc_req_len);
 FUNC_0(&VAR_0->assoc_rsp, &VAR_0->assoc_rsp_len);
 FUNC_1(&VAR_0->wps_beacon_ie, &VAR_0->wps_beacon_ie_len);
 FUNC_1(&VAR_0->wps_probe_req_ie, &VAR_0->wps_probe_req_ie_len);
 FUNC_1(&VAR_0->wps_probe_resp_ie, &VAR_0->wps_probe_resp_ie_len);
 FUNC_1(&VAR_0->wps_assoc_resp_ie, &VAR_0->wps_assoc_resp_ie_len);

 FUNC_1(&VAR_0->p2p_beacon_ie, &VAR_0->p2p_beacon_ie_len);
 FUNC_1(&VAR_0->p2p_probe_req_ie, &VAR_0->p2p_probe_req_ie_len);
 FUNC_1(&VAR_0->p2p_probe_resp_ie, &VAR_0->p2p_probe_resp_ie_len);
 FUNC_1(&VAR_0->p2p_go_probe_resp_ie, &VAR_0->p2p_go_probe_resp_ie_len);
 FUNC_1(&VAR_0->p2p_assoc_req_ie, &VAR_0->p2p_assoc_req_ie_len);
}
