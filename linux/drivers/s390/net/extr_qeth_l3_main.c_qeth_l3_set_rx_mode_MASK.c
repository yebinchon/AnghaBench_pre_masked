
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int rx_mode_work; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct qeth_card *VAR_1 = VAR_0->ml_priv;

 FUNC_0(&VAR_1->rx_mode_work);
}
