
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data_cb; int * assist_cb; } ;
struct qeth_card {TYPE_1__ osn_info; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;

void FUNC_1(struct net_device *VAR_0)
{
 struct qeth_card *VAR_1;

 if (!VAR_0)
  return;
 VAR_1 = VAR_0->ml_priv;
 if (!VAR_1)
  return;
 FUNC_0(VAR_1, 2, "osndereg");
 VAR_1->osn_info.assist_cb = ((void*)0);
 VAR_1->osn_info.data_cb = ((void*)0);
 return;
}
