
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct pn533 {int fragment_skb; int tgt_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct pn533*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct pn533 *VAR_2, struct sk_buff *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;

 do {

  if (VAR_3->len > VAR_0)
   VAR_5 = VAR_0;
  else
   VAR_5 = VAR_3->len;


  VAR_4 = FUNC_1(VAR_2, VAR_5);
  if (!VAR_4) {
   FUNC_6(&VAR_2->fragment_skb);
   break;
  }

  if (!VAR_2->tgt_mode) {

   FUNC_8(VAR_4, 1);


   if (VAR_5 == VAR_0)
    *(u8 *)FUNC_3(VAR_4, sizeof(u8)) =
      (VAR_1 | 1);
   else
    *(u8 *)FUNC_3(VAR_4, sizeof(u8)) = 1;
  }

  FUNC_4(VAR_4, VAR_3->data, VAR_5);


  FUNC_2(VAR_3, VAR_5);


  FUNC_7(&VAR_2->fragment_skb, VAR_4);

 } while (VAR_3->len > 0);

 FUNC_0(VAR_3);

 return FUNC_5(&VAR_2->fragment_skb);
}
