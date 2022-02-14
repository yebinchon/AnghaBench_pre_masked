
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wmi_p2p_noa_info {int changed; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int noa_len; scalar_t__ noa_data; } ;
struct TYPE_5__ {TYPE_1__ ap; } ;
struct ath10k_vif {TYPE_2__ u; TYPE_3__* vif; } ;
struct ath10k {int dummy; } ;
struct TYPE_6__ {int p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,char*,int) ;
 int FUNC_1 (struct ath10k_vif*,struct wmi_p2p_noa_info const*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_3, struct ath10k_vif *VAR_4,
      struct sk_buff *VAR_5,
      const struct wmi_p2p_noa_info *VAR_6)
{
 if (!VAR_4->vif->p2p)
  return;

 FUNC_0(VAR_3, VAR_0, "noa changed: %d\n", VAR_6->changed);

 if (VAR_6->changed & VAR_2)
  FUNC_1(VAR_4, VAR_6);

 if (VAR_4->u.ap.noa_data)
  if (!FUNC_2(VAR_5, 0, VAR_4->u.ap.noa_len, VAR_1))
   FUNC_3(VAR_5, VAR_4->u.ap.noa_data,
         VAR_4->u.ap.noa_len);
}
