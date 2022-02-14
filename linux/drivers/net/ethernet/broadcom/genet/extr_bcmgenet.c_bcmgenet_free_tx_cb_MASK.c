
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct enet_cb {struct sk_buff* skb; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct enet_cb* last_cb; struct enet_cb* first_cb; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct enet_cb*,int ) ;
 int FUNC_2 (struct enet_cb*,int ,int ) ;
 int FUNC_3 (struct enet_cb*,int ) ;
 int FUNC_4 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct device*,scalar_t__,int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct device *VAR_3,
        struct enet_cb *VAR_4)
{
 struct sk_buff *VAR_5;

 VAR_5 = VAR_4->skb;

 if (VAR_5) {
  VAR_4->skb = ((void*)0);
  if (VAR_4 == FUNC_0(VAR_5)->first_cb)
   FUNC_5(VAR_3, FUNC_1(VAR_4, VAR_1),
      FUNC_3(VAR_4, VAR_2),
      VAR_0);
  else
   FUNC_4(VAR_3, FUNC_1(VAR_4, VAR_1),
           FUNC_3(VAR_4, VAR_2),
           VAR_0);
  FUNC_2(VAR_4, VAR_1, 0);

  if (VAR_4 == FUNC_0(VAR_5)->last_cb)
   return VAR_5;

 } else if (FUNC_1(VAR_4, VAR_1)) {
  FUNC_4(VAR_3,
          FUNC_1(VAR_4, VAR_1),
          FUNC_3(VAR_4, VAR_2),
          VAR_0);
  FUNC_2(VAR_4, VAR_1, 0);
 }

 return ((void*)0);
}
