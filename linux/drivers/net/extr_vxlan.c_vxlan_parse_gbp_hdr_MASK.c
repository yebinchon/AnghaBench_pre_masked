
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vxlanhdr_gbp {scalar_t__ policy_applied; scalar_t__ dont_learn; int policy_id; } ;
struct vxlanhdr {int vx_flags; } ;
struct vxlan_metadata {int gbp; } ;
struct sk_buff {int mark; } ;
struct TYPE_4__ {int tun_flags; } ;
struct TYPE_5__ {int options_len; TYPE_1__ key; } ;
struct TYPE_6__ {TYPE_2__ tun_info; } ;
struct metadata_dst {TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct vxlanhdr *VAR_6,
    struct sk_buff *VAR_7, u32 VAR_8,
    struct vxlan_metadata *VAR_9)
{
 struct vxlanhdr_gbp *VAR_10 = (struct vxlanhdr_gbp *)VAR_6;
 struct metadata_dst *VAR_11;

 if (!(VAR_6->vx_flags & VAR_5))
  goto out;

 VAR_9->gbp = FUNC_0(VAR_10->policy_id);

 VAR_11 = (struct metadata_dst *)FUNC_1(VAR_7);
 if (VAR_11) {
  VAR_11->u.tun_info.key.tun_flags |= VAR_0;
  VAR_11->u.tun_info.options_len = sizeof(*VAR_9);
 }
 if (VAR_10->dont_learn)
  VAR_9->gbp |= VAR_2;

 if (VAR_10->policy_applied)
  VAR_9->gbp |= VAR_3;


 if (!(VAR_8 & VAR_1))
  VAR_7->mark = VAR_9->gbp;
out:
 VAR_6->vx_flags &= ~VAR_4;
}
