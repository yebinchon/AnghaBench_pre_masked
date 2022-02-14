
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct wmi_sta_uapsd_auto_trig_param {void* delay_interval; void* suspend_interval; void* service_interval; void* user_priority; void* wmm_ac; } ;
struct wmi_sta_uapsd_auto_trig_arg {int delay_interval; int suspend_interval; int service_interval; int user_priority; int wmm_ac; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,void*,void*,void*,void*,void*) ;

__attribute__((used)) static void *FUNC_3(struct ath10k *VAR_2, void *VAR_3,
      const struct wmi_sta_uapsd_auto_trig_arg *VAR_4)
{
 struct wmi_sta_uapsd_auto_trig_param *VAR_5;
 struct wmi_tlv *VAR_6;

 VAR_6 = VAR_3;
 VAR_6->tag = FUNC_0(VAR_1);
 VAR_6->len = FUNC_0(sizeof(*VAR_5));
 VAR_5 = (void *)VAR_6->value;

 VAR_5->wmm_ac = FUNC_1(VAR_4->wmm_ac);
 VAR_5->user_priority = FUNC_1(VAR_4->user_priority);
 VAR_5->service_interval = FUNC_1(VAR_4->service_interval);
 VAR_5->suspend_interval = FUNC_1(VAR_4->suspend_interval);
 VAR_5->delay_interval = FUNC_1(VAR_4->delay_interval);

 FUNC_2(VAR_2, VAR_0,
     "wmi tlv vdev sta uapsd auto trigger ac %d prio %d svc int %d susp int %d delay int %d\n",
     VAR_5->wmm_ac, VAR_5->user_priority, VAR_5->service_interval,
     VAR_5->suspend_interval, VAR_5->delay_interval);

 return VAR_3 + sizeof(*VAR_6) + sizeof(*VAR_5);
}
