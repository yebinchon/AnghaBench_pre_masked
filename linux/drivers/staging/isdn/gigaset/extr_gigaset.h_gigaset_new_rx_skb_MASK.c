
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cardstate {unsigned short hw_hdr_len; int dev; } ;
struct bc_state {struct sk_buff* rx_skb; scalar_t__ rx_bufsize; scalar_t__ ignore; struct cardstate* cs; } ;


 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sk_buff*,unsigned short) ;

__attribute__((used)) static inline struct sk_buff *FUNC_3(struct bc_state *VAR_0)
{
 struct cardstate *VAR_1 = VAR_0->cs;
 unsigned short VAR_2 = VAR_1->hw_hdr_len;

 if (VAR_0->ignore) {
  VAR_0->rx_skb = ((void*)0);
 } else {
  VAR_0->rx_skb = FUNC_0(VAR_0->rx_bufsize + VAR_2);
  if (VAR_0->rx_skb == ((void*)0))
   FUNC_1(VAR_1->dev, "could not allocate skb\n");
  else
   FUNC_2(VAR_0->rx_skb, VAR_2);
 }
 return VAR_0->rx_skb;
}
