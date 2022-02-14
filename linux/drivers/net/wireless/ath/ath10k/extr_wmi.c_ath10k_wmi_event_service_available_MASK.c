
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_svc_avail_ev_arg {int service_map_ext_len; int service_map_ext; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,int ,int ,int ) ;
 int FUNC_3 (struct ath10k*,struct sk_buff*,struct wmi_svc_avail_ev_arg*) ;

void FUNC_4(struct ath10k *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2;
 struct wmi_svc_avail_ev_arg VAR_3 = {};

 VAR_2 = FUNC_3(VAR_0, VAR_1, &VAR_3);
 if (VAR_2) {
  FUNC_1(VAR_0, "failed to parse service available event: %d\n",
       VAR_2);
 }

 FUNC_2(VAR_0, VAR_3.service_map_ext, VAR_0->wmi.svc_map,
          FUNC_0(VAR_3.service_map_ext_len));
}
