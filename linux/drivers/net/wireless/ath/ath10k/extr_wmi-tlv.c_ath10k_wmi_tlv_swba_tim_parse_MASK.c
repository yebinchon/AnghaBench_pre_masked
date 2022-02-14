
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wmi_tlv_swba_parse {size_t n_tim; TYPE_1__* arg; } ;
struct wmi_tim_info_arg {int tim_num_ps_pending; int tim_changed; int tim_bitmap; int tim_mcast; int tim_len; } ;
struct wmi_tim_info {int tim_num_ps_pending; int tim_changed; int tim_bitmap; int tim_mcast; int tim_len; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {struct wmi_tim_info_arg* tim_info; } ;


 size_t FUNC_0 (struct wmi_tim_info_arg*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,char*) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_3, u16 VAR_4, u16 VAR_5,
      const void *VAR_6, void *VAR_7)
{
 struct wmi_tlv_swba_parse *VAR_8 = VAR_7;
 struct wmi_tim_info_arg *VAR_9;
 const struct wmi_tim_info *VAR_10 = VAR_6;

 if (VAR_4 != VAR_2)
  return -VAR_1;

 if (VAR_8->n_tim >= FUNC_0(VAR_8->arg->tim_info))
  return -VAR_0;

 if (FUNC_1(VAR_10->tim_len) >
      sizeof(VAR_10->tim_bitmap)) {
  FUNC_2(VAR_3, "refusing to parse invalid swba structure\n");
  return -VAR_1;
 }

 VAR_9 = &VAR_8->arg->tim_info[VAR_8->n_tim];
 VAR_9->tim_len = VAR_10->tim_len;
 VAR_9->tim_mcast = VAR_10->tim_mcast;
 VAR_9->tim_bitmap = VAR_10->tim_bitmap;
 VAR_9->tim_changed = VAR_10->tim_changed;
 VAR_9->tim_num_ps_pending = VAR_10->tim_num_ps_pending;

 VAR_8->n_tim++;

 return 0;
}
