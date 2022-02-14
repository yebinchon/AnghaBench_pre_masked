
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct greth_private {int irq; int napi; } ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (struct greth_private*) ;
 int FUNC_2 (struct greth_private*) ;
 int FUNC_3 (struct greth_private*) ;
 int FUNC_4 (struct greth_private*) ;
 int FUNC_5 (int *) ;
 struct greth_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0)
{
 struct greth_private *VAR_1 = FUNC_6(VAR_0);

 FUNC_5(&VAR_1->napi);

 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_7(VAR_0);

 FUNC_0(VAR_1->irq, (void *) VAR_0);

 FUNC_1(VAR_1);

 return 0;
}
