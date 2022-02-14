
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {int tstamp_lock; int tx_tstamp_skb; } ;
struct xgbe_packet_data {int attributes; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct xgbe_prv_data *VAR_3,
    struct sk_buff *VAR_4,
    struct xgbe_packet_data *VAR_5)
{
 unsigned long VAR_6;

 if (FUNC_0(VAR_5->attributes, VAR_2, VAR_0)) {
  FUNC_5(&VAR_3->tstamp_lock, VAR_6);
  if (VAR_3->tx_tstamp_skb) {

   FUNC_1(VAR_5->attributes,
           VAR_2, VAR_0, 0);
  } else {
   VAR_3->tx_tstamp_skb = FUNC_2(VAR_4);
   FUNC_3(VAR_4)->tx_flags |= VAR_1;
  }
  FUNC_6(&VAR_3->tstamp_lock, VAR_6);
 }

 FUNC_4(VAR_4);
}
