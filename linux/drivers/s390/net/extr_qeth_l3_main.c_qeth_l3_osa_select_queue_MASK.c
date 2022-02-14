
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct qeth_card {int dummy; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (struct qeth_card*,struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_1(struct net_device *VAR_0, struct sk_buff *VAR_1,
        struct net_device *VAR_2)
{
 struct qeth_card *VAR_3 = VAR_0->ml_priv;

 return FUNC_0(VAR_3, VAR_1);
}
