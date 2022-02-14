
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftmac100 {int irq; int napi; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct ftmac100*) ;
 int FUNC_2 (struct ftmac100*) ;
 int FUNC_3 (struct ftmac100*) ;
 int FUNC_4 (int *) ;
 struct ftmac100* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 struct ftmac100 *VAR_1 = FUNC_5(VAR_0);

 FUNC_1(VAR_1);
 FUNC_6(VAR_0);
 FUNC_4(&VAR_1->napi);
 FUNC_3(VAR_1);
 FUNC_0(VAR_1->irq, VAR_0);
 FUNC_2(VAR_1);

 return 0;
}
