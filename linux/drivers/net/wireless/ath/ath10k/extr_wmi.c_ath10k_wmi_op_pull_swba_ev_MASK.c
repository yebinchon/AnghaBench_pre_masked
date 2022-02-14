
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct wmi_swba_ev_arg {int ** noa_info; TYPE_3__* tim_info; int vdev_map; } ;
struct wmi_host_swba_event {TYPE_2__* bcn_info; int vdev_map; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;
struct TYPE_6__ {int tim_num_ps_pending; int tim_changed; int tim_bitmap; int tim_mcast; int tim_len; } ;
struct TYPE_4__ {int tim_num_ps_pending; int tim_changed; int tim_bitmap; int tim_mcast; int tim_len; } ;
struct TYPE_5__ {int p2p_noa_info; TYPE_1__ tim_info; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,char*) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_1, struct sk_buff *VAR_2,
          struct wmi_swba_ev_arg *VAR_3)
{
 struct wmi_host_swba_event *VAR_4 = (void *)VAR_2->data;
 u32 VAR_5;
 size_t VAR_6;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;

 FUNC_5(VAR_2, sizeof(*VAR_4));
 VAR_3->vdev_map = VAR_4->vdev_map;

 for (VAR_6 = 0, VAR_5 = FUNC_3(VAR_4->vdev_map); VAR_5; VAR_5 >>= 1) {
  if (!(VAR_5 & FUNC_1(0)))
   continue;




  if (FUNC_2(VAR_6 == FUNC_0(VAR_3->tim_info)))
   break;

  if (FUNC_3(VAR_4->bcn_info[VAR_6].tim_info.tim_len) >
       sizeof(VAR_4->bcn_info[VAR_6].tim_info.tim_bitmap)) {
   FUNC_4(VAR_1, "refusing to parse invalid swba structure\n");
   return -VAR_0;
  }

  VAR_3->tim_info[VAR_6].tim_len = VAR_4->bcn_info[VAR_6].tim_info.tim_len;
  VAR_3->tim_info[VAR_6].tim_mcast = VAR_4->bcn_info[VAR_6].tim_info.tim_mcast;
  VAR_3->tim_info[VAR_6].tim_bitmap =
    VAR_4->bcn_info[VAR_6].tim_info.tim_bitmap;
  VAR_3->tim_info[VAR_6].tim_changed =
    VAR_4->bcn_info[VAR_6].tim_info.tim_changed;
  VAR_3->tim_info[VAR_6].tim_num_ps_pending =
    VAR_4->bcn_info[VAR_6].tim_info.tim_num_ps_pending;

  VAR_3->noa_info[VAR_6] = &VAR_4->bcn_info[VAR_6].p2p_noa_info;
  VAR_6++;
 }

 return 0;
}
