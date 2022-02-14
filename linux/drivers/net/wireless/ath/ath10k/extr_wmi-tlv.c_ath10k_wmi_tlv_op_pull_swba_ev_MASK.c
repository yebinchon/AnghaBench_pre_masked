
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmi_tlv_swba_parse {size_t n_tim; size_t n_noa; TYPE_1__* ev; struct wmi_swba_ev_arg* arg; } ;
struct wmi_swba_ev_arg {int vdev_map; } ;
struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int vdev_map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k*,int ,int ,int ,struct wmi_tlv_swba_parse*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_2,
       struct sk_buff *VAR_3,
       struct wmi_swba_ev_arg *VAR_4)
{
 struct wmi_tlv_swba_parse VAR_5 = { .arg = VAR_4 };
 u32 VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_3->data, VAR_3->len,
      VAR_1, &VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_2, "failed to parse tlv: %d\n", VAR_8);
  return VAR_8;
 }

 if (!VAR_5.ev)
  return -VAR_0;

 VAR_4->vdev_map = VAR_5.ev->vdev_map;

 for (VAR_6 = FUNC_1(VAR_4->vdev_map), VAR_7 = 0; VAR_6; VAR_6 >>= 1)
  if (VAR_6 & FUNC_0(0))
   VAR_7++;

 if (VAR_7 != VAR_5.n_tim ||
     VAR_7 != VAR_5.n_noa)
  return -VAR_0;

 return 0;
}
