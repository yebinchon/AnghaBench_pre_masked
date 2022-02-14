
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct phy_device {struct dp83640_private* priv; } ;
struct dp83640_skb_info {scalar_t__ tmo; } ;
struct dp83640_private {int hwts_tx_en; int tx_queue; } ;
struct TYPE_2__ {int tx_flags; } ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct phy_device *VAR_3,
        struct sk_buff *VAR_4, int VAR_5)
{
 struct dp83640_skb_info *VAR_6 = (struct dp83640_skb_info *)VAR_4->cb;
 struct dp83640_private *VAR_7 = VAR_3->priv;

 switch (VAR_7->hwts_tx_en) {

 case 128:
  if (FUNC_0(VAR_4, VAR_5)) {
   FUNC_1(VAR_4);
   return;
  }

 case 129:
  FUNC_3(VAR_4)->tx_flags |= VAR_0;
  VAR_6->tmo = VAR_2 + VAR_1;
  FUNC_2(&VAR_7->tx_queue, VAR_4);
  break;

 case 130:
 default:
  FUNC_1(VAR_4);
  break;
 }
}
