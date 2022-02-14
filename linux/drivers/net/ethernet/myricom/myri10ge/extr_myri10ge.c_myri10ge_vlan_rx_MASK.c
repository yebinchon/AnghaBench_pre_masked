
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vlan_ethhdr {scalar_t__ h_vlan_proto; int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ ip_summed; int data_len; int len; int csum; } ;
struct net_device {int features; } ;
typedef int skb_frag_t ;
typedef int __wsum ;
struct TYPE_2__ {int * frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_9(struct net_device *VAR_7, void *VAR_8, struct sk_buff *VAR_9)
{
 u8 *VAR_10;
 struct vlan_ethhdr *VAR_11;
 skb_frag_t *VAR_12;
 __wsum VAR_13;

 VAR_10 = VAR_8;
 VAR_10 += VAR_4;
 VAR_11 = (struct vlan_ethhdr *)VAR_10;
 if ((VAR_7->features & VAR_5) ==
     VAR_5 &&
     VAR_11->h_vlan_proto == FUNC_3(VAR_3)) {

  if (VAR_9->ip_summed == VAR_0) {
   VAR_13 = FUNC_1(VAR_10 + VAR_2, VAR_6, 0);
   VAR_9->csum = FUNC_2(VAR_9->csum, VAR_13);
  }

  FUNC_0(VAR_9, FUNC_3(VAR_3), FUNC_5(VAR_11->h_vlan_TCI));
  FUNC_4(VAR_10 + VAR_6, VAR_10, 2 * VAR_1);
  VAR_9->len -= VAR_6;
  VAR_9->data_len -= VAR_6;
  VAR_12 = FUNC_8(VAR_9)->frags;
  FUNC_6(VAR_12, VAR_6);
  FUNC_7(VAR_12, VAR_6);
 }
}
