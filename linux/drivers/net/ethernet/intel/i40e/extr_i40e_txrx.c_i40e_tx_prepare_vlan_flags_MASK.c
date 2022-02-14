
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vlan_hdr {scalar_t__ h_vlan_encapsulated_proto; int h_vlan_TCI; } ;
struct vlan_ethhdr {scalar_t__ h_vlan_TCI; } ;
struct sk_buff {scalar_t__ protocol; int priority; scalar_t__ data; } ;
struct i40e_ring {TYPE_3__* vsi; TYPE_1__* netdev; } ;
typedef int _vhdr ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {TYPE_2__* back; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 struct vlan_hdr* FUNC_3 (struct sk_buff*,int ,int,struct vlan_hdr*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_7(struct sk_buff *VAR_11,
          struct i40e_ring *VAR_12,
          u32 *VAR_13)
{
 __be16 VAR_14 = VAR_11->protocol;
 u32 VAR_15 = 0;

 if (VAR_14 == FUNC_0(VAR_2) &&
     !(VAR_12->netdev->features & VAR_9)) {







  VAR_11->protocol = FUNC_6(VAR_11);
  goto out;
 }


 if (FUNC_5(VAR_11)) {
  VAR_15 |= FUNC_4(VAR_11) << VAR_8;
  VAR_15 |= VAR_4;

 } else if (VAR_14 == FUNC_0(VAR_2)) {
  struct vlan_hdr *VAR_16, VAR_17;

  VAR_16 = FUNC_3(VAR_11, VAR_1, sizeof(VAR_17), &VAR_17);
  if (!VAR_16)
   return -VAR_0;

  VAR_14 = VAR_16->h_vlan_encapsulated_proto;
  VAR_15 |= FUNC_1(VAR_16->h_vlan_TCI) << VAR_8;
  VAR_15 |= VAR_5;
 }

 if (!(VAR_12->vsi->back->flags & VAR_3))
  goto out;


 if ((VAR_15 & (VAR_4 | VAR_5)) ||
     (VAR_11->priority != VAR_10)) {
  VAR_15 &= ~VAR_6;
  VAR_15 |= (VAR_11->priority & 0x7) <<
    VAR_7;
  if (VAR_15 & VAR_5) {
   struct vlan_ethhdr *VAR_18;
   int VAR_19;

   VAR_19 = FUNC_2(VAR_11, 0);
   if (VAR_19 < 0)
    return VAR_19;
   VAR_18 = (struct vlan_ethhdr *)VAR_11->data;
   VAR_18->h_vlan_TCI = FUNC_0(VAR_15 >>
       VAR_8);
  } else {
   VAR_15 |= VAR_4;
  }
 }

out:
 *VAR_13 = VAR_15;
 return 0;
}
