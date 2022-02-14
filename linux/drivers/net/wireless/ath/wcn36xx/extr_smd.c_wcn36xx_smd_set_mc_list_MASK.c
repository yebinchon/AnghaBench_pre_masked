
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wcn36xx_vif {int bss_index; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {int bss_index; scalar_t__ mc_addr_count; } ;
struct wcn36xx_hal_rcv_flt_pkt_set_mc_list_req_msg {TYPE_2__ header; TYPE_1__ mc_addr_list; } ;
struct wcn36xx_hal_rcv_flt_mc_addr_list_type {int dummy; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; scalar_t__ hal_buf; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,struct wcn36xx_hal_rcv_flt_mc_addr_list_type*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct wcn36xx*,int ) ;
 struct wcn36xx_vif* FUNC_7 (struct ieee80211_vif*) ;

int FUNC_8(struct wcn36xx *VAR_1,
       struct ieee80211_vif *VAR_2,
       struct wcn36xx_hal_rcv_flt_mc_addr_list_type *VAR_3)
{
 struct wcn36xx_vif *VAR_4 = FUNC_7(VAR_2);
 struct wcn36xx_hal_rcv_flt_pkt_set_mc_list_req_msg *VAR_5 = ((void*)0);
 int VAR_6;

 FUNC_2(&VAR_1->hal_mutex);

 VAR_5 = (struct wcn36xx_hal_rcv_flt_pkt_set_mc_list_req_msg *)
     VAR_1->hal_buf;
 FUNC_0(&VAR_5->header, VAR_0,
       sizeof(VAR_5->mc_addr_list));


 if (VAR_3)
  FUNC_1(&VAR_5->mc_addr_list, VAR_3,
         sizeof(VAR_5->mc_addr_list));
 else
  VAR_5->mc_addr_list.mc_addr_count = 0;

 VAR_5->mc_addr_list.bss_index = VAR_4->bss_index;

 VAR_6 = FUNC_6(VAR_1, VAR_5->header.len);
 if (VAR_6) {
  FUNC_4("Sending HAL_8023_MULTICAST_LIST failed\n");
  goto out;
 }
 VAR_6 = FUNC_5(VAR_1->hal_buf, VAR_1->hal_rsp_len);
 if (VAR_6) {
  FUNC_4("HAL_8023_MULTICAST_LIST rsp failed err=%d\n", VAR_6);
  goto out;
 }
out:
 FUNC_3(&VAR_1->hal_mutex);
 return VAR_6;
}
