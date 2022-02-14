
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct qeth_card {int dummy; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct qeth_card*,struct sk_buff*) ;
 int FUNC_3 (struct net_device*,struct sk_buff*,int ,struct net_device*) ;

__attribute__((used)) static u16 FUNC_4(struct net_device *VAR_0, struct sk_buff *VAR_1,
    struct net_device *VAR_2)
{
 struct qeth_card *VAR_3 = VAR_0->ml_priv;

 if (FUNC_0(VAR_3))
  return FUNC_3(VAR_0, VAR_1,
          FUNC_1(VAR_1),
          VAR_2);
 return FUNC_2(VAR_3, VAR_1);
}
