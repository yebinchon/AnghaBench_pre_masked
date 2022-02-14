
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_hdr {int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct ice_tx_buf {int tx_flags; struct sk_buff* skb; } ;
struct ice_ring {TYPE_1__* netdev; } ;
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
 int FUNC_1 (struct ice_ring*,struct ice_tx_buf*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct vlan_hdr*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_7(struct ice_ring *VAR_7, struct ice_tx_buf *VAR_8)
{
 struct sk_buff *VAR_9 = VAR_8->skb;
 __be16 VAR_10 = VAR_9->protocol;

 if (VAR_10 == FUNC_0(VAR_2) &&
     !(VAR_7->netdev->features & VAR_6)) {







  VAR_9->protocol = FUNC_6(VAR_9);
  return 0;
 }


 if (FUNC_5(VAR_9)) {
  VAR_8->tx_flags |= FUNC_4(VAR_9) << VAR_5;
  VAR_8->tx_flags |= VAR_3;
 } else if (VAR_10 == FUNC_0(VAR_2)) {
  struct vlan_hdr *VAR_11, VAR_12;


  VAR_11 = (struct vlan_hdr *)FUNC_3(VAR_9, VAR_1,
            sizeof(VAR_12),
            &VAR_12);
  if (!VAR_11)
   return -VAR_0;

  VAR_8->tx_flags |= FUNC_2(VAR_11->h_vlan_TCI) <<
       VAR_5;
  VAR_8->tx_flags |= VAR_4;
 }

 return FUNC_1(VAR_7, VAR_8);
}
