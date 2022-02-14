
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct enet_cb {struct sk_buff* skb; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct enet_cb*,int ) ;
 int FUNC_1 (struct enet_cb*,int ,int ) ;
 int FUNC_2 (struct enet_cb*,int ) ;
 int FUNC_3 (struct device*,scalar_t__,int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct device *VAR_3,
        struct enet_cb *VAR_4)
{
 struct sk_buff *VAR_5;

 VAR_5 = VAR_4->skb;
 VAR_4->skb = ((void*)0);

 if (FUNC_0(VAR_4, VAR_1)) {
  FUNC_3(VAR_3, FUNC_0(VAR_4, VAR_1),
     FUNC_2(VAR_4, VAR_2), VAR_0);
  FUNC_1(VAR_4, VAR_1, 0);
 }

 return VAR_5;
}
