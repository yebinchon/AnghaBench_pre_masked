
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct qeth_card *VAR_1;

 VAR_1 = VAR_0->ml_priv;
 FUNC_0(VAR_1, 4, "txtimeo");
 FUNC_1(VAR_1);
}
