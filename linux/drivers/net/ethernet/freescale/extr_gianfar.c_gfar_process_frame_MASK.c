
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct rxfcb {int vlctl; int flags; } ;
struct net_device {int features; } ;
struct gfar_private {scalar_t__ padding; scalar_t__ hwts_rx_en; scalar_t__ uses_rxfcb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct rxfcb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct skb_shared_hwtstamps*,int ,int) ;
 struct gfar_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 struct skb_shared_hwtstamps* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_6, struct sk_buff *VAR_7)
{
 struct gfar_private *VAR_8 = FUNC_6(VAR_6);
 struct rxfcb *VAR_9 = ((void*)0);


 VAR_9 = (struct rxfcb *)VAR_7->data;




 if (VAR_8->uses_rxfcb)
  FUNC_10(VAR_7, VAR_2);


 if (VAR_8->hwts_rx_en) {
  struct skb_shared_hwtstamps *VAR_10 = FUNC_9(VAR_7);
  u64 *VAR_11 = (u64 *) VAR_7->data;

  FUNC_5(VAR_10, 0, sizeof(*VAR_10));
  VAR_10->hwtstamp = FUNC_7(FUNC_2(*VAR_11));
 }

 if (VAR_8->padding)
  FUNC_10(VAR_7, VAR_8->padding);


 FUNC_8(VAR_7, VAR_7->len - VAR_0);

 if (VAR_6->features & VAR_4)
  FUNC_3(VAR_7, VAR_9);





 if (VAR_6->features & VAR_3 &&
     FUNC_1(VAR_9->flags) & VAR_5)
  FUNC_0(VAR_7, FUNC_4(VAR_1),
           FUNC_1(VAR_9->vlctl));
}
