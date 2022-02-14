
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftmac100 {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct ftmac100*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct ftmac100* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 struct ftmac100 *VAR_4 = FUNC_3(VAR_3);


 FUNC_0(VAR_4);
 if (FUNC_1(FUNC_4(VAR_3)))
  FUNC_2(&VAR_4->napi);

 return VAR_0;
}
