
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlan_ethhdr {int h_vlan_TCI; } ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct ice_tx_buf {int tx_flags; struct sk_buff* skb; } ;
struct ice_ring {TYPE_2__* vsi; } ;
struct TYPE_4__ {TYPE_1__* back; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct ice_ring *VAR_7,
         struct ice_tx_buf *VAR_8)
{
 struct sk_buff *VAR_9 = VAR_8->skb;

 if (!FUNC_2(VAR_0, VAR_7->vsi->back->flags))
  return 0;


 if ((VAR_8->tx_flags & (VAR_1 | VAR_2)) ||
     VAR_9->priority != VAR_6) {
  VAR_8->tx_flags &= ~VAR_3;

  VAR_8->tx_flags |= (VAR_9->priority & 0x7) <<
       VAR_4;
  if (VAR_8->tx_flags & VAR_2) {
   struct vlan_ethhdr *VAR_10;
   int VAR_11;

   VAR_11 = FUNC_1(VAR_9, 0);
   if (VAR_11 < 0)
    return VAR_11;
   VAR_10 = (struct vlan_ethhdr *)VAR_9->data;
   VAR_10->h_vlan_TCI = FUNC_0(VAR_8->tx_flags >>
       VAR_5);
  } else {
   VAR_8->tx_flags |= VAR_1;
  }
 }

 return 0;
}
