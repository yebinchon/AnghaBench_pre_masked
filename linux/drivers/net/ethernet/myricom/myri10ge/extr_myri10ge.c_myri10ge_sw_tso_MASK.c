
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct sk_buff* next; } ;
struct net_device {int features; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct myri10ge_slice_state {TYPE_1__ stats; } ;
struct myri10ge_priv {struct myri10ge_slice_state* ss; } ;
typedef scalar_t__ netdev_tx_t ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct net_device*) ;
 struct myri10ge_priv* FUNC_3 (struct net_device*) ;
 size_t FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_2,
      struct net_device *VAR_3)
{
 struct sk_buff *VAR_4, *VAR_5;
 struct myri10ge_priv *VAR_6 = FUNC_3(VAR_3);
 struct myri10ge_slice_state *VAR_7;
 netdev_tx_t VAR_8;

 VAR_4 = FUNC_5(VAR_2, VAR_3->features & ~VAR_1);
 if (FUNC_0(VAR_4))
  goto drop;

 while (VAR_4) {
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
  VAR_5->next = ((void*)0);
  VAR_8 = FUNC_2(VAR_5, VAR_3);
  if (VAR_8 != 0) {
   FUNC_1(VAR_5);
   if (VAR_4 != ((void*)0)) {
    VAR_5 = VAR_4;
    VAR_4 = VAR_4->next;
    VAR_5->next = ((void*)0);
    FUNC_1(VAR_4);
   }
   goto drop;
  }
 }
 FUNC_1(VAR_2);
 return VAR_0;

drop:
 VAR_7 = &VAR_6->ss[FUNC_4(VAR_2)];
 FUNC_1(VAR_2);
 VAR_7->stats.tx_dropped += 1;
 return VAR_0;
}
