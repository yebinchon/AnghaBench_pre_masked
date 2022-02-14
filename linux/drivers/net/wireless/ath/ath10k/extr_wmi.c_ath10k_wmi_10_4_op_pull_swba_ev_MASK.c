
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct wmi_swba_ev_arg {TYPE_3__* tim_info; int vdev_map; } ;
struct wmi_10_4_host_swba_event {TYPE_2__* bcn_info; int vdev_map; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;
struct TYPE_6__ {int tim_num_ps_pending; int tim_changed; int tim_bitmap; int tim_mcast; scalar_t__ tim_len; } ;
struct TYPE_4__ {int tim_num_ps_pending; int tim_changed; int tim_bitmap; int tim_mcast; int tim_len; } ;
struct TYPE_5__ {TYPE_1__ tim_info; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ath10k*,char*) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_1,
        struct sk_buff *VAR_2,
        struct wmi_swba_ev_arg *VAR_3)
{
 struct wmi_10_4_host_swba_event *VAR_4 = (void *)VAR_2->data;
 u32 VAR_5, VAR_6;
 size_t VAR_7;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;

 FUNC_6(VAR_2, sizeof(*VAR_4));
 VAR_3->vdev_map = VAR_4->vdev_map;

 for (VAR_7 = 0, VAR_5 = FUNC_4(VAR_4->vdev_map); VAR_5; VAR_5 >>= 1) {
  if (!(VAR_5 & FUNC_1(0)))
   continue;




  if (FUNC_2(VAR_7 == FUNC_0(VAR_3->tim_info)))
   break;

  if (FUNC_4(VAR_4->bcn_info[VAR_7].tim_info.tim_len) >
        sizeof(VAR_4->bcn_info[VAR_7].tim_info.tim_bitmap)) {
   FUNC_5(VAR_1, "refusing to parse invalid swba structure\n");
   return -VAR_0;
  }

  VAR_6 = FUNC_4(VAR_4->bcn_info[VAR_7].tim_info.tim_len);
  if (VAR_6) {

   VAR_6 -= 4;
   VAR_3->tim_info[VAR_7].tim_len = FUNC_3(VAR_6);
  } else {
   VAR_3->tim_info[VAR_7].tim_len = 0;
  }

  VAR_3->tim_info[VAR_7].tim_mcast = VAR_4->bcn_info[VAR_7].tim_info.tim_mcast;
  VAR_3->tim_info[VAR_7].tim_bitmap =
    VAR_4->bcn_info[VAR_7].tim_info.tim_bitmap;
  VAR_3->tim_info[VAR_7].tim_changed =
    VAR_4->bcn_info[VAR_7].tim_info.tim_changed;
  VAR_3->tim_info[VAR_7].tim_num_ps_pending =
    VAR_4->bcn_info[VAR_7].tim_info.tim_num_ps_pending;





  VAR_7++;
 }

 return 0;
}
