
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlan_hdr {scalar_t__ h_vlan_encapsulated_proto; int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct iavf_ring {TYPE_1__* netdev; } ;
typedef int _vhdr ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct vlan_hdr* FUNC_2 (struct sk_buff*,int ,int,struct vlan_hdr*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_6(struct sk_buff *VAR_7,
          struct iavf_ring *VAR_8,
          u32 *VAR_9)
{
 __be16 VAR_10 = VAR_7->protocol;
 u32 VAR_11 = 0;

 if (VAR_10 == FUNC_0(VAR_2) &&
     !(VAR_8->netdev->features & VAR_6)) {







  VAR_7->protocol = FUNC_5(VAR_7);
  goto out;
 }


 if (FUNC_4(VAR_7)) {
  VAR_11 |= FUNC_3(VAR_7) << VAR_5;
  VAR_11 |= VAR_3;

 } else if (VAR_10 == FUNC_0(VAR_2)) {
  struct vlan_hdr *VAR_12, VAR_13;

  VAR_12 = FUNC_2(VAR_7, VAR_1, sizeof(VAR_13), &VAR_13);
  if (!VAR_12)
   return -VAR_0;

  VAR_10 = VAR_12->h_vlan_encapsulated_proto;
  VAR_11 |= FUNC_1(VAR_12->h_vlan_TCI) << VAR_5;
  VAR_11 |= VAR_4;
 }

out:
 *VAR_9 = VAR_11;
 return 0;
}
