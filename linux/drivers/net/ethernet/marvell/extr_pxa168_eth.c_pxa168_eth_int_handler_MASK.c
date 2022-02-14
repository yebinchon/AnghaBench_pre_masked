
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int napi; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct pxa168_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pxa168_eth_private*,struct net_device*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct pxa168_eth_private*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = (struct net_device *)VAR_4;
 struct pxa168_eth_private *VAR_6 = FUNC_1(VAR_5);

 if (FUNC_3(!FUNC_2(VAR_6, VAR_5)))
  return VAR_2;

 FUNC_4(VAR_6, VAR_0, 0);
 FUNC_0(&VAR_6->napi);
 return VAR_1;
}
